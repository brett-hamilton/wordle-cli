#include <iostream>
//#include <string>

const std::string word = "trace";

void displayGame (std::string& currentGuess) {
	std::cout << "Address of 'guess' = " << &currentGuess << "\n";

	
}

int main () {

	std::cout << "Guess: ";
	std::string guess = "";
	std::cin >> guess;

	std::cout << "Address of 'guess' = " << &guess << "\n";

	displayGame(guess);

	// Game loop:
	//	1. Show letters guessed
	//	2. Prompt for word guess
	//	3. Check letters
	//	4. If correct guess, end; else, continue to #1

	// Display:
	//	
	//	_ R _ _ E
	//
	//  Available Letters: 
	//	
	//	  B C D   F G H
	//	I J K L M N O P
	//  Q R S   U V W X
	//  Y Z
	//
	//	Guess: 

	return 0;
}