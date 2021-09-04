/*
Write a program to take input from user of their mom and dad pocket money in a day 
and print the total pocket money.
*/

#include<iostream>

using namespace std;

int main()
{
    int mom_amount,dad_amount;
    cout<<"Enter the amount mom gives: \n";
    cin>> mom_amount;
    cout<<"Enter the amoutn dad gives: \n";
    cin>> dad_amount;

    int todays_pocket_money;
    todays_pocket_money = mom_amount + dad_amount;
    cout<<"Today's total pocket money is "<<todays_pocket_money;\
    return 0;
}