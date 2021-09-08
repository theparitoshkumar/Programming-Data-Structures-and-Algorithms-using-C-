/*
Write a program to print the 0s or 1s row's number times in alternate rows and column 

1
0 1
1 0 1
0 1 0 1
1 0 1 0 1

Algo Design: 
Row : 5
col : row's number
pattern :
    if  col's number + row's number = even then 1
    if  col's number + row's number = odd then 0 

*/

#include<iostream>

using namespace std;

int main()
{
    int row;
    cin>>row;

    for(int i = 1; i <= row; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            if((i + j) % 2 == 0)
            {
                cout<<1<<" ";
            }

            else
            {
                cout<<0<<" ";
            }
        }
        cout<<endl;
    }
}