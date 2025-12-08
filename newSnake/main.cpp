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
	SnakeStart();
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

		if (snakeBody[0].rowPosition == 0 || snakeBody[0].rowPosition == ROWS - 1 || snakeBody[0].columnPosition == 0 || snakeBody[0].columnPosition == COLUMNS - 1) playing = false;

		score += 2;

		std::this_thread::sleep_for(std::chrono::milliseconds(FRAMERATE));
	}

	system("CLS");
	std::cout << "Thank you for playing!" << "\n";
	std::cout << "Your score was: " << score << "\n\n";

	if (score > 2000) std::cout << "You did really well!" << "\n\n\n";

	system("PAUSE"); //There's a very good reason for having so many pauses
	system("PAUSE");
	system("PAUSE");
	system("PAUSE");

	return 0;

}


