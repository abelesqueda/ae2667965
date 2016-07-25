/* 
 * File:   main.cpp
 * Author: Abel S. Esqueda
 * Created on July 15, 2016, 10:00 PM
 * Purpose: Markup
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <iomanip>  //Manipulation Library
#include <cmath>    //Math Library
#include <string>   //String Library
#include <ctime>
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
float calculateRetail(float,float);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float cost;
    float Mperc;
   
    //Input Data
    cout<<"Input the wholesale cost of the item including cents."<<endl;
    cout<<"$";cin>>cost;
    cout<<"Input the Markup percentage of the item."<<endl;
    cout<<"%";cin>>Mperc;
    while(cost<=0||Mperc<0){
        cout<<"Please enter a positive number for wholesale cost and markup percentage"<<endl;
        cout<<"$";cin>>cost;
        cout<<"Enter the markup percentage"<<endl;
        cout<<"%";cin>>Mperc;
    }
   
    //Process Data
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The item's retail price = $"<<calculateRetail(cost,Mperc)<<endl;
    
    //Output the processed Data

    //Exit Stage Right!
    return 0;
}
float calculateRetail(float c,float p){
    c=c+c*(p/100);
    return c;
}

