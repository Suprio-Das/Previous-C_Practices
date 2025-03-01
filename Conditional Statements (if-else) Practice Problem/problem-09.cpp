/*Write a program to input any character and check
  whether it is alphabet, digit or special character.*/

#include <iostream>

using namespace std;

int main()
{
    char ch;

    //taking input from user
    cout << "Enter any character: ";
    cin >> ch;

    cout << endl;

    //checking alphabet, digit or special character
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        cout << ch << " is an alphabet" << endl;
    else if(ch >= '0' && ch <= '9')
        cout << ch << " is a digit" << endl;
    else
        cout << ch << " is a special character" << endl;

    return 0;
}
