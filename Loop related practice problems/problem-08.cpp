#include<iostream>

using namespace std;

int main()
{
    int sum = 0, n;

    //Taking input from user
    cout << "Enter a number: ";
    cin >> n;

    //Sum of all odd numbers from 1 to n
    for(int i = 1; i <= n; i++)
    {
        if(i % 2 != 0)
            sum = sum + i;
    }

    cout << endl;

    //Printing the sum of all odd numbers from 1 to n
    cout << "Sum of all odd numbers from 1 to " << n << "(n) is: " << sum << endl;

    return 0;
}
