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
private :
	int balance;
	std::vector<Transaction> log;

public :
	Account();
	std::vector<std::string> Report();
	bool Deposit(int amt);
	bool Withdraw(int amt);
};


#endif /* ACCOUNT_H_ */
