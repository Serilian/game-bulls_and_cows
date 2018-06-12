// game-bulls_and_cows.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

const string GAME_PROMO = "Bulls and Cows - a genius word game";
constexpr int WORLD_LENGTH = 5;

//prototypes
void printWelcomeMessage(string message);
void drawCowPictureInAscii();

int main()
{
	printWelcomeMessage(GAME_PROMO);
	cout << "Can you guess the " << WORLD_LENGTH << " letter isogram I am thinking off?" << endl;

	cout << "Enter your guess: ";
	string Guess = "";
	cin >> Guess;

	cout << "Your guess was : " << Guess << endl;

	system("pause");
	return 0;
}

void printWelcomeMessage(string message)
{
	cout << "Welcome to " << message << "! \n";
	drawCowPictureInAscii();

	
}

void drawCowPictureInAscii()
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