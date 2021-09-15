/*
Write a program to print the pascal triangle pattern

1
1 1
1 2 1
1 3 3 1
1 4 6 4 1

Algo Deisgn:
Row : 5
Col : row's number
Pattern :
    iCj = i!/(i-j)! * j!

    0C0
    1C0 1C1
    2C0 2C1 2C2
    3C0 3C1 3C2 3C4
    4C0 4C1 4C3 4C4 4C5

*/

#include<iostream>

using namespace std;

int fact(int num)
{
    int factorial = 1;
    for(int i = 1; i <= num; i++)
    {
        factorial *= i;
    }
    return factorial;
}

int main()
{
    int num;
    cin >> num;

    for(int i = 0; i <= num; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            int nCr = fact(i) / (fact(i-j)* fact(j));
            cout<<nCr<<" ";
        }
        cout<<endl;
    }
    return 0;
}