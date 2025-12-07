#include "header.h"
#include <Windows.h>
#include <ctime>
#include <cstdlib>
#include <thread>
#include <chrono>

#define FRAMERATE 350


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
			FruitGenerator();
		}


		std::this_thread::sleep_for(std::chrono::milliseconds(FRAMERATE));
	}

	return 0;

}