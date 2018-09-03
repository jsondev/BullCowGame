#include <iostream>;
#include <string>;

using namespace std;

void PrintIntro();
void PlayGame();
string GetGuess();
void PrintBackGuess(string Guess);
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
	cout << "Welcome to Bulls and Cows!!" << endl;
	cout << "Can you guess the " << WORLD_LENGTH << endl;
	cout << "letter isogram I'm thinking of? \n";
	cout << endl;
	return;
}
void PlayGame() {
	constexpr int TOTAL_GUESSES = 5;
	for (int i = 0; i <= TOTAL_GUESSES; i++)
	{
		string Guess = GetGuess();
		PrintBackGuess(Guess);
		int remainingGuesses = TOTAL_GUESSES - i;
		RemainingGuesses(remainingGuesses);
	};
	return;
}

string GetGuess() {
	// get a guess from the player
	cout << "What is your guess?? \n";
	string Guess;
	getline(cin, Guess);
	return Guess;
}

void PrintBackGuess(string Guess) {
	// repeat the guess back to them
	cout << "You've guessed " << Guess;
	cout << endl;
	return;
}
void RemainingGuesses(int remainingGuesses) {
	// tells player how many guesses they have left
	cout << "You have " << remainingGuesses << " left \n";
	cout << endl;
	return;
}

bool AskToPlayAgain() {
	cout << "Do you want to play again? (y/n) ";
	string Response;
	getline(cin, Response);
	if (Response[0] == 'y' || Response[0] == 'Y') {
		cout << "You want to play again! :-) \n";
		cout << endl;
		return true;
	}
	else {
		cout << "You don't want to play again :-( \n";
		return false;
	}
}