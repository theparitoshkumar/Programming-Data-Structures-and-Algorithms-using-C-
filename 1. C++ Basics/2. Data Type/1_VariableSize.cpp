/*
Write a program to print the size of Premetive Data Types
*/


#include<iostream>

using namespace std;

int main()
{
    int a;
    float b;
    char c; 
    bool d;
    double e;

    //sizeof() is a operator which is use to return the size of the variable
    cout<<"Size of Integers is "<<sizeof(a)<<" bytes."<<endl;
    cout<<"Size of FLoat is "<<sizeof(b)<<" bytes."<<endl;
    cout<<"Size of Character is "<<sizeof(c)<<" bytes."<<endl;
    cout<<"Size of Boolean is "<<sizeof(d)<<" bytes."<<endl;
    cout<<"Size of Double is "<<sizeof(e)<<" bytes."<<endl;
    return 0;
}
