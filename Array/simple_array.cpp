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
        
        if(no1[i]%2==0)
        cout<<no1[i]<<"\t";
    }
   
}

void odd(int no1[10])
{
    int i;

    cout<<"\nOdd Number is :  ";
    for(i=0;i<10;i++)
    {
        if(no1[i]%2!=0)
        cout<<no1[i]<<"\t";
    }
}

void sum(int no1[10])
{
    int i,s1=0;

    cout<<"sum of all numbers: ";

    for(i=0;i<10;i++)
    {
        s1=s1+no1[i];
    }
    cout<<s1;
}
