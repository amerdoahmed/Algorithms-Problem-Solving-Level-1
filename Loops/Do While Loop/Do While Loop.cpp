#include <iostream>
#include <string>

using namespace std;

int ReadIntNumberInRangeUdingDoWhile(int From, int To)
{
    int number;

	do
	{
		cout << "Please Enter Number Between " << From << " and " << To << endl;
		cin >> number;
	} while (number < From || number > To);

	return number;
};

int main()
{
    cout << "Do While Loop!\n";
	ReadIntNumberInRangeUdingDoWhile(1, 10);
}

