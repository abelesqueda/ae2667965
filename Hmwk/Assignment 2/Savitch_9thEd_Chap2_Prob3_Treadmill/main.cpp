/* 
 * File:   main.cpp
 * Author: Abel S. Esqueda
 * Created on June 20, 2016, 6:51 PM
 * Purpose: Template
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Manipulation library
#include <cmath>     //Math Library
#include <string>    //String Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variable
    float Mph;
    int TimeMin;
    float TimeSec;
    
    //Input Data
    cout<<"Input the Mph speed from the treadmill."<<endl;
    cin>>Mph;
    
    //Process Data
    TimeMin=1/(Mph/60);
    TimeSec=(1/(Mph/60)-TimeMin)*60;
    
    
    
    //Output the processed Data
    cout<<fixed<<setprecision(1)<<showpoint;
    cout<<TimeMin<<" minutes and "<<TimeSec<<" seconds per mile."<<endl;

    //Exit Stage Right!
    return 0;
}

