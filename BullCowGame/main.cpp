#include <iostream>;
#include <string>;

using namespace std;

int main() 
{
	// introduce the game
	constexpr int WORLD_LENGTH = 3;
	cout << "Welcome to Bulls and Cows!!" << endl;
	cout << "Can you guess the " << WORLD_LENGTH << endl; 
	cout << "letter isogram I'm thinking of? \n";

	// get a guess from the player
	cout << "What is your guess?? \n";
	string Guess = "";
	getline(cin, Guess);
	
	// repeat the guess back to them
	cout << "You've guessed " << Guess; 

	return 0;
}