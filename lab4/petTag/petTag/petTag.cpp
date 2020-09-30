// Lab 4 petTag.cpp
// This program determines the fee for a cat or dog pet tag.
// It uses nested if/else statements.
// Andre Colin Chavez

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string pet;     //"cat" or "dog"
	char spayed;	// 'y' or 'n'

	//Get pet type and spaying information
	cout << "Enter the pet type (cat or dog): ";
	cin >> pet;

	if (pet == "dog" || pet == "cat") {
	cout << "Has the pet been spayed or neutered (y/n)?";
	cin >> spayed;
}

	// Determine the pet tag fee
	if (pet == "cat")
	{
		if (spayed == 'y' || spayed =='Y')
			cout << "Fee is $4.00 \n";
		else
			cout << "Fee is $8.00 \n";
	}

	else if (pet == "dog")
	{
		if (spayed == 'y' || spayed == 'Y')
			cout << "Fee is $6.00 \n";
		else
			cout << "Fee is $12.00 \n";
	}
	else
		cout << "Only cats and dogs need pet tags. \n";

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
