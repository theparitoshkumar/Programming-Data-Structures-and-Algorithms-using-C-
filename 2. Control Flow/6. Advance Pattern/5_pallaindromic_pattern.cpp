/*
Write a Program to print pallaindromic pattern



        1  
      2 1 2  
    3 2 1 2 3  
  4 3 2 1 2 3 4 
5 4 3 2 1 2 3 4 5

Algo Design:
Row : 5
col : 2 * row - 1
Pattern: 
    number: decreasing number from row's number to 1
            increasing number from 2 to row's number
    space :  number of rows - row's number

*/

#include<iostream>

using namespace std;

int main()
{
    int row;
    cin>> row;

    for(int i = 1; i <= row; i++)
    {
        for(int j = 1; j <= row - i; j++)
        {
            cout<<"  ";
        }
        for(int k = i; k >= 1; k--)
        {
            cout<<k<<" ";
        }
        for(int l = 2; l <= i; l++ )
        {
            cout<<l<<" ";
        }
        cout<<endl;
    }
    return 0;
}