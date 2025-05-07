// QUESTION: Write a program in C++ to find out the number is palindrome or not

// header FILE
#include<iostream>
using namespace std;

// main file
int main()
{
  /**/  take 4 variable to first for number input,second for temp variable,res reverse the value
    and fourth for store the reverse value*/
    int n,temp,res,reverse;

    // input your value
    cout<<"Enter your number: ";
    cin>>in;

    // start a while loop for reverse the number
    while(n!=0)
    {
        // this are the condition helps to reverse the number
        res=n%10;
        reverse=reverse*10+res;
        n/=10;
    }
    // if reverse are same as temp then print palindrome number
    if(reverse==temp)
    cout<<"This is a palindrome number";

    // if not same then print not a palindrome number
    else 
    cout<<"This is not a palindrome number;"

    return 0;
    // end of code
}