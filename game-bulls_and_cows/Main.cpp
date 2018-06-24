// game-bulls_and_cows.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "FBullCowGame.h"

constexpr int WORLD_LENGTH = 5;
const std::string GAME_PROMO = "Bulls and Cows - a genius word game";
const int NUMBER_OF_TURNS = WORLD_LENGTH * 1;
FBullCowGame BCGame;

//prototypes
void PrintIntro(std::string message);
std::string GetGuess();
void PrintToConsole(std::string &Guess);
void PrintPromptMessage(int numberOfcharsInWord);
int main();
void SayGoobye();
void StartGame();
void DrawCowPictureInAscii();
bool bPlayerWantsToPlayAgain();
bool IsCorrectAnswer(std::string answer);

int main()
{
	PrintIntro(GAME_PROMO);
	do
	{
		StartGame();
	} while (bPlayerWantsToPlayAgain());

	SayGoobye();

	return 0;
}

void SayGoobye()
{
	std::cout << "Thank you for playing!" << std::endl << "Have a great day!!" << std::endl;
}

bool bPlayerWantsToPlayAgain()
{
	std::string answer;
	bool playAgain = false;
	do
	{
		std::cout << "Would you like to play again? (Y/N)" << std::endl;
		std::getline(std::cin, answer);
		std::cout << std::endl;
		if (answer == "Y" or answer == "y")
		{
			playAgain = true;
		}
		else if (answer == "Y" or answer == "y")
		{
			playAgain = false;
		}
	} while (!IsCorrectAnswer(answer));
	return playAgain;
}

bool IsCorrectAnswer(std::string answer)
{
	return answer == "Y" || answer == "y" || answer == "n" || answer == "N";
}

void StartGame()
{
	int MaxTries = BCGame.GetMaxTries();

	std::string Guess = "";

	for (int i = 1; i <= MaxTries; i++)
	{
		Guess = GetGuess();
		PrintToConsole(Guess);
		std::cout << "Remaining guesses: " << MaxTries - i << std::endl;
		std::cout << std::endl;
	}
}

void PrintPromptMessage(int numberOfcharsInWord)
{
	std::cout << "Can you guess the " << numberOfcharsInWord << " letter isogram I am thinking off?" << std::endl;
}

std::string GetGuess()
{
	int CurrentTry = BCGame.GetCurrentTry();
	std::string Guess = "";
	std::cout << "Try " << CurrentTry << ". " << "Enter your guess: ";
	std::getline(std::cin, Guess);
	return Guess;
}

void PrintToConsole(std::string &Guess)
{
	std::cout << "Your guess was : " << Guess << std::endl;
}

void PrintIntro(std::string message)
{
	std::cout << "Welcome to " << message << "! \n";
	DrawCowPictureInAscii();
	PrintPromptMessage(WORLD_LENGTH);
}

void DrawCowPictureInAscii()
{
	std::cout << R"(
  ##########################################
  #            .=     ,        =.          #
  #   _  _   /'/    )\,/,/(_   \ \         #
  #    `//-.|  (  ,\\)\//\)\/_  ) |        #
  #    //___\   `\\\/\\/\/\\///'  /        #
  # ,-"~`-._ `"--'_   `"""`  _ \`'"~-,_    #
  # \       `-.  '_`.      .'_` \ ,-"~`/   #
  #  `.__.-'`/   (-\        /-) |-.__,'    #
  #    ||   |     \O)  /^\ (O/  |          #
  #    `\\  |         /   `\    /          #
  #      \\  \       /      `\ /           #
  #       `\\ `-.  /' .---.--.\            #
  #         `\\/`~(, '()      ('           #
  #          /(O) \\   _,.-.,_)            #
  #         //  \\ `\'`      /             #
  #   jgs  / |  ||   `""""~"`              #
  #      /'  |__||                         #
  #            `o                          #
  ##########################################
        )";
	std::cout << std::endl;
}