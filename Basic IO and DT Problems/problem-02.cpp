/*Write a program to enter two float numbers
  and find their sum (4 decimal point).*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Declaring two float variables
    float num1, num2;

    // Taking input from user
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    // Calculating sum
    float sum = num1 + num2;

    // Printing result
    cout << endl;
    cout << "Sum of the numbers is = " << fixed << setprecision(4) << sum << endl;

    return 0;
}
