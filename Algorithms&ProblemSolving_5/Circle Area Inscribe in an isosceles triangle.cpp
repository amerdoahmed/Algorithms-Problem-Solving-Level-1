// Problem 22 - Circle Area Inscribe in an isosceles triangle

#include <iostream>
#include <string>

using namespace std;

void ReadTriangleData(float& A, float& B)
{
	cout << " Please enter triangle side A\n";
	cin >> A;
	cout << " Please enter triangle base B\n";
	cin >> B;
}

float CircleAreaByTriangle(float A, float B)
{
	const float PI = 3.14159;

	float Area = PI * (pow(B, 2) / 4) * ((2 * A - B) / (2 * A + B));

	return Area;
}

void PrintResults(float Area)
{
	cout << "\n Circle Area = " << Area << endl;
}

int main()
{
	float A, B;
	ReadTriangleData(A, B);
	PrintResults(CircleAreaByTriangle(A, B));
	return 0;
}