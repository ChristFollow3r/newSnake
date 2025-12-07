#include <iostream>
#include "header.h"
#include <vector>


	// 3. Create the snake
	// 3.5 Add the system cls and the refresh rate or whatever its called
	// 4. Add input + movement
	// 5. Make the snake die when touching the walls
	// 6. Make the sneak be able to eat fruits
	// 7. Make the snake grow
	// 8. Add the score

void FruitGenerator();

Coordinates fruit;
Coordinates initialPosition{ (ROWS) / 2, (COLUMNS) / 2 };
std::vector<Coordinates> snakeBody;

void Playground() {


	char playground[ROWS][COLUMNS];

	int maxFruitRowPosition = ROWS - 1;
	int maxFruitColumnPosition = COLUMNS - 1;

	snakeBody.push_back(initialPosition);

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


void SnakeCreation() {

	snakeBody.push_back(initialPosition);
}