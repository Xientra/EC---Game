
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

	void load(string fileName);

	float getSpinning();
	float getspinSpeed();
	Color getBackgroundColor();
	string getTerrainPath();
	float getTerrainWidth();
	float getTerrainDepth();
	float getTerrainHeight();

private:
	float spinning = 0;
	float spinSpeed = 0;

	Color backgroundColor;

	string terrainPath = "";

	float terrainWidth = 0;
	float terrainDepth = 0;
	float terrainHeight = 0;
};
