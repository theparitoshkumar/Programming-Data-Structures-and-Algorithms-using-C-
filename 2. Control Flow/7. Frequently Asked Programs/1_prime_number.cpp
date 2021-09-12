/*
Write a program to check the number is prime or not

*/

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int num;
    cin>>num;

    if(num == 1)
    {
        cout<<"Co-Prime";
        return 0;
    }

    bool flag = 0;
    for(int i = 2; i <= sqrt(num); i++)
    {
        if(num % i == 0)
        {
            flag = 1;
            cout<<"Non- Prime";
            break;
        }
    }

    if(flag == 0)
    {
        cout<<"Prime";
    }
    return 0;
}