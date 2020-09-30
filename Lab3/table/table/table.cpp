//Lab 3 table.cpp
//This program reads data from a file and
//prints it in a nicely aligned table.
//Andre Colin Chavez

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	string code;	//Item code of an inventory item
	string description;		//Description of an inventory item
	int quantity;		//Quantity in stock of an inventory item

	ifstream dataIn;	//Define an input file stream object

	dataIn.open("table.txt");

	if (!dataIn.is_open())
	{
		return 1;
	}

	//Print table heading
	cout << "	Warehouse Inventory			\n";
	cout << "======================================	\n";
	cout << "Item		Item		  Item\n";
	cout << "Code		Description	  Qty\n\n";

	//Read in five data records and display them
	while (dataIn >> code >> description >> quantity) {		//Record1
		cout << code << "\t\t" << description <<"\t\t" << quantity << endl;
	}
	//Close the file
	dataIn.close();

	//return 0;
	
}

