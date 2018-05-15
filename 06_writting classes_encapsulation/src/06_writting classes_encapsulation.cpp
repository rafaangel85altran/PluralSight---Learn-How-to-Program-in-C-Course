//============================================================================
// Name        : 06_writting.cpp
// Author      : RA
// Version     :
// Copyright   : Just for training
// Description : 06 Writting classes - Encapsulation
//============================================================================

#include <iostream>
#include "Account.h"

using namespace std;

int main() {

	Account a1;
	a1.Deposit(90);

	cout << "After despositing $90 "
			<< "Balance is " <<
			a1.GetBalance() << endl;

	a1.balance += 10000;		// Now that balance is public I can accidentally change his  value
								// In an unlikely situation

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
