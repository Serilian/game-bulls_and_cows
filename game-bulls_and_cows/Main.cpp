// game-bulls_and_cows.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

constexpr int WORLD_LENGTH = 5;
const string GAME_PROMO = "Bulls and Cows - a genius word game";
const int NUMBER_OF_TURNS = WORLD_LENGTH * 1;

//prototypes
void PrintIntro(string message);
string GetGuess();
void PrintToConsole(std::string &Guess);
void PrintPromptMessage(int numberOfcharsInWord);
int main();
void StartGame();
void DrawCowPictureInAscii();
bool PlayerWantsToPlayAgain();
bool IsCorrectAnswer(string answer);

int main()
{
	PrintIntro(GAME_PROMO);
	do
	{
		StartGame();
	} while (PlayerWantsToPlayAgain());

	return 0;
}

bool PlayerWantsToPlayAgain()
{
	string answer;
	bool playAgain = false;
	do
	{
		cout << "Would you like to play again? (Y/N)" << endl;
		getline(cin, answer);
		cout << endl;
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

bool IsCorrectAnswer(string answer)
{
	return answer == "Y" || answer == "y" || answer == "n" || answer == "N";
}

void StartGame()
{
	string Guess = "";

	for (int i = 0; i < NUMBER_OF_TURNS; i++)
	{
		Guess = GetGuess();
		PrintToConsole(Guess);
		cout << endl;
	}
}

void PrintPromptMessage(int numberOfcharsInWord)
{
	cout << "Can you guess the " << numberOfcharsInWord << " letter isogram I am thinking off?" << endl;
}

string GetGuess()
{
	string Guess = "";
	cout << "Enter your guess: ";
	getline(cin, Guess);
	return Guess;
}

void PrintToConsole(std::string &Guess)
{
	cout << "Your guess was : " << Guess << endl;
}

void PrintIntro(string message)
{
	cout << "Welcome to " << message << "! \n";
	DrawCowPictureInAscii();
	PrintPromptMessage(WORLD_LENGTH);
}

void DrawCowPictureInAscii()
{
	cout << R"(
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
	cout << endl;
}