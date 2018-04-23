//============================================================================
// Name        : pluralslight.cpp
// Author      : R Angel
// Version     :
// Copyright   : Your copyright notice
// Description : Flowcontrol example with a guessing game
// Branch	   : Guess Game
//============================================================================

#include <iostream>
#include <stdlib.h>

//test

using namespace std;

int main() {


	float i, j;
	bool numberguessed = false;

		i = rand() % 10;

		do
		{

			cout << "Enter the guessed number" << endl;
			cin >> j;

			if (i != j)
			{
				cout << "Try again" << endl;
			}
			else
			{
				cout << "Gratz" << endl;
				numberguessed = true;
			}
		}
		while (numberguessed == false);




	system("pause");

	return 0;

}
