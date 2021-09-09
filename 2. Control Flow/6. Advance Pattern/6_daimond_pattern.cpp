/*
Write a program to print the daimond using star.


      * 
    * * *  
  * * * * * 
* * * * * * * 
* * * * * * * 
  * * * * * 
    * * * 
      * 

Alog Design: 
num = 4
Row : 2 * 4
Col: 2 * row's number - 1
Pattern : 
    pyramid: 
        star : 2 * row's number - 1
        space : number of rows - row's number
    inverted pyramid: 
        inverse the above pattern

*/

#include<iostream>

using namespace std;

int main()
{
    int num; 
    cin>>num;

    for(int i = 1; i <= num; i++)
    {
        for(int j = 1; j <= num - i; j++)
        {
            cout<<"  ";
        }

        for(int k = 1; k <= 2 * i - 1;k++)
        {
            cout<<"* ";
        }

        cout<<endl;
    }

    for(int i = num; i >= 1; i--)
    {
        for(int j = 1; j <= num - i; j++)
        {
            cout<<"  ";
        }

        for(int k = 1; k <= 2 * i - 1;k++)
        {
            cout<<"* ";
        }

        cout<<endl;
    }

    return 0;
}