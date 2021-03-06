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

#include <iostream>
#include "Account.h"						// I need to include the header file

using namespace std;						// I can use namespace std because this is a .cpp file

Account::Account(void) :balance(0), limit(100)
{
}

vector<string> Account::Report()			// The fucntion Report() of the class Account
{
	vector<string> report;					// Is a vector of strings with no elements
	report.push_back("Balance is " +		// Puts output text + the actual amount money to the screen
			to_string(balance));
	report.push_back("Transactions: ");		// Also prints out the complete log
	for (auto t:log_op)						// Ranged for loop, log_op is a vector of the class transaction
	{
		report.push_back(t.report());		// For every element of the vector of strings report
	}
	report.									// Print a line of lines
	push_back("---------------------");
	return report;							// Return the whole report
}

bool Account::Deposit(int amt)
{
	if (amt > 0)
	{
		balance += amt;
		log_op.push_back(Transaction
				(amt, "Deposit"));
		balance -= 1;						//New feature, service charge
				log_op.push_back(Transaction
						(1, "Service Change"));
		return true;
	}
	else
	{
		cout << "Sorry, only deposits greater than zero" << endl;
		return false;
	}

}

bool Account::Withdraw(int amt)
{
	if (amt > 0)
	{
		if (balance + limit >= amt)
		{
			balance -= amt;
			log_op.push_back(Transaction(amt, "Withdraw"));

			balance -= 1;									//New feature, service charge
					log_op.push_back(Transaction
							(1, "Service Change"));
			return true;
		}
		else
		{
			cout << "Sorry, only withdraws greater than the money stored" << endl;
			return false;
		}
	}
	else
	{
		cout << "Sorry, only withdraws greater than zero" << endl;
		return false;
	}
}
/* In order to make an in line function we´ll comment this normally declared function
int Account::GetBalance()
{
	return balance;
}
*/
