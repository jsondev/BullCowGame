#include <iostream>;
#include <string>;
#include "FBullCowGame.h";



void PrintIntro();
void PlayGame();
std::string GetGuess();
void RemainingGuesses(int remainingGuesses);
bool AskToPlayAgain();
FBullCowGame BCGame; // instantiate a new game

// entry point for the application
int main()
{
	bool bPlayAgain = false;
	do {
		PrintIntro();
		PlayGame();
		bPlayAgain = AskToPlayAgain();
	} while (bPlayAgain);

	return 0;
}

void PrintIntro() {
	// introduce the game
	constexpr int WORD_LENGTH = 5;
	std::cout << "Welcome to Bulls and Cows!!" << std::endl;
	std::cout << "Can you guess the " << WORD_LENGTH << std::endl;
	std::cout << "letter isogram I'm thinking of? \n";
	std::cout << std::endl;
	return;
}
void PlayGame() {
	
	int MaxTries = BCGame.GetMaxTries();
	// loop through the number of turns
	// TODO change from FOR to WHILE loop once we are validating rules
	for (int count = 0; count <= MaxTries; count++)
	{
		std::string Guess = GetGuess(); // TODO make check for valid guesses
		// submit valid guess to game

		// print number of bulls and cows
		std::cout << "You've guessed " << Guess << std::endl;
		int remainingGuesses = MaxTries - count;
		RemainingGuesses(remainingGuesses);
	};

	// TODO summarise game
	return;
}

std::string GetGuess() {
	int CurrentTry = BCGame.GetCurrentTry();
	// get a guess from the player
	std::cout << "Try " << CurrentTry << ". Enter your guess: ";
	std::string Guess;
	getline(std::cin, Guess);
	return Guess;
}


void RemainingGuesses(int remainingGuesses) {
	// tells player how many guesses they have left
	std::cout << "You have " << remainingGuesses << " left \n";
	std::cout << std::endl;
	return;
}

bool AskToPlayAgain() {
	std::cout << "Do you want to play again? (y/n) ";
	std::string Response;
	getline(std::cin, Response);
	if (Response[0] == 'y' || Response[0] == 'Y') {
		std::cout << "You want to play again! :-) \n";
		std::cout << std::endl;
		return true;
	}
	else {
		std::cout << "You don't want to play again :-( \n";
		return false;
	}
}