#include "header.h"
#include <ctime>
#include <cstdlib>


int main() {

	system("CLS");
	srand(time(NULL));

	Playground();

	std::this_thread::sleep_for(std::chrono::milliseconds(FRAMERATE));

}