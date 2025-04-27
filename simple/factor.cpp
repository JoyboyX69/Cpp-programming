// QUESTION: WRITE A PROGRAM IN C++ TO FIND OUT THE FACTOR OF A NUMBER

// header file
#include<iostream>
using namespace std;

// main file
int main()
{
    // take variable for input a number 
    int n;

    cout<<"Enter your number: ";
    cin>>n;

    // start a loop of check variable one by one 
    for(int i=1;i<=n;i++)
    {
        // this condition will check the value have remainder zero
        if(n%i==0)
        
        // then print the value of i
        cout<<i<<"\t";
    }
}