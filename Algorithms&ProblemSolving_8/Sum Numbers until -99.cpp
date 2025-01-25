//Problem 37 - Sum Numbers until -99

#include <iostream>
#include <string>

using namespace std;

float ReadNumber(string message)
{
	float Number;
	cout << message;
	cin >> Number;

	return Number;
}

float SumNumbers()
{
	int Sum = 0, Number = 0, Counter = 1;
	do
	{
		Number = ReadNumber("Please enter Number " + to_string(Counter) + "\n");
		if (Number == -99)
			break;
		Sum += Number;
		Counter++;

	} while (Number != -99);
	return Sum;
}

int main()
{
	cout << "Sum Numbers until -99\n";
	cout << endl << "Result = " << SumNumbers() << endl;
}

