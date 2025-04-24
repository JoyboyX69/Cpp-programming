/*QUESTION : WRITE A PROGRAM IN C++ TO PRINT  IF SALARY IS LESS THAN 20,000 THAN PRINT 
& IF SALARY IS LESS THAN 40,000 THAN PRINT SOFTWARE ENGINEER & IF SALARY IS LESS THAN 60,000
THEN PRINT SENIOR SOFTWARE ENGINEER AND MORE THAN THIS SALARY THAN PRINT GROUP LEADER
*/ 

// header file
#include<iostream>
using namespace std;

// main file
int main()
{
    // create a variable for input salary
    int salary;

    cout<<"Enter your salary: ";
    cin>>salary;

    // in this condition salary is not greater than 20,000
    if(salary<=20000)
    cout<<"Fourth Class Worker";

    else if(salary<=40000)
    cout<<"Software Enginner";

    else if(salary<=60000)
    cout<<"Senior Software Enginner";

    else
    cout<<"Group Leader";
}