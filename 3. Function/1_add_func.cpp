/*
This program is used to understand the function syntax and the function stack.
stack follow Last In First out. 

so the last fucntion call get executed first.

*/

#include<iostream>

using namespace std;

int add(int a, int b); // function decalartion

void print(int num)
{
    cout<<num<<endl;
}

int main()
{

    int num1,num2;
    cin>>num1>>num2;
    cout<<add(num1,num2)<<endl; // This is function call and actuall parameter
    return 0;
}

int add(int a,int b)
{
    print(a);
    print(b);
    int sum = a + b;
    return sum;
}