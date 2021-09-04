/*
Write a program to print the maximum of three give number
*/

#include<iostream>

using namespace std;

int main()
{
    int num1,num2,num3;
    cin>>num1>>num2>>num3;

//Nested if else statement
    if(num1 > num2) 
    {
        if(num1 > num3)
        {
            cout<<num1;
        }
        else
        {
            cout<<num3;
        }
    }
    else
    {
        if(num2 > num3)
        {
            cout<<num2;
        }
        else
        {
            cout<<num3;
        }
    }

    return 0;
}