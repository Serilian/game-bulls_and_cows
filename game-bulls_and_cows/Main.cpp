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
void StartGame();
void DrawCowPictureInAscii();

int main()
{
	PrintIntro(GAME_PROMO);
	StartGame();

	return 0;
}

void StartGame()
{
	string Guess = "";

	for (int i = 0; i < NUMBER_OF_TURNS; i++) {
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