//============================================================================
// Name        : 06_writting.cpp
// Author      : RA
// Version     :
// Copyright   : Just for training
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
 * v1.1 Changelog
 * 		Changed vector log from class account changed to log_op
 * 		in order to avoid inconsistences between log function in math.h
 */

#include <iostream>
#include "Account.h"

using namespace std;

int main() {

	Account a1;									//An account object called a1
	a1.Deposit(90);								//Deposit of $90

	cout << "After despositting $90" << endl;
	for (auto s:a1.Report())					//Ranged for loop seen in Module 05 collectors
	{
		cout << s << endl;						//This is the cout used to print out the report
	}

	a1.Withdraw(50);							//Called withdraw memeber function of Account a1 object

	if (a1.Withdraw(10))						//If the withdraw is true
	{
		cout << "Second withdraw success" << endl;
	}
	else
	{
		cout << "Withdraw not possible, not enough money, pal" << endl;
	}

	cout << "After withdraw $50 then $10" << endl;

	for (auto s:a1.Report())					//Final report
	{
		cout << s << endl;
	}
	system("pause");
	return 0;
}
