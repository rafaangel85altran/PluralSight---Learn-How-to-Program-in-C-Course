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


	for(auto item:vs)
	{
		cout << item << " ";
	}

	cout << endl;

	cout << "The vector has " << vi.size() << " elements" << endl;	//member function size() on vi telling number of elements

	vi[5]=3;			//To access to particular elements of the vector we use brackets
	vi[6]=-1;			//its always a zero based index
	vi[1]=99;

	for (auto item:vi)
	{
		cout << item << " ";
	}

	cout << endl;

	//Three different ways to print the content of a vector

	//Nicest one

	for (auto item:vi)			//using ranged for
	{
		cout << item << " ";	//print elements separated for spaces
	}
	cout << endl;				//at the end add a new line

	//This is the classic method, very tricky because you have to take into account if the range is correctly declared
	//if you are incrementing correctly, vi.size() returns an unsigned number so you need to declare i as an unsigned
	//you need to access into each and every element of the vector with the brackets... its a mess

	for (unsigned int i=0; i < vi.size(); i++)
	{
		cout << vi[i] << " ";
	}
	cout << endl;

	//Another way, using iterators.
	//begin and end are free functions
	for (auto i = begin(vi); i != end(vi); i++)	//as long as my iterator if not equal to the last element of the vector, increase the  value of the iterator and do the content of the brackets
	{
		cout << *i <<" ";		//instead of accessing to the element of the vector I´m using the "star symbol"
								//"star symbol" means "getting to the content if the iterator" or "what the iterator is pointing at"
	}
	cout << endl;

	sort(begin(vs),end(vs));	//sort if a free function and on this case it takes all the elements of vs and reorganizates it
	for(auto item:vs)			//and then I´m printing it out the vector sort, either by alphabetical order or numerical order
	{
		cout << item << " ";
	}
	cout << endl;

	int threes = count(begin(vi),end(vi),3);		//I want to count from begining to end of the vector how many character "3" there are
	cout << "vector of ints  has " << threes << " repetitions of the character '3' " << endl;

	int tees = count(begin(vs[0]), end(vs[0]),'t');
	cout << "first word has " << tees << " letter t´s" <<endl;

	system("pause");
	return 0;
}
