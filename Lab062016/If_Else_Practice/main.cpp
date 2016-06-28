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
    float hrsWrkd=50;
    float payRate=10;
    char  ovrTime=40;
    float payChck;
    
    //Input Data
    
    //Process Data
    if(hrsWrkd<ovrTime){
        payChck=hrsWrkd*payRate;    
    }else{
        payChck=hrsWrkd*payRate+(hrsWrkd-ovrTime)*payRate*0.5;
    }
    
    //Output the processed Data
    cout<<"Hours Worked= "<<hrsWrkd<<"(hrs)"<<endl;
    cout<<"Pay Rate = $"<<payRate<<"/hr"<<endl;
    cout<<"Overtime starts at "<<static_cast<int>(ovrTime)<<" hrs"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Paycheck = $"<<payChck<<endl;
    
    //Exit Stage Right!
    return 0;
}

