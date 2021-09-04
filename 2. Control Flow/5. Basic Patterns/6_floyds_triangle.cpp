/*
Write a program to print to floyd's triangle

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

Algo design:
Row : 5
Col : 5
Pattern : print a incrementing number independent of row and column row's numbers time
*/

#include<iostream>

using namespace std;

int main()
{
    int row;
    cin>>row;
    
    int counter = 1;
    for(int i = 1; i <= row; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout<<counter++<<" ";
        }
        cout<<endl;        
    }
    return 0;
}