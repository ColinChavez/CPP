// Lab 3 percentage.cpp
//This program will determine the percentage
//of answers a student got correct on a test.
//Andre Colin Chavez

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string name;
	int numQuestions, numCorrect;
	double percentage;

	//Get student's test data
	cout << "Enter student's first and last name: ";
	getline(cin, name);	//extract characters until end of file.

	cout << "Number of questions on the test: ";
	cin >> numQuestions;
	cout << "Number of answers the student got correct: ";
	cin >> numCorrect;

	//Compute and display te student's % correct
	percentage = (static_cast<double>(numCorrect) / static_cast<double>(numQuestions)) * 100.0;

	if (percentage >= 100)
	{
		cout << name << "\t" << 100 << "%";
	}
	else {
		cout << name << "\t" << percentage << "%";
	}

	

	
	
}

