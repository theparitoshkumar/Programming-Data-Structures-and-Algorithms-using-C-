/*
Write a program to check whether the give number is prime or not
*/

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int num,flag = 0;
    cin>>num;

    if(num == 1)
    {
        cout<<"Co-Prime";
    }
    else
    {
        for(int i = 2; i <= sqrt(num); i++)
        {
            if(num % i == 0)
            {
                cout<<"Composite";
                flag = 1;
                break;
            }
        }
    }

    if(flag == 0)
    {
        cout<<"Prime";
    }

    return 0;
}