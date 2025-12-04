#include <iostream>
#include "header.h"

	// 1. Print the grid where we'll play
	// 2. Generate random fruits
	// 3. Create the snake
	// 3.5 Add the system cls and the refresh rate or whatever its called
	// 4. Add input + movement
	// 5. Make the snake die when touching the walls
	// 6. Make the sneak be able to eat fruits
	// 7. Make the snake grow
	// 8. Add the score


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



	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLUMNS; j++)
		{
			std::cout << playground[i][j];
		}std::cout << "\n";
	}

	}
