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
    float msMass=35;
    float msKill=5;
    float hmMass=45400;
    float msSoda=350;
    float consin=1e-3;
    int nCans;
    
    //Input Data
    
    //Process Data
    nCans=hmMass*msKill/(msMass*msSoda*consin);
    
    //Output the processed Data
    cout<<"The number of cans that a dieter with mass = ";
    cout<<hmMass<<"(grams) may consume is = "<<nCans<<"(cans)";
    cout<<endl;
    
    //Exit Stage Right!
    return 0;
}

