/*
A Pythagorean triple consists of three positive integers a, b, and c, such that a2 + b2 = c2. 
Such a triple is commonly written (a, b, c), 
and a well-known example is (3, 4, 5). If (a, b, c) is a Pythagorean triple, 
then so is (ka, kb, kc) for any positive integer k. 
A primitive Pythagorean triple is one in which a, b and c are coprime 
(that is, they have no common divisor larger than 1).
[1] A triangle whose sides form a Pythagorean triple is called a Pythagorean triangle, 
and is necessarily a right triangle.
*/

#include<bits/stdc++.h>

using namespace std;

bool check(int x, int y, int z){
    int a = max(x,max(y,z)); // max is  algorithm headerfile function which return maximum between two arguments
    int b,c;
    /* 
    We will just arrange the values of x,y,z into a,b,c so that a should be the greater and rest should be
    in b and c
    */
    if(a == x){
        b = y;
        c = z;
    }
    else if( a == y){
        b = x;
        c = z;
    }
    else{
        b = x;
        c = y;
    }

    // Check the pythagorean triplet condition

    if( a*a == b*b + c*c){
        return true;
    }
    else{
        return false;
    }


}

int main(){

    int a,b,c;
    cin>>a>>b>>c;

    if(check(a,b,c))
    {
        cout<<"Pythagorean Triplets\n";
    }
    else{
        cout<<"Not Pythgorean Triplet.\n";
    }
    return 0;
}