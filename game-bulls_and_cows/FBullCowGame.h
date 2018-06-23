#pragma once
#include <string>

class FBullCowGame {
public:
	void Reset(); //make more rich return value
	int GetCurrentTry();
	int GetMaxTries();
	bool isGameWon();
	bool CheckGuessValidity(std::string);

private:
	int MyCurrentTry;
};