#include<iostream>
using namespace std;

int main()
{
    int n,i,j,s;

    cout<<"Enter a number: ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        cout<<endl;

        for(s=n-1;s>=i;s--)
        cout<<" ";

    for(j=1;j<=i;j++)
    cout<<"*";
    }
    return 0;
}