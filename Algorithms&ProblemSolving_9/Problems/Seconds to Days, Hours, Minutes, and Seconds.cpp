// Problem 43 - Seconds to Days, Hours, Minutes, and Seconds

#include <iostream>
#include <string>

using namespace std;

struct strTaskDuration {
	int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
};

int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

strTaskDuration SecondsToTaskDuration(int TotalSeconds)
{
	strTaskDuration TaskDuration;
	const int SecondsPerDays = 24 * 60 * 60;
	const int SecondsPerHours = 60 * 60;
	const int SecondsPerMinutes = 60;

	int Remainder = 0;

	TaskDuration.NumberOfDays = floor(TotalSeconds / SecondsPerDays);
	Remainder = TotalSeconds % SecondsPerDays;
	TaskDuration.NumberOfHours = floor(Remainder / SecondsPerHours);
	Remainder = TotalSeconds % SecondsPerHours;
	TaskDuration.NumberOfMinutes = floor(Remainder / SecondsPerMinutes);
	Remainder = TotalSeconds % SecondsPerMinutes;
	TaskDuration.NumberOfSeconds = Remainder;

	return TaskDuration;
}

void PrintTaskDurationDetils(strTaskDuration TaskDuration)
{
	cout << endl;
	cout << TaskDuration.NumberOfDays << ":"
		<< TaskDuration.NumberOfHours << ":"
		<< TaskDuration.NumberOfMinutes << ":"
		<< TaskDuration.NumberOfSeconds << "\n";

}

int main()
{
	int TotalSeconds = ReadPositiveNumber("Pleas Enter Total Seconds ? ");
	PrintTaskDurationDetils(SecondsToTaskDuration(TotalSeconds));

	return 0;
}