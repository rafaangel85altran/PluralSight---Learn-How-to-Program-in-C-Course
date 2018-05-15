/*
 * Account.h
 *
 *  Created on: 15 may. 2018
 *      Author: win7
 */

#ifndef ACCOUNT_H_
#define ACCOUNT_H_

#include <string>
#include <vector>
#include "Transaction.h"

//Why not using namespace std here??? The answer is, YOU SHOULD NEVER USE IT IN A HEADER FILE
//Why? headers are intended to declare variables, functions, objects and classes,

class Account
{
private :								//Usually variables are private
	int balance;						//actual amount of money
	std::vector<Transaction> log;		//log containing all the transactions performed

public :								//And functions are public, so they can be used in the rest of the solution
	Account();
	std::vector<std::string> Report();	//Function Report() that returns a vector of strings
	bool Deposit(int amt);				//function Deposit that returns a bool whether the deposit success or not
	bool Withdraw(int amt);				//Function Withdraw that returns a bool whether the withdraw success or not
};


#endif /* ACCOUNT_H_ */
