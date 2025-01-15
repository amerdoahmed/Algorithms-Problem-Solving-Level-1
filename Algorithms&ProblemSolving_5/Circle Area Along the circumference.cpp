// Problem 21 - Circle Area Along the cercumference

#include <iostream>
#include <string>

using namespace std;

float ReadCircumference()
{
	float circumference;
	cout << "Enter the circumference: \n";
	cin >> circumference;

	return circumference;
}

float CircleAreaByCircumference(float circumference)
{
	const float PI = 3.14159;

	float Area = pow(circumference, 2) / (4 * PI);

	return Area;
}

void PrintResults(float Area)
{
	cout << "\n The Area of the circle by circumference = " << Area << endl;
}

int main()
{
	PrintResults(CircleAreaByCircumference(ReadCircumference()));
	return 0;
}