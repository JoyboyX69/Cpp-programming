/* QUESTION: Write a program in C++ to print a pattern just like That: 
11111
22222
33333
44444
55555
*/

QUESTION Same as 5 but different logic

// header file
#include<iostream>
using namespace std;

// main file
int main()
{
    // take a 4 variable first for input and 2 variable for loop and another is integer
    int n,i,j,a=1;

    // input your number
    cout<<"Enter a number: ";
    cin>>n;

    // fist loop is start
    for(i=1;i<=n;i++)
    {
        // print another line
        cout<<endl;

        // another loop is start print the a value and a will be increment
        for(j=n;j>=1;j--)
        {    cout<<a;
            a++;
    }

    }
    return 0;
    // end of code
}