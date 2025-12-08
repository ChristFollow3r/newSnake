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
	
	if (Up() == true && snakeMovement != DOWN) snakeMovement = UP; // This gives me a headache. Basically if the bool function returns true (is pressed) and the enum is not DOWN
	if (Down() == true && snakeMovement != UP) snakeMovement = DOWN; // Wich means Down() is false, then enum is UP (1), and we do -1 on rows to go up.
	if (Left() == true && snakeMovement != RIGHT) snakeMovement = LEFT;
	if (Right() == true && snakeMovement != LEFT) snakeMovement = RIGHT;
	
	for (int i = snakeBody.size() - 1; i > 0; i--) {
		snakeBody[i] = snakeBody[i - 1];
	}

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

	if (snakeBody[0].rowPosition == fruit.rowPosition && snakeBody[0].columnPosition == fruit.columnPosition) {
		score += 100;
		FruitGenerator();
		snakegrowth();
	}

}

Coordinates initialPosition{ (ROWS) / 2, (COLUMNS) / 2 };
std::vector<Coordinates> snakeBody;


void SnakeStart() {

	snakeBody.push_back(initialPosition);

}

void snakegrowth() {

	Coordinates part = snakeBody.back();
	snakeBody.push_back(part);
}

