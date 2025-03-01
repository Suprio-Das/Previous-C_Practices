//Write a program to check whether a year is a leap year or not.

#include <iostream>
using namespace std;

int main()
{
    int year;

    //taking input from user
    cout << "Enter a year to check leap year or not: ";
    cin >> year;

    cout << endl;

    //checking leap year or not
    if(year % 4 == 0)
    {
        if(year % 100 == 0)
        {
            if(year % 400 == 0)
            {
                cout << year << " is leap year" << endl;
            }
            else
                cout << year << " is not leap year" << endl;
        }
        else
            cout << year << " is leap year" << endl;
    }
    else
        cout << year << " is not leap year" << endl;

    return 0;
}
