//============================================================================
// Name        : 04.cpp
// Author      : R Angel
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;

int main() {

	string name;

	cout << "What is your name?" << endl;

	cin >> name;

	string greeting = "Hello " + name;

	if (name == "Kate")
	{
		greeting += ", I know you.";
	}

	cout << greeting << endl;
	return 0;
}
