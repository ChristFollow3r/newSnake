#include "header.h"
#include <iostream>

enum movement {
	STOP,
	UP,
	DOWN,
	LEFT,
	RIGHT
};

movement snakeMovement;

void SnakeMovement() {

	switch (snakeMovement) {

	case STOP:
		break;

	case UP:
		Up();
		break;
	
	case DOWN:
		Down();
		break;

	case LEFT:
		Left();
		break;

	case RIGHT:
		Right();
		break;


	}


}

Coordinates initialPosition{ (ROWS) / 2, (COLUMNS) / 2 };
std::vector<Coordinates> snakeBody;


void SnakeGrowth() {

	snakeBody.push_back(initialPosition);

}