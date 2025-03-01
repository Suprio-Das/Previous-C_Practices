//Write a program to find the maximum between two numbers.

#include<iostream>

using namespace std;

int main()
{
    //Declaring variables
    int num1, num2;

    //Taking input from user
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << endl;

    //Finding the max number
    if(num1 > num2)
        cout << "Maximum number is: " << num1 << endl;
    else if(num1 == num2)
        cout << "Both are equal." << endl;
    else
        cout << "Maximum number is: " << num2 << endl;

    return 0;
}
