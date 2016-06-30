/* 
 * File:   main.cpp
 * Author: Abel S. Esqueda
 * Created on June 27, 2016, 9:30 PM
 * Purpose: BMR rhymes with candy bar
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
    char mf;//Male-Female calculation
    float BMR,chocBar=230.0f;
    float lbs,inches,yrs;
    int nBars;
    
    //Input Data
    cout<<"Candy Bar calculation to maintain weight"<<endl;
    cout<<"Eat less than this to lose weight!"<<endl;
    cout<<"Input male or female with m or f"<<endl;
    cin>>mf;
    cout<<"Input weight(lbs), height(inches), age(yrs)"<<endl;
    cin>>lbs>>inches>>yrs;
    
    //Process Data
    //If else statement because different equation for different sex
    if(mf=='m'||mf=='M'){
        BMR=66+6.3*lbs+12.9*inches-6.8*yrs;//BMR equation for male
    }else{
        BMR=655+4.3*lbs+4.7*inches-4.7*yrs;//BMR equation for female
    }    
    nBars=BMR/chocBar+1;
    //Output the processed Data
    cout<<"Eat less than "<<nBars<<" chocolate bars to lose weight"<<endl;

    //Exit Stage Right!
    return 0;
}

