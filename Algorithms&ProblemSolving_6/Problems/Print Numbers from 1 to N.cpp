// Problem 26 - Print Numbers from 1 to N

#include <iostream>
#include <string>

using namespace std;

int ReadNumber()
{
	int N;
	cout << "Please enter a number: \n";
	cin >> N;
	return N;
}

void PrintRangeFrom1ToN_UsingWhile(int N)
{
	int i = 0;
	cout << "Using While Loop\n";
	while (i < N)
	{
		i++;
		cout << i << endl;
	}
}

void PrintRangeFrom1ToN_UsingDoWhile(int N)
{
	int i = 0;
	cout << "Using Do-While Loop\n";
	do
	{
		i++;
		cout << i << endl;
	} while (i < N);
}

void PrintRangeFrom1ToN_UsingFor(int N)
{
	cout << "Using For Loop\n";
	for (int i = 0; i < N; i++)
	{
		cout << i << endl;
	}
}


int main()
{
	cout << "Print Numbers from 1 to N\n\n";

	int N = ReadNumber();
	PrintRangeFrom1ToN_UsingWhile(N);
	PrintRangeFrom1ToN_UsingDoWhile(N);
	PrintRangeFrom1ToN_UsingFor(N);

	return 0;
}