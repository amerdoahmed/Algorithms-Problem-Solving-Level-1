// Porblem 42 - Task Duration In Seconds

#include <iostream>
#include <string>

using namespace std;

struct strTaskDuration
{
	int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
};

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

strTaskDuration ReadTaskDuration()
{
	strTaskDuration TaskDuration;
	TaskDuration.NumberOfDays = ReadPositivenumber("Please Enter Number Of Days ? \n");
	TaskDuration.NumberOfHours = ReadPositivenumber("Please Enter Number Of Hours ? \n");
	TaskDuration.NumberOfMinutes = ReadPositivenumber("Please Enter Number Of Minutes ? \n");
	TaskDuration.NumberOfSeconds = ReadPositivenumber("Please Enter Number Of Seconds ? \n");

	return TaskDuration;
}

int TaskDurationInSeconds(strTaskDuration TaskDuration)
{
	int DurationInSeconds = 0;
	DurationInSeconds = TaskDuration.NumberOfDays * 24 * 60 * 60;
	DurationInSeconds += TaskDuration.NumberOfHours * 60 * 60;
	DurationInSeconds += TaskDuration.NumberOfMinutes * 60;
	DurationInSeconds += TaskDuration.NumberOfSeconds;

	return DurationInSeconds;
}

int main()
{
	cout << "Task Duration In Seconds \n";
	cout << endl;
	cout << TaskDurationInSeconds(ReadTaskDuration()) << " Seconds \n";
	return 0;
}