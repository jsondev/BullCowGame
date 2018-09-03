#include <iostream>;
#include <string>;

using namespace std;

void PrintIntro();
string GetGuessAndPrintBack(int remainingGuesses);

// entry point for the application
int main() 
{
	
	PrintIntro();
	constexpr int TOTAL_GUESSES = 5;
	for(int i = 0; i <= TOTAL_GUESSES; i++)
	{
		int remainingGuesses = TOTAL_GUESSES - i;
	GetGuessAndPrintBack(remainingGuesses);
	};


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

string GetGuessAndPrintBack(int remainingGuesses) {
	// get a guess from the player
	cout << "What is your guess?? \n";
	string Guess = "";
	getline(cin, Guess);

	// repeat the guess back to them
	cout << "You've guessed " << Guess;
	cout << endl;
	cout << "You have " << remainingGuesses << " left \n";
	cout << endl;

	return Guess;
}