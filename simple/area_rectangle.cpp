// QUESTION 2: WRITE AN PROGRAM TO PRINT AND FIND OUT THE 
// AREA AND PARIMETER OF A RECTANGLE

// intialize the header file
#include<iostream>
using namespace std;

// main file
int main()
{
    // Take a data type integer & L for length of a Rectangle & B for breath of a Rectangle.
    int l,b;    

    // This is simple line to pring what we find?

    cout<<"Find the area & parimeter of a rectangle"<<endl;
        
    // Take a input length of a rectngle.
    cout<<"enter the length of a rectangle: ";
        cin>>l;

    //Take a input breath of a rectangle. 
    cout<<"enter the length of a rectangle: ";
        cin>>l;

    //Print the Area & parimeter of a rectangle.
    cout<<"Area of a Rectangle:  "<<l*b;
    cout<<"Area of a Rectangle:  "<<2*(l+b);

}