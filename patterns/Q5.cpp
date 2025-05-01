/* QUESTION: Write a program in C++ to print a pattern just like That: 
123
456
789
*/

// header file
#include<iostream>
using namespace std;

// main file
int main()
{
     // take a variable for input and next two variable for loops with extra variable a=1
    int n,i,j,a=1;

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
        {
            // print the pattern a is increment by 1.
            cout<<a;
            a++;
        }
    }
    return 0;
    // end of program
}