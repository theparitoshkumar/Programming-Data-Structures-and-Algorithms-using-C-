/*
Write a program to check the alphabet is vowel or consonent
*/


#include<iostream>

using namespace std;

int main()
{
    char ch;
    cin>>ch;

    switch (ch)
    {
    case 'a': 
        cout<<"Vowel";
        break;
    case 'e': 
        cout<<"Vowel";
        break;
    case 'i': 
        cout<<"Vowel";
        break;
    case 'o': 
        cout<<"Vowel";
        break;
    case 'u': 
        cout<<"Vowel";
        break;
    
    default:
        cout<<"Consonent";
        break;
    }
    return 0;
}