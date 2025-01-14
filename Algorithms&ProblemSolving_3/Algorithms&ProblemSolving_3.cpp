#include <iostream>
#include <string>

using namespace std;

// Problem 11 - Average Pass or Fail
enum enPassFail { Pass = 1, Fail = 2 };
void ReadMarks(int& Num1, int& Num2, int& Num3)
{
	cout << "Please enter number 1 : \n";
	cin >> Num1;
	cout << "Please enter number 2 : \n";
	cin >> Num2;
	cout << "Please enter number 3 : \n";
	cin >> Num3;
};
int SumOf3Marks(int Num1, int Num2, int Num3)
{
	return Num1 + Num2 + Num3;
}
float CalculateAverage(int Num1, int Num2, int Num3)
{
	return (float)SumOf3Marks(Num1, Num2, Num3) / 3;
}
enPassFail CheckAverage(float average)
{
	if (average >= 50)
	return enPassFail::Pass;
	else
		return enPassFail::Fail;
}
void PrintResults(float average)
{
	cout << "Your average is :  " << average << endl;
	if (CheckAverage(average) == enPassFail::Pass)
		cout << "\nYou Passed" << endl;
	else 
		cout << "\nYou Failed" << endl;
}


// Problem 12 - Max of two numbers
void ReadNumbers(int& num1, int& num2)
{
	cout << "Please enter number 1\n";
	cin >> num1;
	cout << "Please enter number 2\n";
	cin >> num2;
}
int MaxOf2Numbers(int num1, int num2)
{
	if (num1 > num2)
		return num1;
	else
		return num2;
}
void PrintMax(int max)
{
	cout << "The max of 2 numbers is : " << max << endl;
}

// Problem 13 - Max of three numbers
void Read3Numbers(int& A, int& B, int& C)
{
	cout << "Please enter number 1\n";
	cin >> A;
	cout << "Please enter number 2\n";
	cin >> B;
	cout << "Please enter number 3\n";
	cin >> C;
};
int MaxOf3Numbers(int A, int B, int C)
{
	if (A > B)
		if (A > C)
			return A;
		else return C;
	else 
		if (B > C)
		return B;
	else
		return C;
}
void PrintMaxOf3Numbers(int max)
{
	cout << "The max of 2 numbers is : " << max << endl;
}

// Problem 14 - Swap two numbers
void ReadTwoNumbers(int& num1, int& num2)
{
	cout << "Please enter first number\n";
	cin >> num1;
	cout << "Please enter second number\n";
	cin >> num2;
}
void SwapNumbers(int& num1, int& num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
}
void PrintNumbers(int num1, int num2)
{
	cout << "Number 1 = " << num1 << endl;
	cout << "number 2 = " << num2 << endl;
}

// Problem 15 - Rectangle Area
void ReadRectangle(float& width, float& height)
{
	cout << "Please enter width\n";
	cin >> width;
	cout << "Please enter height\n";
	cin >> height;
}
float CalculateRectangleArea(float width, float height)
{
	return width * height;
}
void PrintResultArea(float area)
{
	cout << "The area of the rectangle is : " << area << endl;
}

int main()
{
    cout << "Algorithms & ProblemSolving 3\n\n";

	// Problem 11
	int Mark1, Mark2, Mark3;
	ReadMarks(Mark1, Mark2, Mark3);
	PrintResults(CalculateAverage(Mark1, Mark2, Mark3));

	// Problem 12
	int num1, num2;
	ReadNumbers(num1, num2);
	PrintMax(MaxOf2Numbers(num1, num2));

	// Problem 13
	int A, B, C;
	Read3Numbers(A, B, C);
	PrintMaxOf3Numbers(MaxOf3Numbers(A, B, C));

	// Problem 14
	ReadTwoNumbers(num1, num2);
	PrintNumbers(num1, num2);
	SwapNumbers(num1, num2);
	cout << "After swapping\n";
	PrintNumbers(num1, num2);

	// Problem 15
	float width, height;
	ReadRectangle(width, height);
	PrintResultArea(CalculateRectangleArea(width, height));

	return 0;
}

