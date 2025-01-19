// Problem 35 - Piggy Bank Calculator

#include <iostream>
#include <string>

using namespace std;

struct stPiggyBank
{
	int Pennies, Nickels, Dimes, Quarters, Dollars;
};

stPiggyBank ReadPiggyBank()
{
	stPiggyBank piggyBank;

	cout << "Enter the number of pennies: \n";
	cin >> piggyBank.Pennies;

	cout << "Enter the number of nickels: \n";
	cin >> piggyBank.Nickels;

	cout << "Enter the number of dimes: \n";
	cin >> piggyBank.Dimes;

	cout << "Enter the number of quarters: \n";
	cin >> piggyBank.Quarters;

	cout << "Enter the number of dollars: \n";
	cin >> piggyBank.Dollars;

	return piggyBank;
}

int CalculateTotalPennies(stPiggyBank PiggyBank)
{
	int TotalPennies = 0;

	TotalPennies = PiggyBank.Pennies * 1 + PiggyBank.Nickels * 5 + PiggyBank.Dimes * 10 + PiggyBank.Quarters * 25 + PiggyBank.Dollars * 100;

	return TotalPennies;
}

int main()
{
	int TotalPennies = CalculateTotalPennies((ReadPiggyBank()));

	cout << endl << "Total Pennies = " << TotalPennies << endl;
	cout << endl << "Total Dollars = " << TotalPennies / 100 << endl;

	return 0;
}