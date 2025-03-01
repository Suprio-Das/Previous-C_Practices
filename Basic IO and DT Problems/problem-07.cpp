//Write a program to convert days into years, weeks and days.

#include <iostream>
using namespace std;

int main()
{
    //Declaring variables
    int days, years, weeks;

    //Taking days from the user
    cout << "Enter the number of days: ";
    cin >> days;

    //Calculating years, weeks and days
    years = days / 365;
    weeks = (days % 365) / 7;
    days = (days % 365) % 7;

    //Output
    cout << years <<" years, "<< weeks << " weeks, " << days << " days";

    return 0;
}
