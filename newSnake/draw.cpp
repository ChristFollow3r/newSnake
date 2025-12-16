#include <iostream>
#include "header.h"
#include <vector>

void FruitGenerator(); // I like to write my functions from bottom to top and decleare them at the top.

int maxFruitRowPosition = ROWS - 1;
int maxFruitColumnPosition = COLUMNS - 1;
int score = 0;


void Playground() { // You'll ask your self. Where are the parameters. How's this even possible. - EXTERNS - :)


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

	for (int i = 0; i < snakeBody.size(); i++) 
	{
		playground[snakeBody[i].rowPosition][snakeBody[i].columnPosition] = 'X';
	}

	std::cout << "Score: " << score << "\n" << "\n"; 

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

	// Known bug that now is a feature. Fruits can spawn at any body position, the snake trembles as a juicy ghostly entity roams freely in his body for a brief period of time.

	int maxRowPosition = ROWS - 2;
	int maxFruitPosition = COLUMNS - 2;

	int rowP = rand() % maxRowPosition;
	int columnP = rand() % maxFruitPosition;
	
	fruit.rowPosition = rowP + 1;
	fruit.columnPosition = columnP + 1;

}

