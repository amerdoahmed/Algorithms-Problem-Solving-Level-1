//Problem 46 - Print Letters From A To Z

#include <iostream>
#include <string>

using namespace std;

void PrintLettersAToZ()
{
	for (int i = 65;i <= 90;i++)
	{
		cout << char(i) << endl;
	}
}

int main()
{
	cout << "Print Letters From A To Z\n\n";
	PrintLettersAToZ();
	return 0;
}