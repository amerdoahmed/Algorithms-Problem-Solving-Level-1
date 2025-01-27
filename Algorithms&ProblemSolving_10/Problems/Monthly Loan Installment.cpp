// Problem 48 - Monthly Loan Installment


#include <iostream>
#include <string>

using namespace std;

float ReadPositiveNumber(string Message)
{
	float Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

float TotalMonths(float LoanAmount, float HowManyMonths)
{
	return (float)LoanAmount / HowManyMonths;
}


int main()
{
	cout << "Loan Installment Months\n\n";
	float LoanAmount = ReadPositiveNumber("Pleas Enter Loan Amount ?\n");
	float HowManyMonths = ReadPositiveNumber("How Many Months ?\n");

	cout << "\n Monthly Installment = " << TotalMonths(LoanAmount, HowManyMonths) << endl;

	return 0;
}