/* 
 * File:   main.cpp
 * Author: Abel S. Esqueda
 * Created on June 20, 2016, 6:51 PM
 * Purpose: Template
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <iomanip>
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float pv;
    int iRate;
    int nYears;
    
    //Input Data
    cout<<"Input the present value in $'s, interest rate in %, number of ";
    cout<<"Years in (yrs"<<endl;
    cin>>pv>>iRate>>nYears;
    
    //Process Data
    iRate/=100.0f;//convert to decimal
    
    //Output the processed Data

    //Exit Stage Right!
    return 0;
}

