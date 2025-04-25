// QUESTION : WRITE A PROGRAM IN C++ TO FIND OUT THE FACTORIAL OF A NUMBER

// CODE

// header file
#include<iostream>
using namespace std;

// main file
int main()
{
    // take a vairable in integer i is for loop and n is number 
    int fact=1,i,n;

    // this line for print and take input of a number
    cout<<"Enter the value: ";
    cin>>n;

    // loop start to take start with 1 and go to number value 
    for(i=0;i<=n;i++)
    {
        // fact means factorial,so this formula helps to find out the value 
        fact*=i;
    }

    // this line help to print the factorial number
    cout<<"The Factorial of a Number is "<<fact;
}