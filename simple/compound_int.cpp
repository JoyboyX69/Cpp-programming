// QUESTION: Write a program in C++ to find out the compound interest

// header file
#include<iostream>
using namespace std;

// main file
int main()
{
    // take a 6 variable in float
    float p,r,t,amount=1,ci,i;

    // input your all value
    cout<<"Enter The Principal: ";
    cin>>p;
    cout<<"Enter The Rate: ";
    cin>>r;
    cout<<"Enter The Time: ";
    cin>>t

    // start a loop to calculate the time period
        for(i=1;i<=t;i++)
        {
            // amount will be calculate
            amount*=(1+r/100);
        }
        // store the value of p in amount
        amount*=p;
        
        // amount is substract Principal to calculate the compound interest
        ci=amount-p;
        // print the value of compound and amount
        cout<<"compound interest value is "<<ci;
        cout<<"\nAmount="<<amount;

        return 0;
            // end of code
}