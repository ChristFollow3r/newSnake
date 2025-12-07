#include "header.h"
#include <Windows.h>
#include <ctime>
#include <cstdlib>
#include <thread>
#include <chrono>
#include <iostream>;

#define FRAMERATE 150


int main() {

	srand(time(NULL));
	SnakeGrowth();
	bool playing = true;
	bool generateFirstFruit = true;

	while (playing)
	{
		if (generateFirstFruit == true) {
			FruitGenerator();
			generateFirstFruit = false;
		}

		system("CLS");
		Playground();
		SnakeMovement();

		if (snakeBody[0].rowPosition == fruit.rowPosition && snakeBody[0].columnPosition == fruit.columnPosition) {
			points += 100;
			FruitGenerator();
		}

		if (snakeBody[0].rowPosition == 0 || snakeBody[0].rowPosition == ROWS - 1 || snakeBody[0].columnPosition == 0 || snakeBody[0].columnPosition == COLUMNS - 1) {
			playing = false;
		}

		points += 2;

		std::this_thread::sleep_for(std::chrono::milliseconds(FRAMERATE));
	}

	// Function for when you lose

	return 0;

}