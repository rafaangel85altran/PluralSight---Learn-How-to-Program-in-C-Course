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

	vector<int> vi;
	for (int i=0; i<10; i++)
	{
		vi.push_back(i);
	}

	for (auto item:vi)
	{
		cout << item << " ";
	}

	vector<string> vs;

	cout << "Enter two words" << endl;
	for (int  i=0; i<3; i++)
	{
		string s;
		cin >> s;
		vs.push_back(s);
	}

	//test

	for(auto item:vs)
	{
		cout << "item";
	}

	cout << endl;
	cout << endl;

	system("pause");
	return 0;
}
