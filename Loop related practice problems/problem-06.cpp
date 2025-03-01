#include<iostream>

using namespace std;

int main()
{
    int n, sum = 0;

    //taking input from user
    cout << "Enter a number: ";
    cin >> n;

    //sum of natural numbers from 1 to n
    for(int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    cout << endl;

    //Printing the sum
    cout << "Sum of all natural numbers from 1 to " << n << "(n) is: " << sum << endl;
}
