//Write a program to find the maximum between two numbers using conditional operator.

#include<iostream>

using namespace std;

int main()
{
    int num1, num2;

    //Taking input from user
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    //Max number checking
    int maximum = (num1 > num2) ? num1 : num2;

    cout << "Maximum number is: " << maximum << endl;

    return 0;
}
