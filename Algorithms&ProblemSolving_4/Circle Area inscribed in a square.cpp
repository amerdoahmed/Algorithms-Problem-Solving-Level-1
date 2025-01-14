// Problem 20 - Circle Area inscribed in a square

#include <iostream>
#include <string>

using namespace std;

float ReadSquarSide()
{
	float A;

	cout << "Please Enter Squar Side ?" << endl;
	cin >> A;

	return A;
}
float CircleAreaInscribeASquare(float A)
{
	const float PI = 3.14;
	float Area = (PI * pow(A, 2)) / 4;
	return Area;
}
void PrintResult(float Area)
{
	cout << "\n Circle Area = " << Area << endl;
}

int main()
{

	PrintResult(CircleAreaInscribeASquare(ReadSquarSide()));
	return 0;
}