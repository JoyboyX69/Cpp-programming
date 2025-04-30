// QUESTION : Write a programm in C++ to make recursion function to print Factorial number as your requirement

// header file
#include<iostream>
using namespace std;

// function Declaration
int Factorial(int);

// main file
int main()
{
    // take a variable for input calls 
    int n1,n2,n3;

        // input there value in a form of integer
        cout<<"Enter three Number:";cd
        cin>>n1>>n2>>n3;
        
      
        // print and call the function Factorial
        cout<<"Factorial value of "<<n1<<" is "<<Factorial(n1);
         cout<<"\nFactorial value of "<<n2<<" is "<<Factorial(n2);
          cout<<"\nFactorial value of "<<n3<<" is "<<Factorial(n3);
        return 0;
}

int Factorial(int n)
{
    int i,b=1;
      for(i=1;i<=n;i++)
        {
          b*=i;
        }
        return b;
}