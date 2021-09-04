/*
Write a program to print inverted half pyramid

* * * * *
* * * * 
* * * 
* * 
*

Algo Design:
Row : 5
Col : 5

Star: decrementing by 1 each row


*/

#include<iostream>

using namespace std;

int main()
{
    int pyramid_length;
    cin>>pyramid_length;

    for(int i = pyramid_length; i >= 1; i--)
    {
        for(int j = 1; j <= i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}