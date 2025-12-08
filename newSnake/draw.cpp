#include <iostream>
#include "header.h"
#include <vector>

void FruitGenerator();

int maxFruitRowPosition = ROWS - 1;
int maxFruitColumnPosition = COLUMNS - 1;
int score = 0;


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

	for (int i = 0; i < snakeBody.size(); i++) // This is kinda shit
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

	// I need to make it so that the fruits cant spawn anywhere where the snake head/body is.
	int maxRowPosition = ROWS - 2;
	int maxFruitPosition = COLUMNS - 2;

	int rowP = rand() % maxRowPosition;
	int columnP = rand() % maxFruitPosition;
	
	fruit.rowPosition = rowP + 1;
	fruit.columnPosition = columnP + 1;

}

