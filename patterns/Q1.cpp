/* QUESTION: Write a program in C++ to print a pattern just like That: 
 *****
 *****
 *****
 *****
 *****
 */

// header file
#include<iostream>
using namespace std;

// main file
int main()
{
    // take a variable for input and next two variable for loops
    int n,i,j;

    // input your value
    cout<<"Enter a number: ";
    cin>>n;

    // first loop start 
    for(i=1;i<=n;i++)
    {
        // for next line
        cout<<endl;

        // second loop start for print the value of *
        for(j=1;j<=n;j++)
        
        // then print the value
        cout<<"*";
    }
    return 0;
    // end of program
}


