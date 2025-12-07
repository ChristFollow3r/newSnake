#include <iostream>
#include "header.h"
#include <vector>


	// 4. Add input + movement
	// 5. Make the snake die when touching the walls
	// 6. Make the sneak be able to eat fruits
	// 7. Make the snake grow
	// 8. Add the score

void FruitGenerator();
void SnakeGrowth();

Coordinates fruit;

void Playground() {


	char playground[ROWS][COLUMNS];

	int maxFruitRowPosition = ROWS - 1;
	int maxFruitColumnPosition = COLUMNS - 1;

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

	do
	{
		FruitGenerator();
	} while (fruit.rowPosition == 0 || fruit.rowPosition >= maxFruitRowPosition || fruit.columnPosition == 0 || fruit.columnPosition >= maxFruitColumnPosition);

	playground[fruit.rowPosition][fruit.columnPosition] = 'O';
	playground[snakeBody[0].rowPosition][snakeBody[0].columnPosition] = 'X';

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLUMNS; j++)
		{
			std::cout << playground[i][j];
		}std::cout << "\n";
	}

}

void FruitGenerator() {

	int maxRowPosition = ROWS - 1;
	int maxFruitPosition = COLUMNS - 1;

	int rowP = rand() % maxRowPosition;
	int columnP = rand() % maxFruitPosition;
	
	fruit.rowPosition = rowP;
	fruit.columnPosition = columnP;

}
