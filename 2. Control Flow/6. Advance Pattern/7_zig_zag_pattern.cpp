/*
Write the program to print a zig-zag pattern

1   *   *
2  * * * *
3 *   *   *
  123456789
Algo Design:
n = 0
Row: 3
Col: 9

Pattern:
    Star: 
        look the pattern star corrdinate which are (1,2) (1,7), (2,2), (2,4), (2,6), (2,8), (3,1), (3,5), (3,9)
        look at there sums are 4, 8, 4, 6, 8, 10, 4, 8, 12
        almost are diviser of 4 or when row = 2 and col = 4 or row = 2 and col = 8 i.e., row devided by 2 and col divided by 4

*/

#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i = 1; i <= 3; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(((i+j) %  4 == 0) || (i % 2 ==0 && j % 4 == 0))
            {
                cout<< "*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}