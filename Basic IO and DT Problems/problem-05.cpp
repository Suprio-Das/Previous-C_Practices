//Write a program to enter the radius of a circle and find its diameter, circumference and area.

#include <iostream>

using namespace std;

int main()
{
    //Declaring variables
    double radius, diameter, circumference, area, pie = 3.1416;

    //Taking radius from user
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    //Calculation of Circle
    diameter = 2 * radius;
    circumference = 2 * pie * radius;
    area = pie * (radius * radius);

    cout << endl;

    //Output
    cout << "The diameter of the circle is: " << diameter << endl;
    cout << "The circumference of the circle is: " << circumference << endl;
    cout << "The area of the circle is: " << area << endl;

    return 0;
}
