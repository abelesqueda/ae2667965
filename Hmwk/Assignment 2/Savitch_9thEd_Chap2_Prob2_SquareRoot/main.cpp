/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on June 29, 2016, 8:06 PM
 * Purpose:  Template
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cmath>     //Math Library
#include <iomanip>   //Formatting
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float n,guess,r;
    
    //Input Data
    cout<<"Program to calculate the square root"<<endl;
    cout<<"Input a number to see the repetitive approximation of the";
    cout<<" square root"<<endl;
    cin>>n;
    
    //Process the Data - first pass
    guess=n/2;
    r=n/guess;
    guess=(guess+r)/2;
    
    //Output the processed Data
    cout<<fixed<<setprecision(4)<<showpoint;
    cout<<"r="<<setw(10)<<r<<" guess="<<setw(10)<<guess<<"      sqrt("<<n<<")=";
    cout<<setw(10)<<sqrt(n)<<endl;
    
    //Process the Data - second pass
    r=n/guess;
    guess=(guess+r)/2;
    
    //Output the processed Data
    cout<<fixed<<setprecision(4)<<showpoint;
    cout<<"r="<<setw(10)<<r<<" guess="<<setw(10)<<guess<<"      sqrt("<<n<<")=";
    cout<<setw(10)<<sqrt(n)<<endl;
    
    //Process the Data - third pass
    r=n/guess;
    guess=(guess+r)/2;
    
    //Output the processed Data
    cout<<fixed<<setprecision(4)<<showpoint;
    cout<<"r="<<setw(10)<<r<<" guess="<<setw(10)<<guess<<"      sqrt("<<n<<")=";
    cout<<setw(10)<<sqrt(n)<<endl;
    
    //Process the Data - fourth pass
    r=n/guess;
    guess=(guess+r)/2;
    
    //Output the processed Data
    cout<<fixed<<setprecision(4)<<showpoint;
    cout<<"r="<<setw(10)<<r<<" guess="<<setw(10)<<guess<<"      sqrt("<<n<<")=";
    cout<<setw(10)<<sqrt(n)<<endl;
    
    //Process the Data - fifth pass
    r=n/guess;
    guess=(guess+r)/2;
    
    //Output the processed Data
    cout<<fixed<<setprecision(4)<<showpoint;
    cout<<"r="<<setw(10)<<r<<" guess="<<setw(10)<<guess<<"      sqrt("<<n<<")=";
    cout<<setw(10)<<sqrt(n)<<endl;
    
    //Exit Stage Right!
    return 0;
}