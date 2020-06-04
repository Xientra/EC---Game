#include <iostream>
#include <string>
#include <fstream>
#include "ConfigParser.h"

using namespace std;


bool ConfigParser::load(string fileName)
{

	// Create a new filestream
	std::ifstream configfile;

	// Open the config file in read mode (default)
	configfile.open(fileName);

	// If we could not open the file, return early with an "error"
	if (!configfile.is_open())
	{
		return false;
	}

	// Read the file while we have not reached the end and the filestream is working
	while (configfile.is_open() && configfile.good() && !configfile.eof())
	{
		std::string key;
		// Stream the next word into key
		configfile >> key;

		// Streams cast their content automatically
		if (key == "spinning")
			configfile >> spinning;
		else if (key == "spinSpeed")
			configfile >> spinSpeed;
		else if (key == "backgroundColor")
		{
			configfile >> backgroundColor.r;
			configfile >> backgroundColor.g;
			configfile >> backgroundColor.b;
		} else if (key == "TerrainPath")
		{
			configfile >> terrainHeightPath;
			configfile >> terrainColorPath;
			configfile >> terrainNormalPath;
		} 
		else if (key == "TerrainWidth")
			configfile >> terrainWidth;
		else if (key == "TerrainHeight")
			configfile >> terrainHeight;
		else if (key == "TerrainDepth")
			configfile >> terrainDepth;

	}

	// Close the file
	configfile.close();

	return true;

	/*
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
	*/
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

string ConfigParser::getTerrainHeightPath()
{
	return terrainHeightPath;
}
string ConfigParser::getTerrainColorPath()
{
	return terrainColorPath;
}
string ConfigParser::getTerrainNormalPath()
{
	return terrainNormalPath;
}

ConfigParser configParserInstance;