#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    int i,count=0;

    cout<<"Enter your Sentence: ";
    getline(cin,s);
    
    cout<<endl;

    cout<<s<<endl;

     cout<<endl;
     
    for(i=0;s[i]!=NULL;i++)
    {
    if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
    count++;
    }
    cout<<"No of Vowels in this sentence are: "<<count;
    return 0;
}