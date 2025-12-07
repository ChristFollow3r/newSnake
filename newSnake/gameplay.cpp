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
	
	if (Up() == true && snakeMovement != DOWN) snakeMovement = UP;
	if (Down() == true && snakeMovement != UP) snakeMovement = DOWN;
	if (Left() == true && snakeMovement != RIGHT) snakeMovement = LEFT;
	if (Right() == true && snakeMovement != LEFT) snakeMovement = RIGHT;



	switch (snakeMovement) {

	case STOP:
		break;

	case UP:
		snakeBody[0].rowPosition -= 1;
		break;
	
	case DOWN:
		snakeBody[0].rowPosition += 1;
		break;

	case LEFT:
		snakeBody[0].columnPosition -= 1;
		break;

	case RIGHT:
		snakeBody[0].columnPosition += 1;
		break;


	}


}

Coordinates initialPosition{ (ROWS) / 2, (COLUMNS) / 2 };
std::vector<Coordinates> snakeBody;


void SnakeGrowth() {

	snakeBody.push_back(initialPosition);

}