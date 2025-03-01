#include<iostream>

using namespace std;

int main()
{
    int n;

    //Taking a number from user
    cout << "Enter a number for multiplication table: ";
    cin >> n;

    cout << endl;

    cout << "Multiplication table of " << n << endl;

    //Printing the multiplication table of n
    for(int i = 1; i <= 10; i++)
    {
        cout << n << " x " << i << " = " << n*i << endl;
    }

    return 0;
}
