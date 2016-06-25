/* 
 * File:   main.cpp
 * Author: Abel S. Esqueda
 * Created on June 20, 2016, 6:51 PM
 * Purpose: Template
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int a;
    int b;
    int sum;
    int prodct;

    //Input Data
    cout<<"Input the first integer"<<endl;
    cin>>a;
    cout<<"Input the second integer"<<endl;
    cin>>b;
    
    //Process Data
    sum=a+b;
    prodct=a*b;
    
    //Output the processed Data
    cout<<"The Sum of these 2 integers is "<<sum<<endl;
    cout<<""<<endl;
    cout<<"The Product of these 2 intgers is "<<prodct<<endl;
    
    //Exit Stage Right!
    return 0;
}

