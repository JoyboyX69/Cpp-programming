QUESTION: Write a program to swap the value with extra variable in c++

// header file
#include<iostream>
using namespace std;

// main file
int main()
{
    int a,b,temp;

    cout<<"Enter the value of A: ";
    cin>>a;

    cout<<"Enter the value of B: ";
    cin>>b;

    temp=a;
    a=b;
    b=temp;

    cout<<"Swap value is ";
    cout<<"A="<<a<<" "<<"B="<<b;
}