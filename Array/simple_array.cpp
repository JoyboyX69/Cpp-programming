#include<iostream>
using namespace std;
void even(int []);
void odd (int []);
void sum (int []);
int main()

{
    int a[10],i;

    for(i=0;i<10;i++)
    {
        cout<<"Enter YOur Array No. "<<i<<": ";
        cin>>a[i];
    }

    even(a);
    cout<<"\n";
    odd(a);
    cout<<"\n";
    sum(a);

    return 0;
}


void even(int no1[10])
{
    int i;

    cout<<"Even Number is:  ";
    for(i=0;i<10;i++)
    {
        if(no1[i]%2==0)
        cout<<no1[i]<<"\t";
    }
   
}

void odd(int no1[10])
{
    int i;

    cout<<"\nOdd Number is :  ";
    for(i=0;i<10;i++)
    {
        if(no1[i]%2!=0)
        cout<<no1[i]<<"\t";
    }
}

void sum(int no1[10])
{
    int i,s1=0;

    cout<<"sum of all numbers: ";

    for(i=0;i<10;i++)
    {
        s1=s1+no1[i];
    }
    cout<<s1;
}
