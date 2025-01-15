// Problem 23 - Circle Area Inscribe in an arbitrary triangle

#include <iostream>
#include <string>

using namespace std;

void ReadTriangleData(float& A, float& B, float& C)
{
	cout << " Please enter triangle side A\n";
	cin >> A;
	cout << " Please enter triangle base B\n";
	cin >> B;
	cout << " Please enter triangle side C\n";
	cin >> C;
}

float CircleAreaByATriangle(float A, float B, float C)
{
	const float PI = 3.14159;

	float P;
	P = (A + B + C) / 2;
	float T;
	T = (A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C)));

	float Area = PI * (T, 2);;

	return Area;
}

void PrintResults(float Area)
{
	cout << "\n Circle Area = " << Area << endl;
}

int main()
{
	float A, B, C;
	ReadTriangleData(A, B, C);
	PrintResults(CircleAreaByATriangle(A, B, C));
	return 0;
}