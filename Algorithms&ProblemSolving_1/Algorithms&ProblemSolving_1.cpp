#include <iostream>
#include <string>

using namespace std;

// Problem 1 : Print Your Name
string ReadName()
{
    string Name;

    cout << "Please Enter Your Name" << endl;;
    getline(cin, Name);
    return Name;
}


// Problem 2 : Print Your Name with input
void PrintName(string Name)
{
    cout << "Your name is " << Name << endl;
}


// Problem 3 : check odd or even
enum enNumberType { Odd = 1, Even = 2 };
int ReadNumber()
{
    int Number;

    cout << "Please enter a number ? " << endl;
    cin >> Number;
    return Number;
}
enNumberType CheckNumberType(int Num)
{
    int Result = Num % 2;
    if (Result == 0)
        return enNumberType::Even;
    else
        return enNumberType::Odd;
}
void PrintNumberType(enNumberType NumberType)
{
    if (NumberType == enNumberType::Even)
        cout << "\n Number is Even. \n";
    else
        cout << "\n Number is Odd. \n";
}


// Problem 4 : Hire a drive case 1
struct stInfo {
    int Age;
    bool HasDriveLicense;
	bool hasRecommendation;
};
stInfo ReadInfo()
{
    stInfo Info;

    cout << "Please enter your age ? " << endl;
    cin >> Info.Age;

    cout << "Please enter your driver license ? " << endl;
    cin >> Info.HasDriveLicense;

	cout << "Do you have recommendation ? " << endl;
	cin >> Info.hasRecommendation;

    return Info;
}
bool isAccepted(stInfo Info)
{
    if(Info.hasRecommendation)
		return true;
    else
        return (Info.Age > 21 && Info.HasDriveLicense);
}
void PrintResult(stInfo Info)
{
    if (isAccepted(Info))
        cout << "\n Hired " << endl;
    else
        cout << "\n Rejected " << endl;
}

int main()
{
    cout << "Algorithms & Problem Solving!\n\n";

    // Problem 1
    PrintName("Ahmed"); 
	cout << endl;
    // Problem 2
    PrintName(ReadName());
    cout << endl;
    // Problem 3
    PrintNumberType(CheckNumberType(ReadNumber()));
    cout << endl;
    // Problem 4 &  Problem 5 (Recommendation);
    PrintResult(ReadInfo());


    return 0;
}
