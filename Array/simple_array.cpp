// QUESTION: Write a program in c++ to find out the number is even,odd and sum of natural number

// header file
#include<iostream>
using namespace std;

// function Declaration
void even(int []);
void odd (int []);
void sum (int []);

// main file
int main()

{
    // take a 2 variable first is array and second is loop
    int a[10],i;

    // this loop for go with count the variable
    for(i=0;i<10;i++)
    {
        // enter the variable in an array
        cout<<"Enter YOur Array No. "<<i<<": ";
        cin>>a[i];
    }

    // function call
    even(a);
    cout<<"\n";
    odd(a);
    cout<<"\n";
    sum(a);

    return 0;
}

// this function is find out the value of even value
void even(int no1[10])
{
    // take a vairable for loop
    int i;

    // input the value of number
    cout<<"Even Number is:  ";
    for(i=0;i<10;i++)
    {
        // this condition helps to find out the even value
        if(no1[i]%2==0)
        cout<<no1[i]<<"\t";
    }
   
}

// this function helps to find out the odd value 
void odd(int no1[10])
{
    // take a variable for loop
    int i;

    // input the value
    cout<<"\nOdd Number is :  ";
    for(i=0;i<10;i++)
    {
        // this condition helps to find out the odd value or not
        if(no1[i]%2!=0)
        cout<<no1[i]<<"\t";
    }
}

// this function helps to find the value sum of a natural number
void sum(int no1[10])
{
    // take a variable for loop and another value is s1 for sum
    int i,s1=0;

    cout<<"sum of all numbers: ";

    // this iteration helps to find check all the number
    for(i=0;i<10;i++)
    {
        // this equation helps to find the sum of a number
        s1=s1+no1[i];
    }
    
    // send the output value
    cout<<s1;
}
