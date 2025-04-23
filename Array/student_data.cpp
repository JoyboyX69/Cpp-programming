#include<iostream>
using namespace std;

int main()
{
    
    int total[5],percentage[5];
    int rollno[5],m1[5],m2[5],m3[5];

     int i;

     for(i=0;i<=4;i++)
     {
        cout<<"Enter your roll no:";
        cin>>rollno[i];
        cout<<"Enter the 3 Subject of Marks:";
        cin>>m1[i]>>m2[i]>>m3[i];
        total[i]=m1[i]+m2[i]+m3[i];
        percentage[i]=total[i]*100/300;

     }
     cout<<"\nRoll no\tEnglish\tHIndi\tMaths\tTotal\tPercentage\n";
     for(i=0;i<=4;i++)
     {
        cout<<rollno[i]<<"\t";
        cout<<m1[i]<<"\t";
        cout<<m2[i]<<"\t";
        cout<<m3[i]<<"\t";
        cout<<total[i]<<"\t";
        cout<<percentage[i]<<endl;
    

     }       
}