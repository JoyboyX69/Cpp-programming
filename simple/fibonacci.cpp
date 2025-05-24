// QUESTION: Write a program to print fibonacci number in c++

// header file
#include<iostream>
using namespace std;

// main file
int main()
{
    // Take a variable n for input and two variable for a=0,b=1;
    int n,a=0,b=1,c;

    // input a number towords the loop
    cout<<"Enter your term: ";
    cin>>n;

    // print the value of a and b
    cout<<"Your Fibonacci number is ";
    cout<<a<<" "<<b;

    // start a loop to numbe
    for( int i=1;i<=n;i++)
    {
        // add a and b to c & swap the value
        c=a+b;
        a=b;
        b=c;

        // print the value of c and get the fibonacci series
        cout<<" "<<c;
    }

    

}