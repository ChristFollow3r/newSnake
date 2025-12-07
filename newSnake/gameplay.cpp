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