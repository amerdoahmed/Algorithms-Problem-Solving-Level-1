
// Problem 31 - Power of 2 3 4
#include <iostream>
#include <string>

using namespace std;

int ReadNumber()
{
    int Number;
    cout << "Please Enter Number\n";
    cin >> Number;
    return Number;
}
void PowerOf2_3_4(int Number)
{
    int a, b, c;
    a = Number * Number;
    b = Number * Number * Number;
    c = Number * Number * Number * Number;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
}

int main()
{
    cout << "Power of 2 3 4!\n";
    PowerOf2_3_4(ReadNumber());
    return 0;
}
