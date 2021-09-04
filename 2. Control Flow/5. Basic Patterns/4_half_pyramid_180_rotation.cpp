/*
Write a program to print a half pyramid 180 degree rotate

        *
      * *
    * * *
  * * * *
* * * * *

Algo Design: 
Row : 5
Col : 5
Star : incrementing by 1 (Right Alignment) i.e., col no. 5 (same as row number)
Space : decrementing by 1 (Lef Alignment) i.e, space = pyramid length - row number
*/

#include<iostream>

using namespace std;

int main()
{
    int pyramid_length;
    cin>>pyramid_length;

    for(int i = 1; i <= pyramid_length; i++ )
    {
        for(int j = 1; j <= pyramid_length; j++)
        {
            if(j <= pyramid_length-i)
            {
                cout<< "  ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }
    return 0;
}