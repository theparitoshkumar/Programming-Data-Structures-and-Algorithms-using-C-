/*
Write a program to check the number is odd or even
*/

#include<iostream>

using namespace std;

int main()
{

    int num;
    cin>>num;

    if(num % 2 == 0) //if is used to check the condion (expression) is true of false 
    {
        cout<<"Even";
    }
    else
    {
        cout<<"Odd";
    }
    return 0;
}