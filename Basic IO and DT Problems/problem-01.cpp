//Write a program to perform input/output of all basic data types.

#include <iostream>
using namespace std;

int main()
{
    //Input of a character
    char ch;
    cout << "Enter a character: ";
    cin >> ch;


    //Input of an integer
    int i;
    cout << "Enter an integer: ";
    cin >> i;


    //Input of a float
    float f;
    cout << "Enter a float: ";
    cin >> f;


    //Input of a double
    double d;
    cout << "Enter a double: ";
    cin >> d;


    //Input of a string
    string s;
    cout << "Enter a string: ";
    cin >> s;

    cout << endl;

    //Output of a Character
    cout << "Character: " << ch << endl;

    //Output of a integer
    cout << "Integer: " << i << endl;

    //Output of a float
    cout << "Float: " << f << endl;

    //Output of a double
    cout << "Double: " << d << endl;

    //Output of a string
    cout << "String: " << s << endl;

    return 0;
}
