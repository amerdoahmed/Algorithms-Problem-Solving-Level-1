// Problem 36 - Simple Calculator

#include <iostream>
#include <string>

using namespace std;

enum enOperationType
{
	ADDITION = '+',
	SUBTRACTION = '-',
	MULTIPLICATION = '*',
	DIVISION = '/'
};
float ReadNumber(string message)
{
	float Number;
	cout << message;
	cin >> Number;

	return Number;
}

enOperationType ReadType()
{
	char OT = '+';
	cout << "Enter operation type (+, -, *, /): \n";
	cin >> OT;

	return (enOperationType)OT;
}

float Calculate(float Number1, float Number2, enOperationType OpType)
{
	switch (OpType)
	{
	case enOperationType::ADDITION:
		return Number1 + Number2;
	case enOperationType::SUBTRACTION:
		return Number1 - Number2;
	case enOperationType::MULTIPLICATION:
		return Number1 * Number2;
	case enOperationType::DIVISION:
		return Number1 / Number2;
	default:
		return Number1 + Number2;
	}
};

int main()
{
	cout << "Simple Calculator\n\n";

	float Number1 = ReadNumber("Pleas enter the first Number ?\n");
	float Number2 = ReadNumber("Pleas enter the second Number ?\n");

	enOperationType OpType = ReadType();

	cout << endl << "Result: " << Calculate(Number1, Number2, OpType) << endl;

	return 0;
}
