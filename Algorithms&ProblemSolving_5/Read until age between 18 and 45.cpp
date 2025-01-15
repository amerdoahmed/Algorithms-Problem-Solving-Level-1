// Problem 25 - Read until age between 18 and 45

#include <iostream>
#include <string>

using namespace std;

int ReadAge()
{
	int Age;
	cout << " Please enter your age\n";
	cin >> Age;
	return Age;
}
bool ValidteNumberInRange(int Number, int From, int To)
{
	return (Number >= From && Number <= To);
}
int ReadUntilAgeBetween(int From, int To)
{
	int Age;
	do
	{
		Age = ReadAge();
	} while (!ValidteNumberInRange(Age, From, To));
	return Age;
}
void PrintResult(int Age)
{
	cout << "Your age is " << Age << endl;
}



int main()
{

	PrintResult(ReadUntilAgeBetween(18, 45));

	return 0;
}