// tryIt4B.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	bool hungry = true,
		sleepy = false,
		happy = true,
		lazy = false;

	cout << hungry << " " << sleepy << endl;

	if (hungry == true)
		cout << "I'm hungry. \n";

	if (sleepy == true)
		cout << "I'm sleepy. \n";

	if (hungry)
		cout << "I'm still hungry. \n";
	else
		cout << "I'm not hungry. \n";

	if (sleepy)
		cout << "I'm not hungry. \n";
	else
		cout << "I'm not sleepy. \n";

	if (sleepy)
		cout << "I'm sleepy. \n";

	if (sleepy)
		cout << "I'm sleepy. \n";
	else if (lazy)
		cout << "I'm lazy. \n";
	else if (happy)
		cout << "I'm happy. \n";
	else if (hungry)
		cout << "I'm hungry. \n";

	return 0;
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
