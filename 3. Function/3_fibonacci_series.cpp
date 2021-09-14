/*
Write a program to print the fibonacci series
0, 1, 1, 2, 3, 5, 8, 13, ...
*/

#include<iostream>

using namespace std;

void fib(int num)
{
    int term1 = 0, term2 = 1;

    for(int i = 1; i <= num; i++)
    {
        cout<<term1<<"\t";
        int nextTerm = term1 + term2;
        term1 = term2;
        term2 = nextTerm;
    }
    
}

int main()
{

    int num;
    cin>> num;
     
    fib(num);
    return 0;
}