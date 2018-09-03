#include <iostream>;
#include <string>;

using namespace std;

void PrintIntro();
string GetGuessAndPrintBack();

// entry point for the application
int main() 
{
	PrintIntro();
	GetGuessAndPrintBack();

	
	
	

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

string GetGuessAndPrintBack() {
	// get a guess from the player
	cout << "What is your guess?? \n";
	string Guess = "";
	getline(cin, Guess);

	// repeat the guess back to them
	cout << "You've guessed " << Guess;

	return Guess;
}