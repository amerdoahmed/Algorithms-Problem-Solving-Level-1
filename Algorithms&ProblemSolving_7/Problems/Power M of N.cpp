// Problem 32 - Power M of N
#include <iostream>
#include <string>

using namespace std;

int ReadNumber()
{
	int Number;

	cout << "Enter a number: ";
	cin >> Number;

	return Number;
}
int ReadPower()
{
	int Power;
	cout << "Enter a power: ";
	cin >> Power;

	return Power;
}

int PowerOfM(int Number, int M)
{
	if (M == 0)
	{
		return 1;
	};
	int P = 1;
	for (int i = 1;i <= M;i++)
	{
		P *= Number;
	}
	return P;
}



int main()
{
	cout << "Power M of N" << endl;
	cout << "Result = " << PowerOfM(ReadNumber(), ReadPower()) << endl;

	return 0;
}
