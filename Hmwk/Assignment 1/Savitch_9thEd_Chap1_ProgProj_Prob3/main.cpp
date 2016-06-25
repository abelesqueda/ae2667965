/* 
 * File:   main.cpp
 * Author: Abel S. Esqueda
 * Created on June 20, 2016, 6:51 PM
 * Purpose: Template
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int qrtr;
    int dime;
    int nckel;
    int Total_Cents;

    //Input Data
    cout<<"Enter amount of Quarters"<<endl;
    cin>>qrtr;
    cout<<"Enter amount of Dimes"<<endl;
    cin>>dime;
    cout<<"Enter amount of Nickels"<<endl;
    cin>>nckel;
    
    //Process Data
    Total_Cents=(qrtr*25)+(dime*10)+(nckel*5);
    
    //Output the processed Data
    cout<<"The coins are worth \n";
            cout<<Total_Cents<<" cents"<<endl;
    
    //Exit Stage Right!
    return 0;
}

