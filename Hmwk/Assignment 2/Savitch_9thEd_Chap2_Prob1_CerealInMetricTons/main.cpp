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
    float MetTon=35273.92;
    float CerWt;
    float WtTons;
    int NmbrBox;
    
    

    //Input Data
    cout<<"Input the weight of the cereal box in Ounces."<<endl;
    cin>>CerWt;

    //Process Data
    WtTons=CerWt/MetTon;  //Weight of cereal in metric tons
    NmbrBox=MetTon/CerWt; //Number of cereal boxes to make a metric ton
    
    //Output the processed Data
    cout<<"The weight of this box of cereal in metric tons is "<<WtTons;
    cout<<" Metric Tons"<<endl;
    cout<<"It would take "<<NmbrBox;
    cout<<" boxes to make a metric ton of cereal."<<endl;

    //Exit Stage Right!
    return 0;
}

