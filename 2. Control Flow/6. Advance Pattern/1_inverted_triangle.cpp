/*
Write a program to print the inver triangle pattern using numbers

1 2 3 4 5
1 2 3 4
1 2 3
1 2 
1

Algo Design:
Row : 5
Col : 5

Pattern:
Print the numbers from 1 to the number of no. of rows + 1 - (row's number)

*/

#include<iostream>

using namespace std;

int main()
{

    int row;
    cin>>row;

    for(int i = 1; i<=row; i++)
    {
        for(int j = 1; j<=row + 1 - i; j++)
        {
            cout<<j<<" ";

        }
        cout<<endl;
    }
    return 0;
}