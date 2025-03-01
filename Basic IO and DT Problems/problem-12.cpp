/*Write a  program to enter marks of five subjects
  and calculate total, average and percentage.*/

#include<iostream>
using namespace std;

int main()
{
    //Declaring variables
    float bangla, english, math, science, history;
    float total, average, percentage;

    //Taking subject input from user
    cout << "Enter the marks of the five subjects: " << endl;
    cin >> bangla >> english >> math >> science >> history;

    cout << endl;

    //Output
    total = bangla + english + math + science + history;
    average = total / 5.0;
    percentage = (total / 500.0) * 100;

    cout << "Total Marks = " << total << endl;
    cout << "Average Marks = " << average << endl;
    cout << "Percentage = " << percentage << "%" << endl;
    return 0;
}
