/*

Write a program to print the n = sum of n natural number to the given input.

The below algorithm may cost you the time complexity of O(n)

*/

#include<bits/stdc++.h>

/*
It is basically a header file that includes every standard library. In programming contests, 
using this file is a good idea, 
when you want to reduce the time wasted in doing chores; especially when your rank is time sensitive.
*/

using namespace std;

int sum(int num)
{
    int ans = 0;
    for(int i = 1; i <= num; i++)
    {
        ans +=i;
    }
    return ans;
}


int32_t main() // it will produce the 32 bit indepentent from the system
{

    int num;
    cin>>num;
    cout<<sum(num);
    return 0;
}