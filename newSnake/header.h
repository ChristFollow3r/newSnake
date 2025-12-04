#pragma once


#define ROWS 20
#define COLUMNS 40 // Bigger snake means more fun :V

void Playground();
void FruitGenerator();

struct Coordinates {
	short rowPosition;
	short columnPosition;
};