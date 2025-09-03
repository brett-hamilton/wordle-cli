#include <iostream>
//#include <string>

const std::string word = "trace";

int main () {

	std::cout << "Guess: ";
	std::string guess = "";
	std::cin >> guess;

	std::cout << "Your guess: " << guess << "\n";

	// Game loop:
	//	1. Show letters guessed
	//	2. Prompt for word guess
	//	3. Check letters
	//	4. If correct guess, end; else, continue to #1

	return 0;
}