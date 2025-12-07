#pragma once
#include <vector>


#define ROWS 21
#define COLUMNS 41 // Bigger snake means more fun :V 

void Playground();
void FruitGenerator();
void SnakeGrowth();
void SnakeMovement();

bool Up();
bool Down();
bool Left();
bool Right();

struct Coordinates {
	int rowPosition;
	int columnPosition;
};

extern std::vector<Coordinates> snakeBody;
extern Coordinates fruit;