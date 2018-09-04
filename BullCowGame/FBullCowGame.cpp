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

bool FBullCowGame::IsGameWon () const 
{
	return false;
}

