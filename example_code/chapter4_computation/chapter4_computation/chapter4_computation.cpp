// chapter4_computation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
inline void keep_window_open() { char ch; cin >> ch; }

int main()
{
	//CHAPTER 4: COMPUTATION/CONTROL FLOW

	//4.4 IF STATEMENTS
 //   constexpr double cm_per_inch = 2.54;    //number of cent in inch
	//double length = 1;		//length in inch or cent
	//char unit = ' ';

	//cout << "Please enter a length followed by a unit (c or i):\n";
	//cin >> length >> unit;

	//if (unit == 'i')
	//	cout << length << "in ==" << cm_per_inch * length << "cm\n";
	//else if (unit == 'c')
	//	cout << length << "cm == " << length / cm_per_inch << "in\n";
	//else
	//	cout << "Sorry, I don't know a unit called '" << unit << "'\n";


	//4.4.1.2 SWITCH STATEMENTS
	/*constexpr double cm_per_inch = 2.54;
	double length = 1;
	char unit = 'a';

	cout << "Please enter a length followed by a unit (c or i):\n";
	cin >> length >> unit;

	switch (unit)
	{
	case 'i':
		cout << length << "in == " << cm_per_inch * length << "cm\n";
		break;
	case 'c':
		cout << length << "cm == " << length / cm_per_inch << "in\n";
		break;
	default:
		cout << "Sorry, I don't know a unit called '" << unit << " '\n";
	}*/

	//4.4.2.1 While Statements
	//int i = 0;		//start from 0
	//while (i<100)
	//{
	//	cout << i << '\t' << i * i << '\n';
	//	++i;		//increment i (that is, i becomes i+1)
	//}

	//4.4.2.3 FOR STATEMENTS

	/*for (int i = 0; i < 100; ++i)
		cout << i << '\t' << i * i << '\n';*/


	//4.6 VECTORS
	//Vector - a sequence of elements that you can access by an index.

	//vector<int> v = { 5,7,9,4,6,8 };	//vector of 6 ints
	//vector<string>philosopher
	//	= { "Kant","Plato","Hume","Kierkegaard" };	//vector of 4 strings
	//vector<int>vi(6);	//vector of 6 ints initialized to 0
	//vector<string>vs(4);	//vector of 4 strings initialized to " " 4 empty strings

	//4.6.1 TRAVERSING A VECTOR

	/*vector<int> v = { 5,7,9,4,6,9 };
	for (int i = 0; i < v.size(); ++i)
		cout << v[i] << '\n';*/

	//vector<int> v = { 5,7,9,4,6,8 };
	//for (int x : v)		//for each x in v
	//	cout << x << '\n';


	//4.6.2 GROWING A VECTOR
	//vector<double>v;			//empty vector
	//v.push_back(2.7);		//add an element with the value 2.7 at the end (the back) of v

	//Vectors, unlike ARRAYS in C, DO NOT need the size(length) specified in advance, and you can
	//add as many elements as you like.

	//ADD AN UNKNOWN DATA SET INTO COMPUTER

	//read some temperature into a vector
	//vector<double>temps;	//temperatures
	//for (double temp; cin >> temp;)	//read into temp
	//	temps.push_back(temp);		//put temp into vector
	//								//...do something

	////CIN >> TEMP  is used is a conditional statement in our for loop. It reads a 'double'
	////the 'double' is placed into the vector. The for loop will terminate when it reads
	////anything other than a double.

	////compute mean temperature
	//double sum = 0;
	//for (int x : temps) sum += x;
	//cout << "Average temperature: " << sum/temps.size() << '\n';

	////compute median temperature:
	//sort(temps.begin(), temps.end());		//sort temperatures.
	//cout << "Median temperatures: " << temps[temps.size()/2] << '\n';
	

	//4.6.4 A TEXT EXAMPLE
	//ENTER CTRL Z  to end input stream and break loop.

	vector<string>words;
	for (string temp; cin >> temp;)		//read whitespace-seperated words
		words.push_back(temp);			//put into vector
	cout << "Number of Words: " << words.size() << '\n';

	sort(words.begin(), words.end());

	for (int i= 0; i < words.size(); ++i)
		if (i == 0 || words[i - 1] != words[i])		//is this a new word? Checks to see if the previous word we printed is different from the one we are about to print
			cout << words[i] << "\n";

	//Operators us "Lexicographical" ordering on strings, "Alphabetical Order".
	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
