/*
Write a program to print a half pyramid using number

1
2 2
3 3 3
4 4 4 4 
5 5 5 5 5

Algo Design:
Row: 5
Col: 5
Pattern: row numbers exactly row number times
*/

#include<iostream>

using namespace std;

int main()
{
    int num;
    cin>>num;

    for(int i = 1; i <= num; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}