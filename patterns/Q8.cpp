/*QUESTION : Write a program in c++ to print this pattern
1
22
333
4444
55555
*/

// header file
#include<iostream>
using namespace std;

// main file
int main()
{
    // take a 3 variable, first is input and another 2 for loops to print the pattern
    int n,i,j;

    // input your value
    cout<<"Enter a number: ";
    cin>>n;

    // first loop is start
    for(i=1;i<=n;i++)
    {
        // print the next line
        cout<<endl;

        // second loop is start
        for(j=1;j<=i;j++)
        {
            // print the iteration of first loop (i).
            cout<<i;
        }
    }
    return 0;
    // end of code
}