/*
Write a program to convert the binary number into decimal number.

e.g.,
10001 = 1 * 2^4 + 0 * 2^3 + 0 * 2^2 + 0 * 2^1 + 1 * 2^0
        = 16 + 0 + 0 + 0 + 1
        = 17

*/

#include <iostream>

using namespace std;

int binaryToDecimal(int num){
    int multiplier = 1;
    int decimal_number = 0;

    while(num > 0){
        int lastDigit = num % 10;
        decimal_number = decimal_number + lastDigit * multiplier;
        num /= 10;
        multiplier *= 2;
    }
    return decimal_number;
}

int32_t main(){
    int num;
    cin>>num;

    cout<<binaryToDecimal(num);
    return 0;
}