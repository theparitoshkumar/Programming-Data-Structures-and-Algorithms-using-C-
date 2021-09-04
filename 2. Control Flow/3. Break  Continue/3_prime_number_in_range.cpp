/*
Write a program to print the prime number in the given range
*/

#include<iostream>
#include<cmath>

using namespace std;

int main()
{

    int start, end;
    cin>>start>>end;

    for(int i=start;i <= end; i++)
    {
        if(i == 1)
        {
            continue;
        }
        else
        {
            int flag = 0;
            for(int j = 2; j <= sqrt(i); j++)
            {
                if(i % j == 0)
                {
                    flag = 1;
                    break;
                }
            }
            if(flag == 0)
           {
               cout<<i<<"\t";
           }
        }

    }
    return 0;
}