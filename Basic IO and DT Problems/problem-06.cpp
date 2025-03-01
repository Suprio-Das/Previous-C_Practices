//Write a program to enter temperature in Celsius and convert it into Fahrenheit.

#include <iostream>
using namespace std;

int main()
{
    //Declaring variables
    float celsius, fahrenheit;

    //Taking temperature from user
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    //Calculation of Cel To Fah
    fahrenheit = (celsius * 9/5) + 32;

    cout << endl;

    //Output
    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;

    return 0;
}
