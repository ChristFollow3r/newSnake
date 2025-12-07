#include "header.h"
#include <Windows.h>
#include <ctime>
#include <cstdlib>
#include <thread>
#include <chrono>

#define FRAMERATE 350


int main() {

	SnakeGrowth();
	bool playing = true;

	while (playing)
	{
		system("CLS");
		srand(time(NULL));

		Playground();

		std::this_thread::sleep_for(std::chrono::milliseconds(FRAMERATE));
	}

	return 0;

}