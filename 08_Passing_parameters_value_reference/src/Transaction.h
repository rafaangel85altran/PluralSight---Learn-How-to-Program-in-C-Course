/*
 * Transaction.h
 *
 *  Created on: 15 may. 2018
 *      Author: win7
 */

#ifndef TRANSACTION_H_
#define TRANSACTION_H_

#include <string>
#include <iostream>

class Transaction
{
private:
	int amount;
	std::string type;

public:
	Transaction(int amt, std::string kind);
	std::string Report() const;
	void DoubleAmount() {amount *=2;}
};


#endif /* TRANSACTION_H_ */
