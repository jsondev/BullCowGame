#include "FBullCowGame.h";
using int32 = int;
using FString = std::string;

FBullCowGame::FBullCowGame(){Reset();}

int32 FBullCowGame::GetMaxTries() const { return MyMaxTries; }
int32 FBullCowGame::GetCurrentTry() const { return MyCurrentTry; }

void FBullCowGame::Reset()
{
	constexpr int32 MAX_TRIES = 8;
	MyMaxTries = MAX_TRIES;
	constexpr int32 STARTING_TRY = 1;
	MyCurrentTry = STARTING_TRY;
	return;
}

bool FBullCowGame::CheckGuessValidity(FString)
{
	return false;
}
// receives a VALID guess, increments turn, and returns count
BullCowCount FBullCowGame::SubmitGuess(FString)
{
	// increment the turn number
	// setup a return variable
	// loop through all letters in the guess
		//compare letters against the hidden word

	
	return BullCowCount();
}

bool FBullCowGame::IsGameWon () const 
{
	return false;
}

