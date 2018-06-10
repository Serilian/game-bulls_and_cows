// game-bulls_and_cows.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

const string GAME_PROMO = "Bulls and Cows - a genius word game";

//prototypes
void printWelcomeMessage(string message);
void drawCowPictureInAscii();




int main()
{
	printWelcomeMessage(GAME_PROMO);
	return 0;
}

void printWelcomeMessage(string message)
{
	printf("Welcome to %s ! \n", message);
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
}
