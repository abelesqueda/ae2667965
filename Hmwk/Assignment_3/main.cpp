/* 
 * File:   main.cpp
 * Author: Abel S. Esqueda
 * Created on June 20, 2016, 6:51 PM
 * Purpose: Template
 */

//System Libraries

#include <iostream>  //Input/Output Library
#include <iomanip>   //Manipulation library
#include <cmath>     //Math Library
#include <string>    //String Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants
const float PI=4*atan(1);
const float y=62.4;

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variable
    char choice;

    //Input Data
    cout<<"Pick which program to run!"<<endl;
    cout<<"Program A: Savitch_9thEd_Chap3_Prob1_RockPaperScissors"<<endl;
    cout<<"Program B: Savitch_9thEd_Chap3_Prob6_Bouyancy"<<endl;
    cout<<"Program C: Savitch_9thEd_Chap3_ProgProj8_PIvalue"<<endl;
    cout<<"Program D: Savitch_9thEd_Chap3_ProgProj10_BMRrevised"<<endl;
    cout<<"Program E: Gaddis_8thEd_Chap4_Prob3_MagicDates"<<endl;
    cout<<"Program F: Gaddis_8thEd_Chap4_Prob4_AreaofRectangle"<<endl;
    cout<<"Program G: Gaddis_8thEd_Chap4_Prob6_MassWeight"<<endl;
    cout<<"Program H: Gaddis_8thEd_Chap4_Prob7_TimeCalulator"<<endl;
    cout<<"Program I: Gaddis_8thEd_Chap4_Prob8_ColorMixer"<<endl;
    cout<<"Program J: Savitch_9thEd_Chap3_Prob4_BlackJackHandValue"<<endl;
    cout<<"Input the letter of the program to run that program."<<endl;
    cin>>choice;
    cout<<endl;

    //Process Data
    switch (choice){
        case 'A':{
            //Declare Variables
            char Pone,Ptwo;
            
            //Input Data
            cout<<"Rock Paper Scissors Game!"<<endl;
            cout<<"Enter P for Paper, R for Rock, S for Scissors."<<endl;
            cout<<"Player 1 enter your choice first than player 2."<<endl;
            cin>>Pone;
            cin>>Ptwo;
            
            //Process and Output data
            if (((Pone=='P'||Pone=='p')&&(Ptwo=='R'||Ptwo=='r'))||
                ((Pone=='R'||Pone=='r')&&(Ptwo=='P'||Ptwo=='p'))){
                cout<<"Paper covers Rock! Paper wins."<<endl;
   
            }else if (((Pone=='P'||Pone=='p')&&(Ptwo=='S'||Ptwo=='s'))||
                ((Pone=='S'||Pone=='s')&&(Ptwo=='P'||Ptwo=='p'))){
                cout<<"Scissors cuts Paper! Scissors win."<<endl;
                
            }else if (((Pone=='S'||Pone=='s')&&(Ptwo=='R'||Ptwo=='r'))||
                ((Pone=='R'||Pone=='r')&&(Ptwo=='S'||Ptwo=='s'))){
                cout<<"Rock breaks scissors! Rock wins."<<endl;
                
            }else if (((Pone=='P'||Pone=='p')&&(Ptwo=='P'||Ptwo=='p'))||
                ((Pone=='R'||Pone=='r')&&(Ptwo=='R'||Ptwo=='r'))||
                ((Pone=='s'||Pone=='S')&&(Ptwo=='S'||Ptwo=='s'))){
                cout<<"Tie! Nobody wins."<<endl;
            }else{
                cout<<"Wrong entry try again."<<endl;
            }
            break;
        }
        case 'B':{
            //Declare Variable
            float wgt;
            float rad;
            float vol;
            float fb;

            //Input Data
            cout<<"Bouyancy Program!"<<endl;
            cout<<"Input the weight of sphere and the radius in that order"<<endl;
            cout<<"Weight of Sphere in lbs= ";cin>>wgt;
            cout<<"Radius of Sphere in ft= ";cin>>rad;

            //Process Data
            vol=(4/3)*PI*(rad*rad*rad);
            fb=vol*y;
    
            //Output the processed Data
            cout<<"The equation for bouyancy is Fb=V*y"<<endl;
            cout<<"Volume is "<<vol<<" feet cubed."<<endl;
            cout<<"Specific Density of water is "<<y<<" lbs per feet cubed."<<endl;
            cout<<"Bouyancy force is "<<fb<<" lbs."<<endl;
            cout<<endl;
            if (fb>=wgt){
                cout<<"This object WILL float."<<endl;
            }else{
                cout<<"This objet WILL NOT float."<<endl;
            }
            break;
        }
        case 'C':{
            //Declare Variable
            int n;
            float PI;
            float answer;

            //Input Data
            cout<<"Approximation of PI Program"<<endl;
            cout<<"Enter the number of iterations or terms for approximation"<<endl;
            cin>>n;


            //Process Data
            PI=(pow((-1),n)/(2*n+1));
            answer=0;
            n=0;
            while (n>=0){
                answer=answer+4*PI;
                n--;
            }
            //Output the processed Data
            cout<<"The approximate value is "<<answer<<endl;
            break;
        }
        case 'D':{
            //Declare Variables
            char mf;//Male-female calculation
            float lbs,inches,yrs;
            float BMR;
            float Bars;
            int nBars;
            char actv;

            //Input Data
            cout<<"Candy bar calculation to maintain weight!"<<endl;
            cout<<"Eat less than this to lose weight!"<<endl;
            cout<<"Input male or female with m or f"<<endl;
            cin>>mf;
            cout<<"Input weight(lbs), height(inches), age(yrs)"<<endl;
            cin>>lbs>>inches>>yrs;
            Bars=230.0;

            //Process the Data
            if(mf=='m'||mf=='M'){
                BMR=66+6.3*lbs+12.9*inches-6.8*yrs;
            }else{
                BMR=655+4.3*lbs+4.7*inches-4.7*yrs;
            }
            cout<<"How active are you? Choose a response A thru D."<<endl;
            cout<<"a. Sedentary"<<endl;
            cout<<"b. Somewhat active (exercise occasionally)."<<endl;
            cout<<"c. Active (exercise 3-4 days per week)."<<endl;
            cout<<"d. Highly active (exercise every day)."<<endl;
            cin>>actv;
            if(actv=='a'||actv=='A'){
                BMR=BMR*1.20;
            }else if(actv=='b'||actv=='B'){
                BMR=BMR*1.30;
            }else if(actv=='c'||actv=='C'){
                BMR=BMR*1.40;
            }else if(actv=='d'||actv=='D'){
                BMR=BMR*1.50;
            }else{
                cout<<"Wrong entry you're BMR will be lower than it is supposed to be"<<endl;
            }
            nBars=BMR/Bars+1;

            //Output the processed Data
            cout<<"Eat less than "<<nBars<<" chocolate bars to lose weight"<<endl;
            break;
        }
        case 'E':{
            //Declare Variable
            int mth;
            int day;
            int yr;

            //Input Data
            cout<<"This is the Magic Date Program welcome."<<endl;
            cout<<"Enter the Month, Day, and two digit year in that order."<<endl;
            cin>>mth;
            cin>>day;
            cin>>yr;

            //Process and output Data
            if(mth*day==yr){
                cout<<"This date is Magical!"<<endl;
            }else{
                cout<<"This date is not magical"<<endl;
            }
            break;
        }
        case'F':{
            //Declare Variable
            float La;
            float Lb;
            float Wa;
            float Wb;
            float Ara;
            float Arb;

            //Input Data
            cout<<"This is the area of two rectangles program!"<<endl;
            cout<<"Enter the Length and width in meters of the first rectangle in that order"<<endl;
            cin>>La;
            cin>>Wa;
            cout<<"Enter the length and width in meters of the second rectangle in that order"<<endl;
            cin>>Lb;
            cin>>Wb;

            //Process Data
            Ara=La*Wa;
            Arb=Lb*Wb;

            //Output the processed Data
            cout<<"Rectangle 1:"<<endl;
            cout<<"Length= "<<La<<" (m)."<<endl;
            cout<<"Width= "<<Wa<<" (m)"<<endl;
            cout<<"Area= "<<Ara<<" (m^2)"<<endl;
            cout<<endl;
            cout<<"Rectangle 2:"<<endl;
            cout<<"Length= "<<Lb<<" (m)"<<endl;
            cout<<"Width= "<<Wb<<" (m)"<<endl;
            cout<<"Area= "<<Arb<<" (m^2)"<<endl;
            cout<<endl;

            if(Ara>Arb){
                cout<<"Rectangle 1 has a greater area"<<endl;
            }else{
                cout<<"Rectangle 2 has a greater area"<<endl;
            }
            break;
        }
        case'G':{
            //Declare Variable
            float kg;
            float Newt;

            //Input Data
            cout<<"This is Mass(Kg) to Weight(N) conversion program!"<<endl;
            cout<<"Input the mass of the object in Kg"<<endl;
            cin>>kg;

            //Process Data
            Newt=kg*9.8;
            if(Newt<10){
                cout<<"This object is too light."<<endl;
            }else if(Newt>1000){
                cout<<"This object is too heavy."<<endl;
            }else{
                cout<<"This object weighs "<<Newt<<" Newtons."<<endl;
            }
            break;
        }
        case'H':{
            //Declare Variable
            float sec;
            float min;
            float hour;
            float day;


            //Input Data
            cout<<"This is the Time Calulator Program"<<endl;
            cout<<"Input a number of seconds."<<endl;
            cin>>sec;

            //Process Data
            cout<<fixed<<setprecision(2)<<showpoint;
            if(sec>=0&&sec<60){
                cout<<"The time entered is "<<sec<<" secs"<<endl;
            }else if(sec>=60&&sec<3600){
                min=sec*1/60;
                cout<<"The time entered is "<<min<<" mins."<<endl;
            }else if(sec>=3600&&sec<86400){
                hour=sec/3600;
                cout<<"The time entered is "<<hour<<" hours."<<endl;
            }else if(sec>86400){
                day=sec/86400;
                cout<<"The time entered is "<<day<<" days."<<endl;
            }else{
                cout<<"invalid entry make sure you are entering positve number"<<endl;
            }
            break;
        }
        case'I':{
            //Declare Variable
            string ColA;
            string ColB;

            //Input Data
            cout<<"This is the Color Mixer program for mixing primary colors."<<endl;
            cout<<"Enter the colors to mix using the choices";
            cout<<" Red, Blue, and Yellow."<<endl;
            cin>>ColA;
            cin>>ColB;

            //Process and Output Data
            if(((ColA=="Red"||ColA=="red")&&(ColB=="Blue"||ColB=="blue"))||
                    ((ColA=="Blue"||ColA=="blue")&&(ColB=="Red"||ColB=="red"))){
                cout<<"The mixture of "<<ColA<<" and "<<ColB<<" make the color Purple."<<endl;
           
            }else if(((ColA=="Red"||ColA=="red")&&(ColB=="Yellow"||ColB=="yellow"))||
                    ((ColA=="Yellow"||ColA=="yellow")&&(ColB=="Red"||ColB=="red"))){
                cout<<"The mixture of "<<ColA<<" and "<<ColB<<" make the color Orange."<<endl;
           
            }else if(((ColA=="Yellow"||ColA=="yellow")&&(ColB=="Blue"||ColB=="blue"))||
                    ((ColA=="Blue"||ColA=="blue")&&(ColB=="Yellow"||ColB=="yellow"))){
                 cout<<"The mixture of "<<ColA<<" and "<<ColB<<" make the color Green."<<endl;
           
            }else{
                cout<<"*Error* either you entered the same primary color or you entered";
                cout<<" an invalid response."<<endl;
                cout<<"Type in one of the choices above to avoid an error"<<endl;
            }
            break;
        }
        case 'J':{
            //Declare Variables
            char card;
            int value=0,excess=0;

            //Input Data
            cout<<"This is the BlackJack hand value program."<<endl;
            cout<<"Input a card A,T,J,Q,K,2-9"<<endl;
            cin>>card;

            //Evaluate the first card
            switch(card){
                case 'K':
                case 'Q':
                case 'J':
                case 'T':value+=10;break;
                case '9':
                case '8':
                case '7':
                case '6':
                case '5':
                case '4':
                case '3':
                case '2':value+=(card-48);break;
                case 'A':value+=11;excess=10;
            }

            //Output the value
            cout<<"The value of the hand at this point = "<<value<<endl;

            //Input Data for the second card
            cout<<"Input a card A,T,J,Q,K,2-9"<<endl;
            cin>>card;

            //Evaluate the second card
            switch(card){
                case 'K':
                case 'Q':
                case 'J':
                case 'T':value+=10;break;
                case '9':
                case '8':
                case '7':
                case '6':
                case '5':
                case '4':
                case '3':
                case '2':value+=(card-48);break;
                case 'A':value+=11;excess=10;
            }
            if(value>21)value-=excess;

            //Output the value
            cout<<"The value of the hand at this point = "<<value<<endl;

            //Input Data for the second card
            cout<<"Input a card A,T,J,Q,K,2-9"<<endl;
            cin>>card;

            //Evaluate the second card
            switch(card){
                case 'K':
                case 'Q':
                case 'J':
                case 'T':value+=10;break;
                case '9':
                case '8':
                case '7':
                case '6':
                case '5':
                case '4':
                case '3':
                case '2':value+=(card-48);break;
                case 'A':value+=11;excess=10;
            }
            if(value>21)value-=excess;

            //Output the value
            cout<<"The value of the hand at this point = "<<value<<endl;
        }
        break;
        default:
            cout<<"Invalid Entry"<<endl;
           
          
    }
    
    //Output the processed Data

    //Exit Stage Right!
    return 0;
}

