// Week3_tryIt3A.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int someInt, w = 5, x = 9, y = 2, z = 7;

	char someChar = 'A';
	cout << "tryIt3A output \n";

	z += 3;
	cout << z << " " << z % w << endl;

	z *= w + y;
	cout << z << endl;

	z -= 60.1;
	cout << z << endl;

	cout << (x - 1) / (x - w) * y << endl;
	cout << (x - 1) / ((x - w) * y) << endl;

	cout << static_cast<double>(x) / y << endl;

	cout << x / y << endl;
	cout << (w + x % 7 / y) << endl;

	cout << (abs(y - w) + sqrt(static_cast<double>(x))) << endl;

	someInt = someChar;
	cout << someChar << " " << someInt << endl;

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
