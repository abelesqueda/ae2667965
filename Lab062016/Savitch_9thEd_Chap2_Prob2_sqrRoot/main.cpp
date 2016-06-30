/* 
 * File:   main.cpp
 * Author: Abel S. Esqueda
 * Created on June 29, 2016, 8:06 PM
 * Purpose: Square Root
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <iomanip>
#include <cmath>    //Math Library
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
    cout<<" of the square root"<<endl;
    cin>>n;
    
    //Process Data - First Pass
    guess=n/2;
    r=n/guess;
    guess=(guess+r)/2;
    
    
    //Output the processed Data
    cout<<fixed<<setprecision(4)<<showpoint;
    cout<<"r="<<setw(10)<<r<<" guess="<<setw(10)<<guess<<"     sqrt("<<n<<")=";
    cout<<setw(10)<<sqrt(n)<<endl;

     //Process Data - Second Pass
    r=n/guess;
    guess=(guess+r)/2;
    
    
    //Output the processed Data
    cout<<fixed<<setprecision(4)<<showpoint;
    cout<<"r="<<setw(10)<<r<<" guess="<<setw(10)<<guess<<"     sqrt("<<n<<")=";
    cout<<setw(10)<<sqrt(n)<<endl;
    
    //Process Data - Third Pass
    r=n/guess;
    guess=(guess+r)/2;
    
    
    //Output the processed Data
    cout<<fixed<<setprecision(4)<<showpoint;
    cout<<"r="<<setw(10)<<r<<" guess="<<setw(10)<<guess<<"     sqrt("<<n<<")=";
    cout<<setw(10)<<sqrt(n)<<endl;

    //Process Data - Fourth Pass
    r=n/guess;
    guess=(guess+r)/2;
    
    
    //Output the processed Data
    cout<<fixed<<setprecision(4)<<showpoint;
    cout<<"r="<<setw(10)<<r<<" guess="<<setw(10)<<guess<<"     sqrt("<<n<<")=";
    cout<<setw(10)<<sqrt(n)<<endl;

    //Process Data - Fifth Pass
    r=n/guess;
    guess=(guess+r)/2;
    
    
    //Output the processed Data
    cout<<fixed<<setprecision(4)<<showpoint;
    cout<<"r="<<setw(10)<<r<<" guess="<<setw(10)<<guess<<"     sqrt("<<n<<")=";
    cout<<setw(10)<<sqrt(n)<<endl;



    //Exit Stage Right!
    return 0;
}

