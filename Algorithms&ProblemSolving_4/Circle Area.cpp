#include <iostream>
#include <string>

using namespace std;

// Problem 18 - Circle Area

float ReadRadious()
{
	float R;

	cout << "Please Enter Radious R ?" << endl;
	cin >> R;

	return R;
}
float CircleArea(float R)
{
	const float PI = 3.14;
	float Area = PI * pow(R, 2);
	return Area;
}
void PrintResult(float Area)
{
	cout << "\n Circle Area = " << Area << endl;
}

int main()
{

	PrintResult(CircleArea(ReadRadious()));
	return 0;
}