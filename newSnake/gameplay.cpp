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
	if (Down() == true && snakeMovement != UP) snakeMovement = DOWN; // Wich means Down() is false, then enum is UP (1), and we do -1 on rows to go up. This is super important!
	if (Left() == true && snakeMovement != RIGHT) snakeMovement = LEFT; // This way player can't cancel movement (ex if he's going left he won't be able to go right, unles he turns up or down).
	if (Right() == true && snakeMovement != LEFT) snakeMovement = RIGHT;

	// I talk about this part of the code in the readme.

	for (int i = snakeBody.size() - 1; i > 0; i--) {  // If the snake vector size is bigger than 0 (where the initial position is), the next vector position has the values of the
		snakeBody[i] = snakeBody[i - 1];			  // last position (this is what gives the impresion of the snake parts follwing the head.
	}

	switch (snakeMovement) {

	case STOP:
		break;

	case UP:
		snakeBody[0].rowPosition -= 1; // To go up we need to subtract.
		break;

	case DOWN:
		snakeBody[0].rowPosition += 1; // To go up we add.
		break;

	case LEFT:
		snakeBody[0].columnPosition -= 1;
		break;

	case RIGHT:
		snakeBody[0].columnPosition += 1;
		break;


	}


	if (snakeBody[0].rowPosition == fruit.rowPosition && snakeBody[0].columnPosition == fruit.columnPosition) { 
		
		FruitGenerator(); // Generates a new fruit
		snakegrowth(); // The snake grows

		score += snakeBody.size(); // The score (plus 2 because I want to add 2 points on every frame) plus equals the snake body size
	}

}

Coordinates initialPosition{ (ROWS) / 2, (COLUMNS) / 2 };
std::vector<Coordinates> snakeBody;


void SnakeStart() { // To start the game I need to call this once

	snakeBody.push_back(initialPosition);

}

void snakegrowth() { // Pushes to the snake vector the last struct

	Coordinates part = snakeBody.back(); 
	snakeBody.push_back(part);
}
