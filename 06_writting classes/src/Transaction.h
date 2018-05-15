/*
 * Transaction.h
 *
 *  Created on: 15 may. 2018
 *      Author: win7
 */

#ifndef TRANSACTION_H_
#define TRANSACTION_H_

#include <string>		// Since the report will manage and return strings I need to include the std library

class Transaction		// Class transaction declaration
{
private:				// As usuall, variables are private
	int amount;
	std::string type; 	// Type of Transaction, can be a Deposit or a Withdraw

public:
	Transaction(int amt, std::string kind);	// Constructor
	std::string report();					// Function string report(), not to missmatch with Report() from Account
};


#endif /* TRANSACTION_H_ */
