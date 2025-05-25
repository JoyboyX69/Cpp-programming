QUESTION: Write a program to swap the value with extra variable in c++

// header file
#include<iostream>
using namespace std;

// main file
int main()
{
    // take a variable for input and temp for swap
    int a,b,temp;

    // input of a
    cout<<"Enter the value of A: ";
    cin>>a;

    // input of b
    cout<<"Enter the value of B: ";
    cin>>b;

    // swap program logic
    temp=a;
    a=b;
    b=temp;

    // print the swap value
    cout<<"Swap value is ";
    cout<<"A="<<a<<" "<<"B="<<b;

    return 0;

    // end of code
}