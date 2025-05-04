/*QUESTION: Write a program in c++ to print this item
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
    // take a three variable first for input and 2 for loops to print this patterns
    int n,i,j;

    // input your value
    cout<<"Enter an number: ";
    cin>>n;

    // first loop is start
    for(i=1;i<=n;i++)
    {
        // print the new line
        cout<<endl;

        // second loop start 
        for(j=1;j<=i;j++)

        // print the star pattern
        cout<<"*";
    }
    return 0;

    // end of code
}