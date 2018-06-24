#include "stdafx.h"
#include "FBullCowGame.h"

int FBullCowGame::GetCurrentTry() const
{
	return MyCurrentTry;
}

int FBullCowGame::GetMaxTries() const
{
	return MyMaxTries;
}

void FBullCowGame::Reset()
{
	return;
}

bool FBullCowGame::isGameWon() const
{
	return false;
}

bool FBullCowGame::CheckGuessValidity(std::string)
{
	return false;
}