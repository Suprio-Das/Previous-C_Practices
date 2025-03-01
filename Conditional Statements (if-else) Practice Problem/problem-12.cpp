//Write a program to count the total number of notes in a given amount.

#include<iostream>

using namespace std;

int main()
{
    int amount;

    //taking total amount from user
    cout << "Enter the total amount(Taka): ";
    cin >> amount;

    cout << endl;

    //counting all the notes
    int thousand = amount/1000;
	int five_hundred = (amount%1000)/500;
	int hundred = ((amount%1000)%500)/100;
	int fifty = (((amount%1000)%500)%100)/50;
	int twenty = ((((amount%1000)%500)%100)%50)/20;
	int ten = (((((amount%1000)%500)%100)%50)%20)/10;
	int five = ((((((amount%1000)%500)%100)%50)%20)%10)/5;
	int two = (((((((amount%1000)%500)%100)%50)%20)%10)%5)/2;
	int one = ((((((((amount%1000)%500)%100)%50)%20)%10)%5)%2)/1;

    //Output
    cout << "Given amount: " << amount <<"BDT" << endl;
    cout << "\nNotes: " << endl << endl
    << "One Thousand = " << thousand << endl
    << "Five Hundread = " << five_hundred << endl
    << "One Hundread = " << hundred << endl
    << "Fifty = " << fifty << endl
    << "Twenty = " << twenty << endl
    << "Ten = " << ten << endl
    << "Five = " << five << endl
    << "Two = " << two << endl
    << "One = " << one << endl;

}
