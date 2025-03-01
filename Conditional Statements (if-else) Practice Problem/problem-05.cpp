//Write a program to check whether a number is even or odd.

#include<iostream>

using namespace std;

int main()
{
    //Declaring variable
    int num;

    //taking input from user
    cout << "Enter a number: ";
    cin >> num;

    cout << endl;

    //checking even or odd
    if(num % 2 == 0)
        cout << num << " is an even number" << endl;
    else
        cout << num << " is an odd number" << endl;

    return 0;
}
