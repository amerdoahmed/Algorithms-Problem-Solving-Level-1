#include <iostream>
#include <string>

using namespace std;

// Problem 16 - Rectangle Area By Side & Diagonal

void ReadNumbers(float& A, float& D)
{
	cout << "Please Enter Rectangle Side A ? " << endl;
	cin >> A;
	cout << "Please Enter Rectangle Diagonal B ? " << endl;
	cin >> D;
}
float ReactangleAreaBySideAndDiagonal(float A, float D)
{
	float Area = A * (sqrt(pow(D, 2) - pow(A, 2)));;
	return Area;
}
void PrintResult(float Area)
{
	cout << "\n Rectangle Area = " << Area << endl;
}

int main()
{
	float A, D;
	ReadNumbers(A, D);
	PrintResult(ReactangleAreaBySideAndDiagonal(A, D));
	return 0;
}