/*
Write a program to check the given alphabet is vowel or consonent
*/

#include<iostream>

using namespace std;

int main()
{
    char ch;
    cin>>ch;

    int isLowercaseVowel = (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
    int isUppercaseVowel = (ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');

    if(isLowercaseVowel||isUppercaseVowel)
        cout<<"Vowel";
    else
        cout<<"Consonent";
    return 0;
}