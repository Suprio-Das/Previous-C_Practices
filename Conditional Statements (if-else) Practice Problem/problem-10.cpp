/*Write a program to check whether a character is uppercase or lowercase alphabet.*/

#include <iostream>

using namespace std;

int main()
{
    char ch;

    //taking input from user
    cout << "Enter a character: ";
    cin >> ch;

    cout << endl;

    //checking uppercase or lowercase
    if((ch >= 'A') && (ch <= 'Z'))
        cout << ch << " is an uppercase character\n";
    else
        cout << ch << " is a lowercase character\n";

    return 0;
}
