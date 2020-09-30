// Lab4 color.cpp
// This program lets the user select a primary color from a menu.
// Colin Chavez

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int choice;     //Menu choice should be 1, 2, or 3

	//Display the menu of choices
	cout << "Choose a primary color by entering its number. \n\n";
	cout << "1 Red \n" << "2 Blue \n" << "3 Yellow \n";

	// Get the user's choice
	cin >> choice;

	// Tell the user what he or she picked
	switch(choice)
	{
	case 1 :
		cout << "\nYou picked red.\n";
		break;
	case 2 :
		cout << "\nYou picked blue.\n";
		break;
	case 3 :
		cout << "\nYou picked yellow.\n";
		break;
	default :
		cout << "\nYou entered an invalid selection. This message will self destruct\n";

		return 0;

	}
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
