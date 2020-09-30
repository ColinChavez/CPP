//Lab 3 findErrors.cpp
//This program contains many syntax errors and will not compile.
//Fix the errors so that it correctly finds the average of the
//two integers the user enters.
//Andre Colin Chavez

#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
	int num1, num2;

	//Input 2 integers

	cout << "Enter two integers separated by one or more spaces: ";
	cin >> num1 >> num2;

	double average = (static_cast<double>(num1) + static_cast<double>(num2)) / 2.0;

	cout << "The average of these 2 numbers is " << average << endl;
	
}

