//============================================================================
// Name        : 08_Casting.cpp
// Author      : RA
// Version     :
// Copyright   : Just for training
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "Hello World!OPKPOKP" << endl << 2 + 2;

	cout << endl << endl;

	int i;
	//Fractional part will be lost

	i= static_cast<int> (4.9);			//Explicit casting, warning will not be shown
	cout << i << endl;

	cout << i << endl;

	auto j=5;
	cout << j << endl;

	auto f = 4.9;
	j=static_cast<int> (f);				//Explicit casting, warning will not be shown

	cout << f << endl;
	f = 9.0/5;
	cout << f << endl;

	system("pause");
	return 0;
}
