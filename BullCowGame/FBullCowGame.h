#pragma once

class FBullCowGame {
public:
	void Reset(); //TODO make a more rich return value;
	int GetMaxTries();
	int CurrentTry();
	bool IsGameWon();
	bool CheckGuessValidity(string); // TODO make a more rich return value;

private:
	int MyCurrentTry;
	int MyMaxTries;

};