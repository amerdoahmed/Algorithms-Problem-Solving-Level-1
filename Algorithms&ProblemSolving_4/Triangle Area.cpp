#include <iostream>
#include <string>

using namespace std;

// Problem 17 - Triangle Area

void ReadNumbers(float& A, float& H)
{
	cout << "Please Enter Triangle Base A ? " << endl;
	cin >> A;
	cout << "Please Enter Rectangle Height H ? " << endl;
	cin >> H;
}
float TriangleArea(float A, float H)
{
	float Area = (A / 2) * H;
	return Area;
}
void PrintResult(float Area)
{
	cout << "\n Triangle Area = " << Area << endl;
}

int main()
{
	float A, H;
	ReadNumbers(A, H);
	PrintResult(TriangleArea(A, H));
	return 0;
}