#include<iostream>

using namespace std;

int main()
{
    int n;

    //taking input from user
    cout << "Enter a number: ";
    cin >> n;

    //Printing n to 1
    for(int i = n; i >= 1; i--)
    {
        cout << i << endl;
    }

    return 0;
}
