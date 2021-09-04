/*
Write a rpogram to print the sum of n natural number
*/


#include<iostream>

using namespace std;

int main()
{
    int num;
    cin>>num;
// for loop is use when we know the number of iteration
    int sum = 0;
    for(int i = 1; i<=num;i++)
    {
        sum += i;
    }
    cout<<sum;
    return 0;
}