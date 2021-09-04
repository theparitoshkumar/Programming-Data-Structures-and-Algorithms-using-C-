#include<iostream>

using namespace std;

int main()
{
    float num1,num2;
    cin>>num1>>num2;
    char op;
    cin>>op;
    
    switch (op)
    {
        case '+': cout<<num1 + num2<<endl;
            break;
        case '-': cout<<num1 - num2<<endl;
            break;
        case '*': cout<<num1 * num2<<endl;
            break;
        case '/': cout<<num1 / num2<<endl;
            break;
        case '%': cout<<(int)num1 % (int)num2<<endl;
            break;
        default: cout<<"Invalid Operator";
            break;
    }

    return 0;
}