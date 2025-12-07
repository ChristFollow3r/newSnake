#pragma once



#define ROWS 21
#define COLUMNS 41 // Bigger snake means more fun :V 

void Playground();
void FruitGenerator();
bool Up();
bool Down();
bool Left();
bool Right();


struct Coordinates {
	short rowPosition;
	short columnPosition;
};