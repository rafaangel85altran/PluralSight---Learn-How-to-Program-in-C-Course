//============================================================================
// Name        : 08_Passing_parameters_value_reference.cpp
// Author      : RA
// Version     :
// Copyright   : Just for training
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <iostream>

typedef int BOOL;

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

	BOOL j = 5;

	cout << "j = " << j << endl;

	Transaction deposit(50, "Deposit");		//Class Transaction constructed with amount=50 and type=deposit
	cout << "Original: " << deposit.Report() << endl;	//Object t of the class transaction calls member function report()

	TrytoChangeTransaction(deposit);					//function passing object deposit by value,
	cout << "By value " << deposit.Report() << endl;

	ChangeTransaction(deposit);
	cout << "By reference " << deposit.Report() << endl;

	system("pause");
	return 0;
}
