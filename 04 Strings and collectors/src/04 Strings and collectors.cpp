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

	int l = name.length();

	cout << "\"" + greeting << "\" is " << l << " characters long." << endl;


	if (name == "Kate")
	{
		greeting += ", I know you.";
	}

	char space = greeting.find(' ');				// find() its going to give me a pointer in a place whether there is a space.

	string beginning = greeting.substr(space + 1);	// substr() will go from the place given  to the end

	if (beginning == name)
	{
		cout << "Expected result" << endl;
	}

	system("pause");

	return 0;
}
