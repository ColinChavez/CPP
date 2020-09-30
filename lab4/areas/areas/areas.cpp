// Lab 4 areas.cpp
// This program calculates the area of a given object
// Andre Colin Chavez

#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <typeinfo>
using namespace std;

int main()
{
	constexpr float pi = 3.14159;

	double radius;
	double length;
	double base;
	double height;
	double area;
	int menu;
	

	cout << "Please select a shape to begin calculating its area" << endl
		<< " 1--square " << endl
		<< " 2--circle " << endl
		<< " 3--right triangle " << endl
		<< " 4--quit " << endl
		<< endl;
	cin >> menu;


	if (menu <= 0 || menu >= 5) 
		cout << "\nPlease enter a valid selection\n";
	
	if (menu == 1)
	{
		cout << "\nPlease enter a numerical value to be used as the length of the square" << endl;
		cout << "Length of Square: ";
		cin >> length;
		if (length == false)
			cout << "\nPlease enter a valid input\n";

		area = pow(length, 2);

		cout << "Area = " << area << endl;
		//break;
	}

	if (menu == 2)
	{
		cout << "\nPlease enter a numerical value to be used as the radius of the circle" << endl;
		cout << "Radius of Circle: ";
		cin >> radius;

		if (radius == false)
			cout << "\nPlease enter a valid input\n";
		
		area = pi * (pow(radius, 2));

		cout << "Area = " << area << endl;
		//break;
	}

	if (menu == 3)
	{
		cout << "\nPlease enter 2 numerical values to be used as the base and the height." << endl;
		cout << "Base of Square: ";
		cin >> base;
		cout << "Height of Square: ";
		cin >> height;

		if ((base == false) || (height == false))
			cout << "\nPlease enter a valid input\n";
		
		area = ((base * height) / 2);

		cout << "Area = " << abs(area) << endl;
	}

	if (menu == 4)
		exit(0);

	return 0;
}