#include <iostream>;
#include <string>;

void PrintIntro();
void PlayGame();
std::string GetGuess();
void PrintBackGuess(std::string Guess);
void RemainingGuesses(int remainingGuesses);
bool AskToPlayAgain();

// entry point for the application
int main()
{

	do {
		PrintIntro();
		PlayGame();
	} while (AskToPlayAgain());

	return 0;
}

void PrintIntro() {
	// introduce the game
	constexpr int WORLD_LENGTH = 5;
	std::cout << "Welcome to Bulls and Cows!!" << std::endl;
	std::cout << "Can you guess the " << WORLD_LENGTH << std::endl;
	std::cout << "letter isogram I'm thinking of? \n";
	std::cout << std::endl;
	return;
}
void PlayGame() {
	constexpr int TOTAL_GUESSES = 5;
	for (int i = 0; i <= TOTAL_GUESSES; i++)
	{
		std::string Guess = GetGuess();
		PrintBackGuess(Guess);
		int remainingGuesses = TOTAL_GUESSES - i;
		RemainingGuesses(remainingGuesses);
	};
	return;
}

std::string GetGuess() {
	// get a guess from the player
	std::cout << "What is your guess?? \n";
	std::string Guess;
	getline(std::cin, Guess);
	return Guess;
}

void PrintBackGuess(std::string Guess) {
	// repeat the guess back to them
	std::cout << "You've guessed " << Guess;
	std::cout << std::endl;
	return;
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