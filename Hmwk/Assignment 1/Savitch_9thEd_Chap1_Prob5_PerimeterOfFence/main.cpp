/* 
 * File:   main.cpp
 * Author: Abel S. Esqueda
 * Created on June 24, 2016, 9:51 PM
 * Purpose: Calulating Perimeter
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
    int width;
    int length;
    int perimtr;

    //Input Data
    cout<<"Input the width of the area that is being enclosed in ft"<<endl;
    cin>>width;
    cout<<"Input the length of the area that is being enclosed in ft"<<endl;
    cin>>length;
    
    //Process Data
    perimtr=(2*width)+(2*length);
    
    //Output the processed Data
    cout<<"The total length of fence needed to enclose this area is "
            <<perimtr<<" ft"<<endl;
         
    
    //Exit Stage Right!
    return 0;
}

