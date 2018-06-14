// game-bulls_and_cows.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

const string GAME_PROMO = "Bulls and Cows - a genius word game";


//prototypes
void PrintIntro(string message);
string GetGuessAndPrintBack();
void PrintPromptMessage(int numberOfcharsInWord);
void DrawCowPictureInAscii();

int main()
{
	PrintIntro(GAME_PROMO);
	string GuessTyped = GetGuessAndPrintBack();
	
	system("pause");
	return 0;
}

void PrintPromptMessage(int numberOfcharsInWord)
{
	cout << "Can you guess the " << numberOfcharsInWord << " letter isogram I am thinking off?" << endl;
}

string GetGuessAndPrintBack()
{
	string Guess = "";
	cout << "Enter your guess: ";
	getline(cin, Guess);
	cout << "Your guess was : " << Guess << endl;
	return Guess;
}

void PrintIntro(string message)
{
	constexpr int WORLD_LENGTH = 5;
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