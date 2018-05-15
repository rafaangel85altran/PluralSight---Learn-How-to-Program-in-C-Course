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


class Account
{
private :
	std::vector<Transaction> log_op;

public :
	int balance;						// What would happen if balance is public?
	Account();
	std::vector<std::string> Report();
	bool Deposit(int amt);
	bool Withdraw(int amt);
	int GetBalance(){return balance;}
};


#endif /* ACCOUNT_H_ */
