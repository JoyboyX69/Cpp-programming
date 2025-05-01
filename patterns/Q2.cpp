/* QUESTION: Write a program in C++ to print a pattern just like That: 
11111
22222
33333
44444
55555
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

    // first loop will start 
    for(i=1;i<=n;i++)
    {
        // print the next line until loop is complete
        cout<<endl;

        // second loop will start for print the number
        for(j=1;j<=n;j++)
        
        // print the pattern
        cout<<i;
    }
    return 0;
    // end of program
}







