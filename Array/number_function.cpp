/*QUESTION: Write a program in c++ with the help of functions and array to find out the greatest,lowest and sorting 
in an array*/

// header file
#include<iostream>
using namespace std;

// Declaration function
void greatest(int []);
void lowest(int []);
void sorting(int []);

// main file
int main()
{
    // take an array with 10 size and i for loops
    int a[10],i;

    // this loop helps to input the digit as per the size 
    for(i=0;i<10;i++)
    {
        cout<<"Enter Your Array No "<<i<<" :";
        cin>>a[i];
    }

    // function call
    greatest(a);
    lowest(a);
    sorting(a);

}

// this function helps to find out greatest number in an array
void greatest(int no[10])
{
    // take gr variable to find out the greatest

    int i,gr=0;

    // this loops check one by one then store the variable which one is greatest
    for(i=0;i<10;i++)
    {
        // this condition helps to find the greatest number
        if(no[i]>gr)
        // this is store the greatest number
        gr=no[i];

    }
    // print the greatest number 
    cout<<"Greteast No.: "<<gr;
    }

void lowest(int no[10])
{
        int i,low=no[0];

        for(i=0;i<10;i++)
        {
            if(no[i]<low)
            low=no[i];
        }
        cout<<"\nLowest No in an array: "<<low;
}

void sorting(int no[10])
{
    int i,j;
    int temp=0;

    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if(no[i]<no[j])
          {  temp=no[i];
            no[i]=no[j];
            no[j]=temp;
        }
    }
    }

cout<<"\nSorting:";
    for(i=0;i<10;i++)
    {
        
        cout<<no[i]<<"\t";
    }
}