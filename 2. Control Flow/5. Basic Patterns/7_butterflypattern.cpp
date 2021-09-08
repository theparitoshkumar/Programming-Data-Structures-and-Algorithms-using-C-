/*
Write a program to print butterfly pattern

*             *
* *         * * 
* * *     * * *
* * * * * * * *
* * * * * * * *
* * *     * * *
* *         * * 
*             *

Algo Design:
We can see this pattern in 4 quadrant 
Row : 8
Col : 8
Pattern : 
Star: Left Alignment and Right Alignment increses by 1
    and same inverter pattern in below side
Space : 2 * max. star in one quadrant - row's number

*/

#include<iostream>

using namespace std;

int main()
{

    int num = 7;
    //cout<<"Enter the length of the star in one quadrant\n";
    //cin>>num;

    //for upper quadrants
    for(int i = 1; i <= num; i++)
    {   //for lef alignment stars
        for(int j = 1; j <= i; j++)
        {
            cout<<"* ";
        }
        // for spaces in between
        for(int k = 1; k <= 2 * num - 2 * i; k++)
        {
            cout<<"  ";
        }
        // for right alignment stars
        for(int l = 1; l <= i; l++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    //for lower quadrants
    for(int i = num; i >= 1; i--)
    {   //for lef alignment stars
        for(int j = 1; j <= i; j++)
        {
            cout<<"* ";
        }
        // for spaces in between
        for(int k = 1; k <= 2 * num - 2 * i; k++)
        {
            cout<<"  ";
        }
        // for right alignment stars
        for(int l = 1; l <= i; l++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    

    return 0;
}