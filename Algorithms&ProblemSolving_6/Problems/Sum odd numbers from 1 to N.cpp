// Problem 28 - Sum odd numbers from 1 to N

#include <iostream>
#include <string>

using namespace std;

enum OddOrEven { Odd = 1, Even = 2 };

int ReadNumber()
{
	int N;
	cout << "Enter a number: ";
	cin >> N;
	return N;
}

OddOrEven CheckOddEven(int N)
{
	if (N % 2 != 0)
		return OddOrEven::Odd;
	else
		return OddOrEven::Even;
}

int SumOddFrom1toNum_UsingFor(int N)
{
	// Good solution
	cout << "Sum Odd Numbers using For Statement: \n";
	int sum = 0;
	for (int counter = 1; counter <= N;counter++)
	{
		if (CheckOddEven(counter) == OddOrEven::Odd)
		{
			sum += counter;
		}
	}
	return sum;
}

int SumOddFrom1toNum_UsingWhile(int N)
{
	cout << "Sum Odd Numbers using While Statement: \n";
	int counter = 0;
	int sum = 0;
	while (counter <= N)
	{
		if (CheckOddEven(counter) == OddOrEven::Odd)
		{
			sum += counter;
		}
		counter++;
	}
	return sum;
}

int SumOddFrom1toNum_UsingDoWhile(int N)
{
	int counter = 0;
	int sum = 0;
	cout << "Sum Odd Numbers using Do While Statement: \n";
	do
	{
		if (CheckOddEven(counter) == OddOrEven::Odd)
		{
			sum += counter;
		}
		counter++;

	} while (counter <= N);
	return sum;
}

int main()
{
	cout << "Sum odd numbers from 1 to N \n\n";

	int Num = ReadNumber();
	cout << SumOddFrom1toNum_UsingFor(Num) << endl;
	cout << SumOddFrom1toNum_UsingWhile(Num) << endl;
	cout << SumOddFrom1toNum_UsingDoWhile(Num) << endl;
}
