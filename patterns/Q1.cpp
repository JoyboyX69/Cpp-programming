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

int main()
{
    int n,i,j;

    cout<<"Enter a number: ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        cout<<endl;

        for(j=1;j<=n;j++)
        
        cout<<"*";
    }
    return 0;
}


