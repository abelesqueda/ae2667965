/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on June 27, 2016, 9:30 PM
 * Purpose:  BMR rhymes with candy bar
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
    //Declare Variables
    char mf;//Male-female calculation
    float lbs,inches,yrs;
    float BMR,chocBar=230.0f;
    int nBars;
    char actv;
    
    //Input Data
    cout<<"Candy bar calculation to maintain weight"<<endl;
    cout<<"Eat less than this to lose weight!"<<endl;
    cout<<"Input male or female with m or f"<<endl;
    cin>>mf;
    cout<<"Input weight(lbs), height(inches), age(yrs)"<<endl;
    cin>>lbs>>inches>>yrs;
    
    //Process the Data
    if(mf=='m'||mf=='M'){
        BMR=66+6.3*lbs+12.9*inches-6.8*yrs;
    }else{
        BMR=655+4.3*lbs+4.7*inches-4.7*yrs;
    }
    cout<<"How active are you? Choose a response A thru D."<<endl;
    cout<<"a. Sedentary"<<endl;
    cout<<"b. Somewhat active (exercise occasionally)."<<endl;
    cout<<"c. Active (exercise 3-4 days per week)."<<endl;
    cout<<"d. Highly active (exercise every day)."<<endl;
    cin>>actv;
    if(actv=='a'||actv=='A'){
        BMR=BMR*1.20;
    }else if(actv=='b'||actv=='B'){
        BMR=BMR*1.30;
    }else if(actv=='c'||actv=='C'){
        BMR=BMR*1.40;
    }else if(actv=='d'||actv=='D'){
        BMR=BMR*1.50;
    }else{
        cout<<"Wrong entry you're BMR will be lower than it is supposed to be"<<endl;
    }
    nBars=BMR/chocBar+1;
    
    //Output the processed Data
    cout<<"Eat less than "<<nBars<<" chocolate bars to lose weight"<<endl;
    
    //Exit Stage Right!
    return 0;
}