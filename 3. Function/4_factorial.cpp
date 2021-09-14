/*
Write a program to print the factrial of a given number

3! = 1 * 2 * 3 = 6
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
    cin>> num;

    cout<<fact(num);
    return 0;
}