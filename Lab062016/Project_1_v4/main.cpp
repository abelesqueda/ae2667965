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
    //I set the char=1 because i was getting a random dash and this seemed to
    //fix the problem.
    char c1=1,c2=1,c3=1,c4=1,c5=1,c6=1,c7=1,c8=1,c9=1,c10=1,c11=1,c12=1,c13=1;
    char c14=1,c15=1,c16=1,c17=1,c18=1,c19=1,c20=1;
    int num;
    
    //Input Data
    cout<<"********************************************************************"<<endl;
    cout<<"********************************************************************"<<endl;
    cout<<endl;
    cout<<"Welcome to the Hangman Game"<<endl;
    cout<<endl;
    cout<<"********************************************************************"<<endl;
    cout<<"********************************************************************"<<endl;
    cout<<"Enter the amount of characters your word or words have including "
            <<"any spaces in between with a max character count of 20"<<endl;
    cin>>num;
    cout<<"Input the word or words that will be used for hangman"<<endl;
    cout<<"Enter uppercase letter only and and for spaces in between words"
            <<" use the _ symbol"<<endl;
    switch(num){
        case 1:cin>>c1;break;
        case 2:cin>>c1>>c2;break;
        case 3:cin>>c1>>c2>>c3;break;
        case 4:cin>>c1>>c2>>c3>>c4;break;
        case 5:cin>>c1>>c2>>c3>>c4>>c5;break;
        case 6:cin>>c1>>c2>>c3>>c4>>c5>>c6;break;
        case 7:cin>>c1>>c2>>c3>>c4>>c5>>c6>>c7;break;
        case 8:cin>>c1>>c2>>c3>>c4>>c5>>c6>>c7>>c8;break;
        case 9:cin>>c1>>c2>>c3>>c4>>c5>>c6>>c7>>c8>>c9;break;
        case 10:cin>>c1>>c2>>c3>>c4>>c5>>c6>>c7>>c8>>c9>>c10;break;
        case 11:cin>>c1>>c2>>c3>>c4>>c5>>c6>>c7>>c8>>c9>>c10>>c11;break;
        case 12:cin>>c1>>c2>>c3>>c4>>c5>>c6>>c7>>c8>>c9>>c10>>c11>>c12;break;
        case 13:cin>>c1>>c2>>c3>>c4>>c5>>c6>>c7>>c8>>c9>>c10>>c11>>c12>>c13;break;
        case 14:cin>>c1>>c2>>c3>>c4>>c5>>c6>>c7>>c8>>c9>>c10>>c11>>c12>>c13>>c14;break;
        case 15:cin>>c1>>c2>>c3>>c4>>c5>>c6>>c7>>c8>>c9>>c10>>c11>>c12>>c13>>c14>>c15;break;
        case 16:cin>>c1>>c2>>c3>>c4>>c5>>c6>>c7>>c8>>c9>>c10>>c11>>c12>>c13>>c14>>c15>>c16;break;
        case 17:cin>>c1>>c2>>c3>>c4>>c5>>c6>>c7>>c8>>c9>>c10>>c11>>c12>>c13>>c14>>c15>>c16>>c17;break;
        case 18:cin>>c1>>c2>>c3>>c4>>c5>>c6>>c7>>c8>>c9>>c10>>c11>>c12>>c13>>c14>>c15>>c16>>c17>>c18;break;
        case 19:cin>>c1>>c2>>c3>>c4>>c5>>c6>>c7>>c8>>c9>>c10>>c11>>c12>>c13>>c14>>c15>>c16>>c17>>c18>>c19;break;
        case 20:cin>>c1>>c2>>c3>>c4>>c5>>c6>>c7>>c8>>c9>>c10>>c11>>c12>>c13>>c14>>c15>>c16>>c17>>c18>>c19>>c20;break;
    }
   
   
    //Process Data
    if((c1>=65&&c1<=90)||(c1>=97&&c1<=122)){
        cout<<"_ ";
    }else{
        cout<<"  ";
    }if((c2>=65&&c2<=90)||(c2>=97&&c2<=122)){
        cout<<"_ ";
    }else{
        cout<<"  ";
    }if((c3>=65&&c3<=90)||(c3>=97&&c3<=122)){
        cout<<"_ ";
    }else{
        cout<<"  ";
    }if((c4>=65&&c4<=90)||(c4>=97&&c4<=122)){
        cout<<"_ ";
    }else{
        cout<<"  ";
    }if((c5>=65&&c5<=90)||(c5>=97&&c5<=122)){
        cout<<"_ ";
    }else{
        cout<<"  ";
    }if((c6>=65&&c6<=90)||(c6>=97&&c6<=122)){
        cout<<"_ ";
    }else{
        cout<<"  ";
    }if((c7>=65&&c7<=90)||(c7>=97&&c7<=122)){
        cout<<"_ ";
    }else{
        cout<<"  ";
    }if((c8>=65&&c8<=90)||(c8>=97&&c8<=122)){
        cout<<"_ ";
    }else{
        cout<<"  ";
    }if((c9>=65&&c9<=90)||(c9>=97&&c9<=122)){
        cout<<"_ ";
    }else{
        cout<<"  ";
    }if((c10>=65&&c10<=90)||(c10>=97&&c10<=122)){
        cout<<"_ ";
    }else{
        cout<<"  ";
    }if((c11>=65&&c11<=90)||(c11>=97&&c11<=122)){
        cout<<"_ ";
    }else{
        cout<<"  ";
    }if((c12>=65&&c12<=90)||(c12>=97&&c12<=122)){
        cout<<"_ ";
    }else{
        cout<<"  ";
    }if((c13>=65&&c13<=90)||(c13>=97&&c13<=122)){
        cout<<"_ ";
    }else{
        cout<<"  ";
    }if((c14>=65&&c14<=90)||(c14>=97&&c14<=122)){
        cout<<"_ ";
    }else{
        cout<<"  ";
    }if((c15>=65&&c15<=90)||(c15>=97&&c15<=122)){
        cout<<"_ ";
    }else{
        cout<<"  ";
    }if((c16>=65&&c16<=90)||(c16>=97&&c16<=122)){
        cout<<"_ ";
    }else{
        cout<<"  ";
    }if((c17>=65&&c17<=90)||(c17>=97&&c17<=122)){
        cout<<"_ ";
    }else{
        cout<<"  ";
    }if((c18>=65&&c18<=90)||(c18>=97&&c18<=122)){
        cout<<"_ ";
    }else{
        cout<<"  ";
    }if((c19>=65&&c19<=90)||(c19>=97&&c19<=122)){
        cout<<"_ ";
    }else{
        cout<<"  ";
    }if((c20>=65&&c20<=90)||(c20>=97&&c20<=122)){
        cout<<"_ ";
    }else{
        cout<<"  ";
    }
    
    //Output the processed Data

    //Exit Stage Right!
    return 0;
}

