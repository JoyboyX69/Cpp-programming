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
    cin>>t;
        for(i=1;i<=t;i++)
        {
            amount*=(1+r/100);
        }
        amount*=p;
        ci=amount-p;
        cout<<"compound interest value is "<<ci;
        cout<<"\nAmount="<<amount;

        return 0;
            
}