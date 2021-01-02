// -----------------------------------------------------
// Assignment: 4
// Question: 3
// File name: A4Q3.cpp
// Written by: Ajwad Hossain
// For Comp 218 Section EC/Fall 2019
// -----------------------------------------------------

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	float amount, total = 0.0;
	int years;
	//Header
	cout << "--------------------------------------" << endl
		<<  "Welcome to the Bank Interest Program" << endl
		<<  "--------------------------------------" << endl;
	cout << "\n";
	//Input amounts of desired money and years

	cout << "How much money you want to save? ";
	cin >> amount;
	cout << "\n";

	cout << "How many years you want to save? ";
	cin >> years;
	cout << "\n";
	//Identifiers plus equations 

	float rate = 1.00;
	float interest_rate[3];
	float interest_amount[6];

	for (int i = 0; i < years; i++)
	{
		interest_rate[i] = rate;
		interest_amount[i] = (amount*rate) / 100.00;
		total = total + interest_amount[i];
		rate = rate + 0.10;
		amount = amount + interest_amount[i];
	}
	//Output headers
	cout << "RESULTS" << endl;
	cout << "-------" << endl;
	cout << "Year     Interest Rate     Interest Amount" << endl;
	cout << "\n";
	//Calculate results and output totals and for each year
	rate = 1.00;
	cout << fixed;
	cout << setprecision(2);

	for (int i = 0; i < years; i++)
	{
		cout << i + 1 << "             " << interest_rate[i] << "%                 " << interest_amount[i] << endl;
	}
	cout<< "\n";
	cout << "Total interest amount is " << total << endl;
	cout << "\n";
	cout << "Thank you for using Bank Interest Program!";

	return 0;

}