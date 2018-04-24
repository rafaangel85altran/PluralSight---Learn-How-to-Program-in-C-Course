//============================================================================
// Name        : 03.cpp
// Author      : R Angel
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "functions.h"

using namespace std;

int main() {
	int a = add(3, 4);		//The compiler is able to diferenciate between this to functions because they have different number of arguments and types
	cout << a << endl;

	float b = add(1.0, 2.2, 3.3);
	cout << b << endl;

	int c = add(1, 2, 3);
		cout << c << endl;

	return 0;
}
