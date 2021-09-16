/*
Write a program to convert the number from decimal to binary;
e.g.,
    10      10/2 = 5        10 % 2 = 0
    5       5/2 = 2         5 % 2 = 1
    2       2/2 = 1         2 % 2 = 0
    1       1/2 = 0         1 % 2 = 1

    Reverse = 1010

    easiest way:
    16  8   4   2   1
    0   1   0   1   0 = 10

Algo Design:
    1. take input the deciaml number
        int num;
        cin>>num; //10
    2. find the highest multiple of 2 that could be lower than the decimal number
        int multiple = 1;
        while(multiple <= n)
        {
            multiple *=2; 
        }
    3. The multiple is higher than the value so devid with 2 once (We can skip this because it retun 0 )
        multiple /= 2; //8
    4. save a binary_reminder in binary_number using loop
        while(multiplier > 0){
            int binary_reminder = num / multiple; // 10 / 8 = 1 (get binary reminder using highest multiple wrt num)
            binary_number = 10 * binary_number + binary_reminder;
            num -= binary_reminder * multiple; // 10 - (1*8) = 2 (decrement the number by multiple used)
            multiple /= 2; // decrement the multiple to lower multiple


        }

*/

#include<iostream>

using namespace std;

int decimalToBinary(int num){

    int binary_number = 0;
    int multiple = 1;

    while(multiple <= num)
        multiple *= 2;
    
    //multiple /= 2;

    while(num > 0){
        int binary_reminder = num / multiple;
        binary_number = binary_number * 10 + binary_reminder;
        num -= binary_reminder * multiple;
        multiple /= 2;
    }   

    return binary_number;
}

int main(){

    int num;
    cin>>num;

    cout<<decimalToBinary(num);
    return 0;
}