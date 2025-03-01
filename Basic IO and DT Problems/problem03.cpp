//Write a program to enter two numbers and perform all arithmetic operations.

#include<iostream>
using namespace std;

int main()
{
    //Declaring two variables
    float num1, num2;

    //Taking input from user
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << endl;

    //Performing all arithmetic operations
    cout << "Sum of the two numbers: " << num1 + num2 << endl;
    cout << "Subtraction of the two numbers: " << num1 - num2 << endl;
    cout << "Multiplication of the two numbers: " << num1 * num2 << endl;
    cout << "Quotient of the two numbers: " << num1 / num2 << endl;
    cout << "Remainder of the two numbers: " << (int)num1 % (int)num2 << endl;

    return 0;
}
