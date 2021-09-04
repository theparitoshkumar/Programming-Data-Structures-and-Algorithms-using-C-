/*
Write a program to print the size of premetive data types modifiers

*/


#include<iostream>

using namespace  std;

int main()
{
    unsigned a;
    signed b;
    short c;
    long d;


    cout<<"Size of unsigned is "<<sizeof(a)<<" bytes \n";
    cout<<"Size of signed is "<<sizeof(b)<<" bytes \n";
    cout<<"Size of short is "<<sizeof(c)<<" bytes \n";
    cout<<"Size of long is "<<sizeof(d)<<" bytes \n";
    cout<<"Size of long long is "<<sizeof(long long)<<" bytes \n";
    cout<<"Size of long double is "<<sizeof(long double)<<" bytes \n";

    return 0;
}
