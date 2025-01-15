// Problem 24 - Valid age | invalid age

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
void PrintResult(int Age)
{
	if (ValidteNumberInRange(Age, 18, 45))
		cout << "Valid age\n";
	else
		cout << "Invalid age\n";
}



int main()
{

	PrintResult(ReadAge());

	return 0;
}