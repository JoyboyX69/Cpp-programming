// QUESTION : SHow the data of a student in a table form and give me subject marks and total marks
// and percentage as well with the help of array.

// header file
#include<iostream>
using namespace std;

// main file
int main()
{
    // Take a array in all the variable to perform there task.
    int total[5],percentage[5];
    int rollno[5],m1[5],m2[5],m3[5];

    // this variable initialize for loop.
     int i;

    //  In ths loop ,collect the all data from user such as(roll no,3 subject of marks,total marks & percentage)
     for(i=0;i<=4;i++)
     {
        cout<<"Enter your roll no:";
        cin>>rollno[i];
        cout<<"Enter the 3 Subject of Marks:";
        cin>>m1[i]>>m2[i]>>m3[i];
        total[i]=m1[i]+m2[i]+m3[i];
        percentage[i]=total[i]*100/300;

     }
    //  This is to print in a table form
     cout<<"\nRoll no\tEnglish\tHIndi\tMaths\tTotal\tPercentage\n";

    //  This loops helps to show the output the values you enter.
     for(i=0;i<=4;i++)
     {
        cout<<rollno[i]<<"\t";
        cout<<m1[i]<<"\t";
        cout<<m2[i]<<"\t";
        cout<<m3[i]<<"\t";
        cout<<total[i]<<"\t";
        cout<<percentage[i]<<endl;
    
        // end the code.
     }       
}