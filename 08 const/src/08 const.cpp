//============================================================================
// Name        : 08.cpp
// Author      : RA
// Version     :
// Copyright   : Just for training
// Description : Module 08 Const example
//============================================================================

#include <iostream>
#include "Account.h"

using namespace std;

int main() {

	Account a1;
	const int amount = 90;
	a1.Deposit(amount);
	//amount = 100;

	cout << "After despositing $90 "
			<< "Balance is " <<
			a1.GetBalance() << endl;

	cout << "Now balance is " << a1.GetBalance() << endl;

	for (auto s:a1.Report())
	{
		cout << s << endl;
	}

	a1.Withdraw(50);

	if (a1.Withdraw(10))
	{
		cout << "Second withdraw success" << endl;
	}
	else
	{
		cout << "Withdraw not possible, not enough money, pal" << endl;
	}

	cout << "After withdraw $50 then $10" << endl;

	for (auto s:a1.Report())
	{
		cout << s << endl;
	}

	system("pause");
	return 0;
}
