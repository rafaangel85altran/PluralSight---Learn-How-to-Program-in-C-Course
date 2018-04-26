//============================================================================
// Name        : 04.cpp
// Author      : R Angel
// Version     :
// Copyright   : Totally free!
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <iostream>
#include <string>

using namespace std;

int main() {
	cout << "#####  Exercise module 4  #####" << endl; // prints String Manipulation exercise
	cout << "Asks the user to enter two words and tells which of them  are longer" << endl;

	string word1 = "", word2 = "";

	cout << "Enter the first word (no spaces)" << endl;
	//cin >> word1;
	getline(cin,word1);

	cout << "Enter the second word (no spaces)" << endl;
	//cin >> word2;
	getline(cin,word2);

	if (word1.length() > word2.length())
	{
		//cout << "The first word is longer" << endl;
		cout << "The first phrase is longer" << endl;
	}
	else if (word1.length() < word2.length())
	{
		//cout << "The second word is longer" << endl;
		cout << "The second phrase is longer" << endl;
	}
	else
	{
		//cout << "Both words have the same length" << endl;
		cout << "Both phrases have the same length" << endl;
	}

	system("pause");
	return 0;
}

