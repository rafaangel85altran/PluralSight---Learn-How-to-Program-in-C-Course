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
	std::string type; 	// a better way exist

public:
	Transaction(int amt, std::string kind);	// And funtions are public
	std::string report();					// Function string report()
};


#endif /* TRANSACTION_H_ */
