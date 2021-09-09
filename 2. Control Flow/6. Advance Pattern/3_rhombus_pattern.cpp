/*
Write a program to print a rhombus using stars


    * * * * *
   * * * * *
  * * * * * 
 * * * * *
* * * * *

Algo Design:
Row : 5
Col : 5 + spaces
Pattern : 
    Space : number of rows - row's number
    star : number of rows

*/

#include<iostream>

using namespace std;

int main()
{
    int rows;
    cin>>rows;

    for(int i = 1; i <= rows; i++)
    {
        for(int j = 1; j <= rows-i; j++)
        {
            cout<<"  ";
        }

        for(int k = 1; k <= rows; k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}