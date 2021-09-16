/*
Write a program to convert the deciaml number into octal number

17 = 1 * 8^1 + 7 * 8^0
    = 8 + 7 = 15

*/

#include<iostream>

using namespace std;

int octalToDecimal(int num){
    int octal = 0;
    int multiplier = 1;

    while (num > 0)
    {
        int lastDigit = num % 10;
        octal += lastDigit*multiplier;
        num /= 10;
        multiplier *=8;
    }
    return octal;
}

int32_t main(){

    int num;
    cin>>num;

    cout<<octalToDecimal(num);

    return 0;
}