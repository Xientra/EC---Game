
#pragma once

#include <string>

using namespace std;

class ConfigParser
{

public:
	struct Color {
		float r = 0;
		float g = 0;
		float b = 0;
	};

	bool load(string fileName);

	float getSpinning();
	float getspinSpeed();
	Color getBackgroundColor();
	string getTerrainPath();
	float getTerrainWidth();
	float getTerrainDepth();
	float getTerrainHeight();
	string getTerrainHeightPath();
	string getTerrainColorPath();
	string getTerrainNormalPath();


private:
	float spinning = 0;
	float spinSpeed = 0;

	Color backgroundColor;

	string terrainPath = "";

	float terrainWidth = 0;
	float terrainDepth = 0;
	float terrainHeight = 0;

	string terrainHeightPath = "";
	string terrainColorPath = "";
	string terrainNormalPath = "";
};

extern ConfigParser configParserInstance;