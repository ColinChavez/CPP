// Lab 3 icecream.cpp
// This program prompts the user enter the number of each ice cream cones sold
//and then displays the sales report.
//Andre Chavez

#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    constexpr float price1 = 1.49;
	constexpr float price2 = 2.49;
	constexpr float price3 = 3.49;

	double totalScoop1;
	double totalScoop2;
	double totalScoop3;
	double totalScoops;

	double sales1;
	double sales2;
	double sales3;

	double totalSales;

	cout << "Please enter the total scoops sold of DeLIGHTFUL, Double DeLIGHT, and Triple DeLIGHT: ";
	cin >> totalScoop1 >> totalScoop2 >> totalScoop3;

	totalScoops = totalScoop1 + totalScoop2 + totalScoop3;

	sales1 = static_cast<float>(totalScoop1) * price1;
	sales2 = static_cast<float>(totalScoop2) * price2;
	sales3 = static_cast<float>(totalScoop3) * price3;

	totalSales = sales1 + sales2 + sales3;

	cout << "Number of single scoop cones sold: " << totalScoop1 << endl;
	cout << "Number of double scoop cones sold: " << totalScoop2 << endl;
	cout << "Number of triple scoop cones sold: " << totalScoop3 << endl <<"\n";

	cout << "DeLIGHTful cones " << "\t" << totalScoop1 << "\t" << "$" << sales1 << endl;
	cout << "Dobule DeLIGHT cones" << "\t" << totalScoop2 << "\t" << "$" << sales2 << endl;
	cout << "Triple DeLight cones" << "\t" << totalScoop3 << "\t" << "$" << sales3 << endl;
	cout << "Total" << "\t\t\t" << totalScoops << "\t" << "$" << totalSales << endl;

	
}