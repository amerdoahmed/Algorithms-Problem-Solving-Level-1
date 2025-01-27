// Problem 49 - ATM PIN 3 Times

#include <iostream>
#include <string>

using namespace std;

string ReadPinCode()
{
	string PinCode;

	cout << "Please Enter PIN Code \n";
	cin >> PinCode;

	return PinCode;
}

bool Login()
{
	string PinCode;
	int Counter = 3;
	do
	{
		Counter--;
		PinCode = ReadPinCode();
		if (PinCode == "1234")
		{
			return true;
		}
		else
		{
			cout << "\nWrong PIN , you have " << Counter << " more tries \n";
			system("color 4F");
		}
	} while (Counter >= 1 && PinCode != "1234");
	return false;
}


int main()
{
	if (Login())
	{
		system("color 2F"); // Turn screen to green
		cout << "Your account balance is " << 7500 << endl;
	}
	else
	{
		cout << "\n Your card blocked call the bank for help. \n";
	}
	return 0;
}