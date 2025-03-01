//Write a program to find out the ascii value of a character

#include<iostream>

using namespace std;

int main()
{
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    cout << "ASCII value of " << ch << " is: " << (int)ch;
}
