#include <iostream>
#include <string>
#include <fstream>
#include "ConfigParser.h"

using namespace std;


void ConfigParser::load(string fileName) {
	
	ifstream gameFile(fileName);
	//ifstream gameFile("C:\\_Computerstuff\\Informatik - Games Engineering\\SS 2020\\Praktikum Echtzeit Computergrafik\\hemming\\ConfigurationParser\\game.cfg");

	if (gameFile.is_open()) {

		cout << "File open:\n";

		string varName;
		float varValue;

		while (gameFile >> varName >> varValue)
		{
			if (varName == "spinning") spinning = varValue;
			else if (varName == "spinSpeed") spinSpeed = varValue;
			else if (varName == "backgroundColor") {


				backgroundColor.r = varValue;
				gameFile >> backgroundColor.g;
				gameFile >> backgroundColor.b;
			}
			else if (varName == "terrainWidth") terrainWidth = varValue;
			else if (varName == "terrainDepth") terrainDepth = varValue;
			else if (varName == "terrainHeight") terrainHeight = varValue;
			else {
				cout << "ERROR UNKNOWN VARIABLE NAME";
			}
		}

		gameFile.close();
	}
}


float ConfigParser::getSpinning()
{
	return spinning;
}
float ConfigParser::getspinSpeed()
{
	return spinSpeed;
}
ConfigParser::Color ConfigParser::getBackgroundColor()
{
	return backgroundColor;
}
string ConfigParser::getTerrainPath()
{
	return terrainPath;
}
float ConfigParser::getTerrainWidth()
{
	return terrainWidth;
}
float ConfigParser::getTerrainDepth()
{
	return terrainDepth;
}
float ConfigParser::getTerrainHeight()
{
	return terrainHeight;
}
