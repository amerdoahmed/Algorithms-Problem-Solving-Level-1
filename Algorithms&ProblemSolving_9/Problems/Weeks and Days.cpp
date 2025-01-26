#include <iostream>
#include <string>

using namespace std;

float ReadPositivenumber(string message)
{
	float Number;
	do
	{
		cout << message;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

float HoursToDays(float NumberOfHours)
{
	return (float)NumberOfHours / 24;
}

float HoursToWeeks(float NumberOFHours)
{
	return (float)NumberOFHours / 24 / 7;
}

float DaysToWeeks(float NumberOfDays)
{
	return (float)NumberOfDays / 7;
}


int main()
{
	cout << "Weeks & Days \n";

	float NumberOfHours = ReadPositivenumber("Please Enter Number Of Hours ? \n");
	float NumberOfDays = HoursToDays(NumberOfHours);
	float NumberOfWeeks = DaysToWeeks(NumberOfDays);

	cout << endl;
	cout << "Total Hours = " << NumberOfHours << endl;
	cout << "Total Days = " << NumberOfDays << endl;
	cout << "Total Weeks = " << NumberOfWeeks << endl;

	return 0;
}