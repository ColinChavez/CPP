// tryIt4A.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    cout << (3 == 4) << endl;
	cout << (3 == 3) << endl;
	cout << (5 == 3 + 2) << endl << endl;

	cout << (7 > 5) << endl;
	cout << (7 > 5 + 2) << endl;
	cout << (2 >= 8 % 3) << endl << endl;

	cout << (8 < 6) << endl;
	cout << (3 * 5 < 2 * 9 - 1) << endl;
	cout << (5 * 4 <= 40 / 2) << endl << endl;

	cout << (3 != 5) << endl;
	cout << (3 != 9 - 2 * 3) << endl;
	cout << (10 != (4 * 5) / 2) << endl << endl;

	cout << (5 > 6 && 3 < 4) << endl;
	cout << (5 > 6 || 3 < 4) << endl;
	cout << (!(7 > 6)) << endl << endl;

	cout << (2 * 3 == 6 && !(1 > 2)) << endl;
	cout << (!(2 * 3 == 6 && 1 != 2)) << endl;
	cout << (!(2 * 3 == 6 && 1 != 2)) << endl;
	
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
