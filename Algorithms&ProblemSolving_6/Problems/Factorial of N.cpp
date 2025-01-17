// Problem 30 - Factorial of N 

#include <iostream>
#include <string>

using namespace std;

int ReadPositiveNumber(string Message)
{
	int Number;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

int Factorial(int Num)
{
	int F = 1;
	for (int counter = Num; counter >= 1; counter--)
	{
		F *= counter;
	}
	return F;
}

int main()
{
	cout << "Factorial Of N \n\n";
	cout << Factorial(ReadPositiveNumber("Please Enter a posotive number")) << endl;

}
