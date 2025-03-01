//Write a program for concatenation of two strings.

#include<iostream>
#include<string>

using namespace std;

int main()
{
    string str1,str2;

    cout << "Enter the first string: ";
    cin >> str1;

    cout << "Enter the second string: ";
    cin >> str2;

    string str3 = str1 + str2;

    cout << endl;

    cout << "Concatenated string is: " << str3;

    cout << endl;

    return 0;
}
