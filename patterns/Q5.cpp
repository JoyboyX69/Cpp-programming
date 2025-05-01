/* QUESTION: Write a program in C++ to print a pattern just like That: 
11111
22222
33333
44444
55555
*/




#include<iostream>
using namespace std;

int main()
{
    int n,i,j,a=1;

    cout<<"Enter a number: ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        cout<<endl;

        for(j=1;j<=n;j++)
        {
            cout<<a;
            a++;
        }
    }
    return 0;
}