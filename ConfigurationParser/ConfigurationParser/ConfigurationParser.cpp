
#include <iostream>
#include "ConfigParser.h"

int main()
{
	
	ConfigParser cp;
	
	std::string filePath = "C:\\_Computerstuff\\Informatik - Games Engineering\\SS 2020\\Praktikum Echtzeit Computergrafik\\hemming\\ConfigurationParser\\game.cfg";
	
	cp.load(filePath);

	cout << cp.getSpinning() << endl;
	cout << cp.getspinSpeed() << endl;

	cout << cp.getTerrainPath() << endl;

	cout << cp.getBackgroundColor().r << cp.getBackgroundColor().g << cp.getBackgroundColor().b << endl;

	cout << cp.getTerrainWidth() << endl;
	cout << cp.getTerrainDepth() << endl;
	cout << cp.getTerrainHeight() << endl;
}
