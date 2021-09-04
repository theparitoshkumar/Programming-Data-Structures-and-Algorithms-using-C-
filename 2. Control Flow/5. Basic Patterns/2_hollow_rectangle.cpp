/*
Write a program to print hollow rectangle

* * * * *
*       *
*       *
*       *
* * * * *

Algo Design:
Row : 5
Col : 5
Star :  First Row and Last Row
        First Col and Last Col
Space : remaining

*/

#include<iostream>

using namespace std;

int main()
{
    int row, col;
    cin>> row>> col;

    for(int i = 1; i <= row; i++)
    {
        for(int j = 1; j <= col; j++)
        {
            if(i == 1 || i == row || j == 1 || j == col)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}