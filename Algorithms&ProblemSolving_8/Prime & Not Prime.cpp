// Problem 38 - Prime Number | Not Prime Number

#include <iostream>
#include <string>

using namespace std;

enum enPrimNotPrime {
	Prime = 1,
	NotPrime = 2
};
float ReadPositiveNumber(string message)
{
	float Number;
	do
	{
		cout << message << endl;
		cin >> Number;
	} while (Number <= 0);
	
	return Number;
}

enPrimNotPrime CheckPrime(int Number)
{
	int M = round(Number / 2);
	for (int Counter = 2; Counter <= M; Counter++)
	{
		if (Number % Counter == 0)
			return enPrimNotPrime::NotPrime;

	}
	return enPrimNotPrime::Prime;;
}

void PrintNumberType(int Number)
{
	switch (CheckPrime(Number))
	{
	case enPrimNotPrime::Prime:
		cout << "The number is prime" << endl;
		break;
	case enPrimNotPrime::NotPrime:
		cout << "The number is not prime" << endl;
		break;
	}
}

int main()
{
	PrintNumberType(ReadPositiveNumber("Pleas enter a positive number"));
}