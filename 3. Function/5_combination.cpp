/*
Write a program to print the combiantion of hte given numbers
nCr = n!/((n - r)! * r!)
*/

#include<iostream>

using namespace std;

int fact(int num)
{
    int factorial = 1;

    for (int i = 1; i <= num; i++)
    {
        factorial *= i; 
    }
    return factorial;    
}

int main()
{

    int n,r;
    cin>>n>>r;

    int ans = fact(n)/(fact(n - r) * fact(r));
    cout<<ans<<endl;

    return 0;
}