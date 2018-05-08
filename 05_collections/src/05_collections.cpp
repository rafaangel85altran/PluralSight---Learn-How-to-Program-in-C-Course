//============================================================================
// Name        : 05_collections.cpp
// Author      : R Angel
// Version     :
// Copyright   : Totally free!
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>		//For sort and count

using namespace std;


int main() {

	vector<int> vi;				//vector with undetermined number of integers called vi (this declaration is thanks to the include <vector>
	for (int i=0; i<10; i++)	//This  "i" only has scope until the last "}"
	{
		vi.push_back(i);		//call a member function of the vi object (which is a vector) This function puts a new value at the end of the vector
	}

	for (auto item:vi)			//new syntax, its called "ranged for" or "range based for"
	{
		cout << item << " ";	//after each element I´ll add a  space between them
	}

	vector<string> vs;			//vector with undetermined number of strings called vs (this declaration is thanks to the include <vector>

	cout << "Enter three words" << endl;	// I ask for three words
	for (int  i=0; i<3; i++)
	{
		string s;
		cin >> s;
		vs.push_back(s);
	}

	//test

	for(auto item:vs)
	{
		cout << item;
	}

	cout << endl;
	cout << endl;

	system("pause");
	return 0;
}
