/* 
 * File:   main.cpp
 * Author: Abel S. Esqueda
 * Created on June 20, 2016, 6:51 PM
 * Purpose: Template
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
    float apprxEx=1,term=1,tol=1e-6f,x;
    
    //Input Data
    cout<<"This program calculates the factorial"<<endl;
    cout<<"Input the x which will then output e^x!"<<endl;
    cin>>x;
   
    //Process Data
    for(int n=1;term>tol;n++){
        term*=x/n;
        apprxEx+=term;
    }
    
    //Output the processed Data
    cout<<"Exact       e^"<<x<<"="<<exp(x)<<endl;
    cout<<"Approximate e^"<<x<<"="<<apprxEx<<endl;
    //Exit Stage Right!
    return 0;
}

