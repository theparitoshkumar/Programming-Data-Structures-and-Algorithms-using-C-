/*
Write a program to convert the hexadecimal number to decimal
e.g.,
    1CF  = 1 * 16^2 + C * 16^1 + F * 16^0
            = 256 + 12 * 16 + 15 * 1
            = 256 + 192 + 15
            = 463

*/

#include<bits/stdc++.h>

using namespace std;

int hexadeciamlToDecimal(string num)
{
    int decimal = 0;
    int size = num.size();
    int multiplier = 1;

    for(int i = size - 1; i >= 0; i--){
        if(num[i] >= '0' && num[i] <= '9'){
        
            decimal += multiplier * (num[i] - '0');
        }
        else if(num[i] >= 'A' && num[i] <= 'F'){
            decimal += multiplier * (num[i] - 'A' + 10);
        }
        multiplier *= 16;
    }
    return decimal;
}

int main(){

    string num;
    cin>>num;
    cout<<hexadeciamlToDecimal(num);
    return 0;
}