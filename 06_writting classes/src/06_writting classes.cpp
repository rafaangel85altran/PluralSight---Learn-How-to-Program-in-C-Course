//============================================================================
// Name        : 06_writting.cpp
// Author      : RA
// Version     :
// Copyright   : Just for training
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Account.h"

using namespace std;

int main() {

	Account a1;									//An account object called a1
	a1.Deposit(90);

	cout << "After despositing $90" << endl;
	for (auto s:a1.Report())					//Ranged for loop seen in Module 05 collectors
	{
		cout << s << endl;
	}

	a1.withdraw(50);

	if (a1.withdraw(100))						//If the withdraw is true
	{
		cout << "Second withdraw success" << endl;
	}

	cout << "After withdraw $50 then $100" << endl;

	for (auto s:ai.Report())
	{
		cout << s << endl;
	}
	system("pause");
	return 0;
}
