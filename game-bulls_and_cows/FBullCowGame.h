#pragma once
#include <string>

class FBullCowGame {
public:

	int GetCurrentTry() const;
	int GetMaxTries() const;
	bool isGameWon() const;

	void Reset(); //make more rich return value
	bool CheckGuessValidity(std::string);

private:
	int MyCurrentTry = 1;
	int MyMaxTries = 5;
};