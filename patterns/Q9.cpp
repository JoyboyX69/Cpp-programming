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

        for(j=1;j<=i;j++)
        {cout<<a;
        a++;
        }
 
    }
    return 0;
}