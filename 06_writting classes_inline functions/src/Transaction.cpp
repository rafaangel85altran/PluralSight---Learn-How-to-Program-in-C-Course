/*
 * Transaction.cpp
 *
 *  Created on: 15 may. 2018
 *      Author: win7
 */

#include "Transaction.h"

using namespace std;

/*
 * Transaction Class Constructor
 * 		Input Arguments (int, string)
 */
Transaction::Transaction(int amt, std::string kind):amount(amt), type(kind)
{
}

/*
 * Report Function inside of the class Transaction
 *
 * 	    <"   "> + <type> + <" "> + <to_string(amount)> insideof the same string
 * 		Returns a string
 *
 */

string Transaction::report()
{
	string report;					// String to print
	report += "   ";				// Indent space
	report += type;					// type of transaction, can be a deposit or a withdraw
	report += " ";					// space
	report += to_string(amount);	// amount converted to string

	return report;					// return the result
}
