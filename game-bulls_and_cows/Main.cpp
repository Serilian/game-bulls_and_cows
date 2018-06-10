// game-bulls_and_cows.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

const char* GAME_PROMO = "Bulls and Cows - a genius word game";

//prototypes
void printWelcomeMessage();




int main()
{
	printWelcomeMessage();
	
    return 0;
}

void printWelcomeMessage()
{
	printf("Welcome to %s ! \n", GAME_PROMO);
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
