/*
Write a program to print a rectangle using stars.

* * * * *
* * * * *
* * * * *
* * * * *
* * * * *

Algo Design:
Rows : 5
Col : 5
star : all 5 rows and 5 columns

*/

#include<iostream>

using namespace std;

int main()
{
    int row,col;
    cin>>row>>col;

    for(int i = 1; i <= row; i++)
    {
        for(int j = 1; j <= col; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}