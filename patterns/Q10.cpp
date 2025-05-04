/*QUESTION: Write a program in c++ to print the same pattern is given below
*
**
***
****
*****
*/

// header file
#include<iostream>
using namespace std;

// main file
int main()
{
    // take a four variable, first is input and 3 for loops to print the pattern
    int n,i,j,s;

    // input your value
    cout<<"Enter a number: ";
    cin>>n;

    // first loop is start 
    for(i=1;i<=n;i++)
    {
        // print next line to each and every step
        cout<<endl;

        // second loop is start for gap 
        for(s=n-1;s>=i;s--)
        cout<<" ";

        // third loop is start to print stars 
    for(j=1;j<=i;j++)
    cout<<"*";
    }
    return 0;
    // end of code
}