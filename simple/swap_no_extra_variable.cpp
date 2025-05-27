// QUESTION: Write a program to swap the value with no extra variable in c++

// header file
#include<iostream>
using namespace std;

// main file
int main()
{
    // Take a variable to a and b
    int a,b;

    // input your program
    cout<<"Enter your value A: ";
    cin>>a;

    // output your program
    cout<<"Enter your value B: ";
    cin>>b;

    // logic of swap program with no extra variable
    a=a+b;
    b=a-b;
    a=a-b;

    // print the variable value of A and B
    cout<<"A="<<a<<" "<<"B="<<b;

    // end of code
}