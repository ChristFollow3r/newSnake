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

		std::this_thread::sleep_for(std::chrono::milliseconds(FRAMERATE));
	}

	return 0;

}