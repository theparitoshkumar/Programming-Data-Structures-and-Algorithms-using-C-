/*
Write a program to print the number from 1 to 100 which is non-divisible by 3
*/

#include<iostream>

using namespace std;

int main()
{

    for (int i = 1; i<=100;i++)
    {
        if(i % 3 == 0)
        {
            continue;
        }
        cout<<i<<"\t";
    }
    return 0;
}