/*Write a program to enter the length and width
  of a rectangle and find its area and perimeter.*/

#include <iostream>

using namespace std;

int main()
{
    // declaring two variables
    float length, width, area, perimeter;

    // taking input from user
    cout << "Enter the length of a rectangle: ";
    cin >> length;

    cout << "Enter the width of a rectangle: ";
    cin >> width;

    // calculation of area and perimeter
    area = length * width;
    perimeter = 2 * (length + width);

    // output:')
    cout << "\nArea of the rectangle is " << area << endl;
    cout << "Perimeter of the rectangle is " << perimeter << endl;

    return 0;
}
