/*
Write a program to print number in pyramid.

    1
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5

Algo Design:
Row : 5
Col : 5 + spaces
Pattern: 
    Number: each rows start with 1 and go the the row's number
    Space : number of rows - row's number

*/

#include<iostream>

using namespace std;
    
int main()
{
    int row;
    cin>>row;

    for(int i = 1; i <= row; i++)
    {
        for( int j = 1; j <= row - i; j++)
        {
            cout<<" ";
        }

        for(int k = 1; k <= i; k++)
        {
            cout<<k<<" ";
        }
        cout<<endl;
    }
    return 0;
}