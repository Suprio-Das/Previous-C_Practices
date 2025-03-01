//Write a program to check whether a character is in the alphabet or not.

#include<iostream>

using namespace std;

int main()
{
    char ch;

    //taking a character from user
    cout << "Enter a character: ";
    cin >> ch;

    cout << endl;

    //alphabet or not checking
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        cout << ch << " is an alphabet" << endl;
    else
        cout << ch << " is not an alphabet" << endl;
}
