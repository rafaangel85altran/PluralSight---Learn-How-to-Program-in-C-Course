/*
 * Account.cpp
 *
 *  Created on: 15 may. 2018
 *      Author: win7
 *
 *  Description:
 *  	Account constructor is also present
 *  	Definition of Report(), Deposit() and Withdraw()
 *
 */

#include "Account.h"						// I need to include the header file

using namespace std;						// I can use namespace std because this is a .cpp file

Account::Account(void) :balance(0)			// Constructor of the class, the int balance starts from zero
{
}

vector<string> Account::Report()			// The fucntion Report() of the class Account
{
	vector<string> report;					// Is a vector of strings with no elements
	report.push_back("Balance is " +		// Puts output text + the actual amount money to the screen
			to_string(balance));
	report.push_back("Transactions: ");		// Also prints out the complete log
	for (auto t:log_op)						// Ranged for loop
											//log_op is a vector of the class transaction
	{
		report.push_back(t.report());		//for every element of the vector of strings report
	}
	report.push_back("---------------------");
	return report;
}

bool Account::Deposit(int amt)
{
	if (amt >= 0)							// If the amount of money to deposit is greater than zero proceed
	{
		balance += amt;						// Addition
		log_op.push_back(Transaction
				(amt, "Deposit"));
		return true;
	}
	else
	{
		return false;
	}

}

bool Account::Withdraw(int amt)
{
	if (amt >= 0)
	{
		if (balance >= amt)
		{
			balance -= amt;
			log_op.push_back(Transaction(amt, "Withdraw"));
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}
