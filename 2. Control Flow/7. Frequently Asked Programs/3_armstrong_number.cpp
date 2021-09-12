/*
Write a program to check the number is armstrong number or not

In number theory, a narcissistic number / armstrong number in a given number base b is a number that is the 
sum of its own digits each raised to the power of the number of digits.

*/

#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int num;
    cin>>num;
    int orignalNumber = num;

    int digit = 0;
    while (num > 0)
    {
        digit++;
        num/=10;
    }

    //cout<<"digit = "<<digit<<endl;
    
    num = orignalNumber;
    int sum = 0;
    while (num > 0)
    {
        int last_digit = num % 10;
        //cout<<"last digit = "<<last_digit<<endl;
        int new_digit = pow(last_digit,digit);
        //cout<<"New Digit = "<<new_digit<<endl;
        sum += new_digit;
        //cout<<"sum = "<<sum<<endl;
        num /= 10;
    }
    
    //cout<<orignalNumber<<endl;
    //cout<<sum<<endl;

    if(orignalNumber == sum)
    {
        cout<<"Armstrong Number";
    }
    else
    {
        cout<<"Not Armstrong";
    }
    
    return 0;
}