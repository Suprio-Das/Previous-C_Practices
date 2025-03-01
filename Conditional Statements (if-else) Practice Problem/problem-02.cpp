//Write a program to find the maximum between three numbers.

#include<iostream>

using namespace std;

int main()
{
    //Declaring variables
    int num1, num2, num3;

    //Taking input from user
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    cout << endl;

    //finding the max numbers
    if(num1 > num2 && num1 > num3)
        cout << "Maximum number is: " << num1 << endl;
    else if(num2 > num1 && num2 > num3)
        cout << "Maximum number is: " << num2 << endl;
    else if(num3 > num1 && num3 > num2)
        cout << "Maximum number is: " << num3 << endl;
    else
        cout << "They are equal" << endl;
}
