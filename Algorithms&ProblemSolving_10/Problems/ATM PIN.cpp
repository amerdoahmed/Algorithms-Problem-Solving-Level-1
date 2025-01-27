// Problem 49 - ATM PIN 

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
	do
	{
		PinCode = ReadPinCode();
		if (PinCode == "1234")
		{
			return true;
		}
		else
		{
			cout << "\nwrong PIN \n";
			system("color 4F"); // Turn screen to red 
		}
	} while (PinCode != "1234");
}


int main()
{
	if (Login())
	{
		system("color 2F"); // Turn screen to green
		cout << "Your account balance is " << 7500 << endl;
	}
	return 0;
}