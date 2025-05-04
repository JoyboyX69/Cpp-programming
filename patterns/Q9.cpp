/*QUESTION: Write a program in c++ to print the same pattern
1
23
456
78910
*/

// header file
#include<iostream>
using namespace std;

// main file
int main()
{
    // take 4 variable,first is input and 2 for loops and one for increment the value
    int n,i,j,a=1;

    // input your number
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
            // print the a variable to print the same pattern
            cout<<a;
            a++;
        }
 
    }
    return 0;
    // end of code
}