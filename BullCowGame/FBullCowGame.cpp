#include "FBullCowGame.h";

FBullCowGame::FBullCowGame(){Reset();}

int FBullCowGame::GetMaxTries() const { return MyMaxTries; }
int FBullCowGame::GetCurrentTry() const { return MyCurrentTry; }

void FBullCowGame::Reset()
{
	constexpr int MAX_TRIES = 8;
	MyMaxTries = MAX_TRIES;
	constexpr int STARTING_TRY = 1;
	MyCurrentTry = STARTING_TRY;
	return;
}

bool FBullCowGame::IsGameWon () const 
{
	return false;
}

bool FBullCowGame::CheckGuessValidity(std::string)
{
	return false;
}
