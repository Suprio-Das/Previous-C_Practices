//Write a program to check whether a number is negative, positive or zero.

#include<iostream>

using namespace std;

int main()
{
    int num;

    //taking a input from user
    cout << "Enter a number: ";
    cin >> num;

    cout << endl;

    //checking positive or negative
    if(num > 0)
        cout << num << " is a positive number." << endl;
    else if(num < 0)
        cout << num << " is a negative number." << endl;
    else
        cout << "It is zero." << endl;

    return 0;
}
