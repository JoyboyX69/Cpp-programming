// QUESTION: Write a program to check armstrong number or not in c++

// header file
#include<iostream>
using namespace std;

// main file
int main()
{
    // Take a variable to do check armstrong number
    int n,r,sum=0,temp;

    // take a input 
    cout<<"Enter your term: ";
    cin>>n;

    // save a input number to temp value
    temp=n;

    // start a loop to check armstrong number
    while(n!=0)
    {
        r=n%10;
        sum=sum+(r+r+r);
        n/=10;
    }

    // check if sum value is equal to temp value then print armstrong number
    if(sum==temp)
    cout<<"This is an armstrong number";

    // otherwise print not an armstrong number
    else
    cout<<"This is not an armstrong number";

}