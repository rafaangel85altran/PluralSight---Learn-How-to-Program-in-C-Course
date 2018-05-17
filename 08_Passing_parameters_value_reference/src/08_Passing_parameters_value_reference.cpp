//============================================================================
// Name        : 08_Passing_parameters_value_reference.cpp
// Author      : RA
// Version     :
// Copyright   : Just for training
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <iostream>

using namespace std;

#include "Transaction.h"

void ChangeTransaction(Transaction& t)
{
	t.DoubleAmount();
}

void TrytoChangeTransaction(Transaction t)
{
	t.DoubleAmount();
}


int main() {
	Transaction deposit(50, "Deposit");
	cout << "Original: " << deposit.Report() << endl;

	TrytoChangeTransaction(deposit);
	cout << "By value " << deposit.Report() << endl;

	ChangeTransaction(deposit);
	cout << "By value " << deposit.Report() << endl;

	cout << "Test5" << endl;

	system("pause");
	return 0;
}
