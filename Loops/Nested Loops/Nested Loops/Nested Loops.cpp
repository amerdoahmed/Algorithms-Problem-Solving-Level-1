#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Nested Loops!\n";
	for (int i = 1; i <= 9 ; i++)
	{
		cout << "i = " << i << endl;

		for (int j = 0; j <= 10; j++)
		{
			cout << i << " * " << j << " = " << i * j << endl;

		}
		
		cout << "----------------------------------------\n";
	}

	for (int i = 0; i <= 5; i++)
	{
		for (int j = 0;j <= i;j++) {
			cout << "*";
		}
		cout << "\n";
	}

	cout << endl;
	cout << "Letters\n";
	for (int i = 65;i <= 70;i++)
	{
		for (int j = 65;j <= i; j++)
		{
			cout << char(j) << " ";

		}
		cout << "\n";
	}

	cout << endl << "------------------------------------------------------" << endl;

	for (int j = 0;j <= 5;j++)
	{
		for (int i = 0; i <= j; i++) {
			cout << "*";
		}
		cout << "\n";
	}

	for (int i = 1;i <= 10;i++)
	{
		for (int j = 1;j <= i; j++)
		{
			cout << j << " ";
		}
		cout << "\n";
	}

	//for (int i = 65; i <= 90; i++)
	//{
	//	cout << "Letter : " << char(i) << endl;
	//	for (int j = 65;  j <= 90;  j++)
	//	{
	//		cout << char(i) << char(j) << "\n";
	//	}
	//	cout << "-------------------------------\n";
	//}

	for (int i = 10;i >= 1;i--)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}
	
	for (int i = 10;i >= 1;i--)
	{
		for (int j = 1;j <= i; j++)
		{
			cout << j << " ";
		}
		cout << "\n";
	}

	for (int i = 1;i <= 10;i++)
	{
		for (int j = i;j <= 10; j++)
		{
			cout << j << " ";
		}
		cout << "\n";
	}

	return 0;
}
