/*
Write a program to print the sum of number enterd by user till user did not give negative number
*/

#include<iostream>

using namespace std;

int main()
{
    int num;
    cin>>num;

// while loop is used when you don't have any idea of number of iterations
    int sum = 0;
    while(num >= 0)
    {
        sum += num;
        cin>>num;
    }

    cout<<sum;
    return 0;
}