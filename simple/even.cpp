// QUESTION: Write a program in c++ to find out even and odd number through input    

#include<iostream>
using namespace std;

int main()
{
    int n;
    
    cout<<"enter your number: ";
    cin>>n;

    if(n%2==0)
    cout<<"this is an even number";

    else
    cout<<"this is a odd number";
}