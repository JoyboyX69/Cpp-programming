// QUESTION: Write a program in c++ to find out even and odd number through input    

// header file
#include<iostream>
using namespace std;

// main file
int main()
{
    // take a vairable o print a value
    int n;
    
    // input your number 
    cout<<"enter your number: ";
    cin>>n;

    // this condition helps o find out the even and odd number
    if(n%2==0)
    cout<<"this is an even number";

    // otherwise this is an odd number
    else
    cout<<"this is a odd number";
}