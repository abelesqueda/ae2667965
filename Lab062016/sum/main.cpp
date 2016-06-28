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
    int x;
    int sumAll=0,sumEven=0,sumOdd=0,sumPos=0,sumNeg=0;
    
    //Input Data
    cout<<"Input an integer"<<endl;
    cin>>x;

    //Process Data
    sumAll+x;
    if(x%2==0)sumEven+=x;
    else      sumOdd +=x;
    sumPos += x>0? x: 0;
    if(x<0)   sumNeg +=x;
    
    //Input Data
    cout<<"Input an integer"<<endl;
    cin>>x;

    //Process Data
    sumAll+x;
    if(x%2==0)sumEven+=x;
    else      sumOdd +=x;
    sumPos += x>0? x: 0;
    if(x<0)   sumNeg +=x;
    
    //Input Data
    cout<<"Input an integer"<<endl;
    cin>>x;

    //Process Data
    sumAll+x;
    if(x%2==0)sumEven+=x;
    else      sumOdd +=x;
    sumPos += x>0? x: 0;
    if(x<0)   sumNeg +=x;
    
    //Input Data
    cout<<"Input an integer"<<endl;
    cin>>x;

    //Process Data
    sumAll+x;
    if(x%2==0)sumEven+=x;
    else      sumOdd +=x;
    sumPos += x>0? x: 0;
    if(x<0)   sumNeg +=x;
    
    //Input Data
    cout<<"Input an integer"<<endl;
    cin>>x;

    //Process Data
    sumAll+x;
    if(x%2==0)sumEven+=x;
    else      sumOdd +=x;
    sumPos += x>0? x: 0;
    if(x<0)   sumNeg +=x;

    //Output the processed Data
    
    
    //Exit Stage Right!
    return 0;
}

