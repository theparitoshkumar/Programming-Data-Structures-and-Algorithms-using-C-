/*
Using do while loop write a program to print the number till non - negative number
*/

#include<iostream>

using namespace  std;

int main()
{
    int num;
    cin>>num;
    do
    {
        cout<<num<<" ";
        cin>>num;
    }while(num >= 0);
    return 0;
}