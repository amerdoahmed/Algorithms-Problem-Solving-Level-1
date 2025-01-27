// Problem 47 - Loan Installment Months

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

float TotalMonths(float LoanAmount, float MonthlyInstallment)
{
	return (float)LoanAmount / MonthlyInstallment;
}


int main()
{
	cout << "Loan Installment Months\n\n";
	float LoanAmount = ReadPositiveNumber("Pleas Enter Loan Amount ?\n");
	float MonthlyInstallment = ReadPositiveNumber("Pleas Enter Monthly Installmentt ?\n");

	cout << "\n Total Months to pay = " << TotalMonths(LoanAmount, MonthlyInstallment) << endl;

	return 0;
}