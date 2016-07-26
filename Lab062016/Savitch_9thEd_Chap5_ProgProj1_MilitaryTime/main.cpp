/* 
 * File:   main.cpp
 * Author: Abel S. Esqueda
 * Created on July 15, 2016, 10:00 PM
 * Purpose: 
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
void input(int,int);
int conversion(int,int);
int output(int,int);


//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int hr,min,h;
    char ans;

    //Input Data
    cout<<"Welcome to the military time conversion program"<<endl;
    do{
        input(hr,min);
        
        cout<<conversion(hr,h)<<endl;
        cout<<"Convert Again?"<<endl;
        cout<<"Type y for yes or n for no"<<endl;
        cin>>ans;
               
    }while(ans=='y'||ans=='Y');
   
    //Process Data
    
    //Output the processed Data

    //Exit Stage Right!
    return 0;
}
void input(int h,int m){
    cout<<"Enter the hour(s)as digits : ";
    cin>>h;
    cout<<"Enter the minutes as digits : ";
    cin>>m;
}
int conversion(int hr,int h){
    if (hr>=12){
        h=hr-12;
        return h;
        
    }else{
        
    }
}

