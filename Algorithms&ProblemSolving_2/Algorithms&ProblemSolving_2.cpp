#include <iostream>
#include <string>

using namespace std;

// Problem 6 Print Full Name
struct stInfo {
	string FirstName;
	string LastName;
};
stInfo ReadInfo()
{
	stInfo Info;
	cout << "Please enter your first name: ";
	cin >> Info.FirstName;
	cout << "Please enter your last name: ";
	cin >> Info.LastName;

	return Info;
}

string GetFullName(stInfo Info, bool Reversed)
{
	string FullName = "";
	if (Reversed)
		FullName = Info.LastName + " " + Info.FirstName;
	else
		FullName = Info.FirstName + " " + Info.LastName;

	return FullName;
}
void PrintFullName(string FullName)
{
	cout << "\n Your full name is : " << FullName << endl;
}

// Problem 7 Half Number
int ReadNumber()
{
	int Number;
	cout << "Please enter a number: ";
	cin >> Number;

	return Number;
}

float HalfNumber(int Number)
{
	return (float)Number / 2;
}

void PrintResults(int Num)
{
	string Result = "the Half of " + to_string(Num) + "  is  " + to_string(HalfNumber(Num));
	cout << endl << Result << endl;
}

// Problem 8 Mark Pass or Fail

enum enPassFail { Fail = 0, Pass = 1 };

int ReadMark()
{
	int Mark;

	cout << "Please enter your mark: ";
	cin >> Mark;
	return Mark;
}
enPassFail CheckMark(int Mark)
{
	if (Mark >= 50)
		return Pass;
	else
		return Fail;
}
void PrintResultsMark(int Mark)
{
	if (CheckMark(Mark) == enPassFail::Pass)
		cout << "\n You Passed \n";
	else 
		cout << "\n You Failed \n";
}

// Problem 9 & 10 | Sum Of 3 Numbers & Average Of 3 Numbers
void ReadNumbers(int& Num1, int& Num2, int& Num3)
{
	cout << "Please enter number 1 : \n";
	cin >> Num1;
	cout << "Please enter number 2 : \n";
	cin >> Num2;
	cout << "Please enter number 3 : \n";
	cin >> Num3;
};
int SumNumbers(int Num1, int Num2, int Num3)
{
	return Num1 + Num2 + Num3;
}
float AverageNumbers(int Num1, int Num2, int Num3)
{
	return (float)SumNumbers(Num1, Num2, Num3) / 3;
}
void PrintResultSum(int total, float average)
{
	cout << "The sum is " << total << endl;
	cout << "The average is " << average << endl;
}

int main()
{
    cout << "Algorithms & Problem Solving 2\n\n";
	// Problem 6
	PrintFullName(GetFullName(ReadInfo(), true));
	cout << endl;

	// Problem 7
	//PrintResults(ReadNumber());
	cout << endl;

	// Problem 8
	PrintResultsMark(ReadMark());
	cout << endl;

	// Problem 9
	int Num1, Num2, Num3;
	ReadNumbers(Num1, Num2, Num3);
	PrintResultSum(SumNumbers(Num1, Num2, Num3), AverageNumbers(Num1, Num2, Num3));

	return 0;
}

