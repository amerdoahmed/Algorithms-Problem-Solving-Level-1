// Problem 34 - Comission Persentage

#include <iostream>
#include <string>

using namespace std;

int ReadTotalSales()
{
	int TotalSales;

	cout << "Enter Total Sales" << endl;
	cin >> TotalSales;

	return TotalSales;
}

float GetComissionPersentage(float TotalSales)
{
	if (TotalSales >= 1000000)
		return 0.01;
	else if (TotalSales >= 500000)
		return 0.02;
	else if (TotalSales >= 100000)
		return 0.03;
	else if (TotalSales >= 50000)
		return 0.05;
	else
		return 0.00;
}

float CalculateComissionPersenrage(float TotalSales)
{
	return GetComissionPersentage(TotalSales) * TotalSales;
}

int main()
{
	float TotalSales = ReadTotalSales();

	cout << endl << "Comission Percentage = " << GetComissionPersentage(TotalSales) << endl << endl;
	cout << "Total Comission = " << CalculateComissionPersenrage(TotalSales) << endl;

	return 0;
}