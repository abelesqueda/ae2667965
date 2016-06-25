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
    int number_of_pods;
    int peas_per_pod;
    int total_peas;
   

    //Input Data
    cout<<"Enter the number of Pods:"<<endl;
    cin>>number_of_pods;                   //number of pods
    cout<<"Enter the number of Peas in a Pod:"<<endl;
    cin>>peas_per_pod;                     //number of peas in each pod
    
    //Process Data
    total_peas=number_of_pods*peas_per_pod;//Calculation, #of peas total
    
    //Output the processed Data
    cout<<"If you have "<<number_of_pods<<" pea pods."<<endl;
    cout<<"and "<<peas_per_pod<<" peas in each pod, then"<<endl;
    cout<<"you have "<<total_peas<<" peas in all the pods"<<endl;
    
    //Exit Stage Right!
    return 0;
}

