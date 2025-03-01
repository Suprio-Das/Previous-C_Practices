//Write a program to input the month number and print the number of days in that month.

#include<iostream>

using namespace std;

int main()
{
    int month_number;

    //taking month number
    cout << "Enter the number: ";
    cin >> month_number;

    cout << endl;

    //Output
    if(month_number == 1)
        cout << "This month has 31 days" << endl;
    else if(month_number == 2)
        cout << "This month has 28 or 29 days" << endl;
    else if(month_number == 3)
        cout << "This month has 31 days" << endl;
    else if(month_number == 4)
        cout << "This month has 30 days" << endl;
    else if(month_number == 5)
        cout << "This month has 31 days" << endl;
    else if(month_number == 6)
        cout << "This month has 30 days" << endl;
    else if(month_number == 7)
        cout << "This month has 31 days" << endl;
    else if(month_number == 8)
        cout << "This month has 31 days" << endl;
    else if(month_number == 9)
        cout << "This month has 30 days" << endl;
    else if(month_number == 10)
        cout << "This month has 31 days" << endl;
    else if(month_number == 11)
        cout << "This month has 30 days" << endl;
    else if(month_number == 12)
        cout << "This month has 31 days" << endl;
    else
        cout << "There is only 12 months in a year" << endl;

    return 0;
}
