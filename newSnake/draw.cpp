#include <iostream>
#include "header.h"
#include <vector>


	// 5. Make the snake die when touching the walls
	// 7. Make the snake grow
	// 8. Add the score

void FruitGenerator();
void SnakeGrowth();

int maxFruitRowPosition = ROWS - 1;
int maxFruitColumnPosition = COLUMNS - 1;
int points = 0;


void Playground() {


	char playground[ROWS][COLUMNS];

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLUMNS; j++)
		{
			if (i == 0 || i == ROWS - 1) {
				playground[i][j] = '#';
			}

			else if (j == 0 || j == COLUMNS - 1) {
				playground[i][j] = '#';
			}


			else playground[i][j] = ' ';

		}
	}


	playground[fruit.rowPosition][fruit.columnPosition] = 'O';
	playground[snakeBody[0].rowPosition][snakeBody[0].columnPosition] = 'X';

	std::cout << "Score: " << points << "\n" << "\n"; // Extreme lag idk why. Might be my pc lagging for now or I'm doing something the wrong way.

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLUMNS; j++)
		{
			std::cout << playground[i][j];
		}std::cout << "\n";
	}

}

Coordinates fruit;

void FruitGenerator() {

	int maxRowPosition = ROWS - 2;
	int maxFruitPosition = COLUMNS - 2;

	int rowP = rand() % maxRowPosition;
	int columnP = rand() % maxFruitPosition;
	
	fruit.rowPosition = rowP + 1;
	fruit.columnPosition = columnP + 1;

}

