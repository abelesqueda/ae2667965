/* 
 * File:   main.cpp
 * Author: Abel S. Esqueda
 * Created on July 15, 2016, 10:00 PM
 * Purpose: Project #1
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <iomanip>  //Manipulation Library
#include <cmath>    //Math Library
#include <string>   //String Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    char c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13,c14,c15,c16,c17,c18,c19,c20;
    
    //Input Data
    cout<<"********************************************************************"<<endl;
    cout<<"********************************************************************"<<endl;
    cout<<endl;
    cout<<"Welcome to the Hangman Game"<<endl;
    cout<<endl;
    cout<<"********************************************************************"<<endl;
    cout<<"********************************************************************"<<endl;
    cout<<"Input the word that will be used for hangman"<<endl;
    cout<<"Enter uppercase letter only"<<endl;
    cin>>c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,13,c14,c15,c16,c17,c18,c19,c20;
   
    //Process Data
    if(c1>=65&&c1<=90){
        cout<<'_';
    }else if(c2>=65&&c2<=90){
        cout<<'_';
    }else if(c3>=65&&c3<=90)
        cout<<'_'; 
    else if(c4>=65&&c5<=90)
        cout<<"_";
    else if(c6>=65&&c6<=90)
        cout<<"_";
    else if(c7>=65&&c7<=90)
        cout<<"_";
    if(c8>=65&&c8<=90)
        cout<<"_";
    if(c9>=65&&c9<=90)
        cout<<"_";
    if(c10>=65&&c10<=90)
        cout<<"_";
    if(c11>=65&&c11<=90)
        cout<<"_";
    if(c12>=65&&c12<=90)
        cout<<"_";
    if(c13>=65&&c13<=90)
        cout<<"_";
    if(c14>=65&&c14<=90)
        cout<<"_";
    if(c15>=65&&c15<=90)
        cout<<"_";
    if(c16>=65&&c16<=90)
        cout<<"_";
    if(c17>=65&&c17<=90)
        cout<<"_";
    if(c18>=65&&c18<=90)
        cout<<"_";
    if(c19>=65&&c19<=90)
        cout<<"_";
    if(c20>=65&&c20<=90)
        cout<<"_";
    else
        cout<<" ";
    
    //Output the processed Data

    //Exit Stage Right!
    return 0;
}

