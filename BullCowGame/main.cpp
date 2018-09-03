#include <iostream>;
using namespace std;

int main() 
{
	// introduce the game
	constexpr int WORLD_LENGTH = 3;
	cout << "Welcome to Bulls and Cows!!" << endl;
	cout << "Can you guess the " << WORLD_LENGTH << endl; 
	cout << "letter isogram I'm thinking of? \n";
	return 0;
}