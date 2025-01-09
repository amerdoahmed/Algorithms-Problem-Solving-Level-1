#include <iostream>
#include <string>

using namespace std;

int readIntNumberInRange(int From, int To)
{
    int number;
    cout << "Please enter number from " << From << " to " << To << endl;
    cin >> number;
    while (number<From || number>To)
    {
        cout << "Wrong number, please enter number from " << From << " to " << To << endl;
        cin >> number;
    }
    cout << "Great, The number you entered is ";
    return number;
}

void printNumbersFrom1ToN()
{
    cout << "Print Numbers From 1 To N\n";
    int N;
    cout << "Enter number N\n";
    cin >> N;
    int i = 1;
    while (i <= N)
    {
        cout << i << " ";
        i++;
    }

}

void printNumbersFromNTo1()
{
    cout << "Print Numbers From N To 1\n";
    int N;
    cout << "Enter number N\n";
    cin >> N;
    int i = N;
    while (i > 0)
    {
        cout << i << " ";
        i--;
    };
}

void print_Sum_Odd_Numbers_from_1_to_N()
{
    int number;
    cout << "Enter Number N\n";
    cin >> number;

    int sum = 0;
    int i = 1;
    cout << "Odd numbers are: ";
    while (i <= number)
    {
        if (i % 2 == 1) {
            cout << i << ", ";
            sum = sum + i;
        }
        i++;
    }
    cout << "The sum of the odd numbers = " << sum << endl;

}

void print_Sum_Even_Numbers_from_1_to_N()
{
    int number;
    cout << "Enter Number N\n";
    cin >> number;

    int sum = 0;
    int i = 1;
    cout << "Even numbers are: ";
    while (i <= number)
    {
        if (i % 2 == 0) {
            cout << i << ", ";
            sum = sum + i;
        }
        i++;
    }
    cout << "The sum of the even numbers = " << sum << endl;

}

void factorial_of_N()
{
    int number;
    cout << "Please enter a positive number\n";
    cin >> number;


    int factorial = 1;
    int i = number + 1;
    while (number > 0)
    {
        i--;
        factorial = factorial * i;
        if (i == 1)
        {
            cout << "Factorial is " << factorial << endl;
        };
    };
    cout << "Factorial must be positive number\n";
    cin >> number;

}

void powerOfM()
{
    int number;
    int m;
    cout << "Enter the number\n";
    cin >> number;
    cout << "Enter the power\n";
    cin >> m;

    int p = 1;
    int i = 0;

    while (m != 0)
    {
        p = p * number;
        i++;
        if (i == m)
        {
            cout << p;
        }
    };
    cout << p;

};

void sum_Until_minus_99()
{
    int sum = 0;
    int number;
    cout << "Enter your numbers\n";
    cin >> number;
    while (number != -99)
    {
        sum = sum + number;
        cin >> number;
    }
    cout<< endl << "Your sum is " << sum;
}

void printLettersFromAtoZ()
{
    int i=65;
    while (i >= 65 && i <= 90)
    {
        cout << char(i) << " ";
        i++;
    };
}

void ATM_PIN_THREE_TIMES()
{
    int failedCount = 0;
    const int PIN = 1234;
    int UserPIN;
    cout << "Please Enter Your PIN\n";
    cin >> UserPIN;
    while (UserPIN != PIN)
    {
        cout << "Wrong PIN \n";
        failedCount = +1;
        cout << "Please Enter Your PIN\n";
        cin >> UserPIN;
        if (failedCount == 3)
        {
            cout << "Card Locked\n";
        }
    }
    int Balance = 7500;
    cout << "Your Balance is " << Balance;
}

int main()
{
    //cout << readIntNumberInRange(1, 10);
    //cout << "\n\n";
    //printNumbersFrom1ToN();
    //cout << "\n\n";
    //printNumbersFromNTo1();
    //cout << "\n\n";
    //print_Sum_Odd_Numbers_from_1_to_N();
    //cout << "\n\n";
    //print_Sum_Even_Numbers_from_1_to_N();
    //cout << "\n\n";
    /*factorial_of_N();*/
    //cout << "\n\n";
    //powerOfM();
    //cout << "\n\n";
    //sum_Until_minus_99();
    //cout << "\n\n";
    //printLettersFromAtoZ();
    //cout << "\n\n";
    ATM_PIN_THREE_TIMES();
    return 0;
}