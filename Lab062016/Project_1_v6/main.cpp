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
    char c14=1,c15=1,c16=1,c17=1,c18=1,c19=1,c20=1,g1=0,g2=0,g3=0,g4=0,g5=0,g6=0,g7=0,g8=0,g9=0,g10=0,g11=0,g12=0;
    int num;
    float man=0;
    string win="CONGRATULATIONS YOU WON YOU WERE ABLE TO GUESS THE WORD CORRECTLY";
    string lose="YOU WERE UNABLE TO GUESS THE WORD OR WORDS";
    
    
    //Input Data
    for(int i=1;i<=3;i++){
        cout<<"********************************************************************"<<endl;
    }
    cout<<endl;
    cout<<"Welcome to the Hangman Game"<<endl;
    cout<<endl;
    for(int i=1;i<=3;i++){
        cout<<"********************************************************************"<<endl;
    }
    cout<<"DIRECTIONS:"<<endl;
    cout<<"You have 12 guesses in total to guess every character of the chosen word"<<endl;
    cout<<"You are only allowed 5 wrong guesses! Once you guess wrong 6 times you lose."<<endl;
    cout<<"Guessing the same letter will result in a wasted guess."<<endl;
    cout<<"When guessing or entering the word use only UPPERCASE LETTERS!!"<<endl;
    cout<<"Enter the amount of characters your word or words have including "
            <<"any spaces in between in the character count"<<endl;
    cout<<"with a max character count of 20"<<endl;
    cin>>num;
    cout<<"Input the word or words that will be used for hangman"<<endl;
    cout<<"Enter UPPERCASE letters only and and for SPACES in between words"
            <<" use the (_) Underscore symbol"<<endl;
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
     for(int i=1;i<=3;i++){
        cout<<"********************************************************************"<<endl;
    }
    cout<<"                          HANGMAN GAME                              "<<endl;
   
    //Process Data
    cout<<"  -------"<<endl;
    cout<<"  |     |                                                           "<<endl;
    cout<<"  |     |                                                           "<<endl;
    cout<<"  |                                                                 "<<endl;
    cout<<"  |                                                                 "<<endl;
    cout<<"  |                                                                 "<<endl;
    cout<<"  |                                                                 "<<endl;
    cout<<"  |                                                                 "<<endl;
    cout<<"  |                                                                 "<<endl;
    cout<<"-----                                                               "<<endl;
    cout<<endl;
    if((c1>=65&&c1<=90)||(c1>=97&&c1<=122)){ //I originally was going to make the program read uppercase and lower case but
        cout<<"_ ";                          //if the word entered was all uppercase and you guessed a lowercase letter it wouldn't count it as a 
    }else{                                   //correct guess so i scrapped the idea but left the code in there to save time and it doesnt affect anything
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
    cout<<endl;
    cout<<"Enter your first guess!!"<<endl;
    cout<<"Enter only one UPPERCASE letter"<<endl;
    cin>>g1;
    for(int i=1;i<=3;i++){
        cout<<"********************************************************************"<<endl;
    }
    if(g1==c1||g1==c2||g1==c3||g1==c4||g1==c5||g1==c6||g1==c7||g1==c8||g1==c9||g1==c10||g1==c11
            ||g1==c12||g1==c13||g1==c14||g1==c15||g1==c16||g1==c17||g1==c18||g1==c19||g1==c20){
        cout<<"  -------"<<endl;
        cout<<"  |     |                   ATTEMPTS:"<<g1<<endl; 
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"-----                                                               "<<endl;
        cout<<endl;
        if((c1>=64&&c1<=90)||(c1>=97&&c1<=122)){
            if(c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
                    ||c1==g9||c1==g10){
                cout<<c1<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c2>=65&&c2<=90)||(c2>=97&&c2<=122)){
            if(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
                    ||c2==g9||c2==g10){
                cout<<c2<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c3>=65&&c3<=90)||(c3>=97&&c3<=122)){
            if(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
                    ||c3==g9||c3==g10){
                cout<<c3<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c4>=65&&c4<=90)||(c4>=97&&c4<=122)){
            if(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
                    ||c4==g9||c4==g10){
                cout<<c4<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c5>=65&&c5<=90)||(c5>=97&&c5<=122)){
            if(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
                    ||c5==g9||c5==g10){
                cout<<c5<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c6>=65&&c6<=90)||(c6>=97&&c6<=122)){
            if(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
                    ||c6==g9||c6==g10){
                cout<<c6<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c7>=65&&c7<=90)||(c7>=97&&c7<=122)){
            if(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
                    ||c7==g9||c7==g10){
                cout<<c7<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c8>=65&&c8<=90)||(c8>=97&&c8<=122)){
            if(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
                    ||c8==g9||c8==g10){
                cout<<c8<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c9>=65&&c9<=90)||(c9>=97&&c9<=122)){
            if(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
                    ||c9==g9||c9==g10){
                cout<<c9<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c10>=65&&c10<=90)||(c10>=97&&c10<=122)){
            if(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
                    ||c10==g9||c10==g10){
                cout<<c10<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c11>=65&&c11<=90)||(c11>=97&&c11<=122)){
            if(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
                    ||c11==g9||c11==g10){
                cout<<c11<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c12>=65&&c12<=90)||(c12>=97&&c12<=122)){
            if(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
                    ||c12==g9||c12==g10){
                cout<<c12<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c13>=65&&c13<=90)||(c13>=97&&c13<=122)){
            if(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
                    ||c13==g9||c13==g10){
                cout<<c13<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c14>=65&&c14<=90)||(c14>=97&&c14<=122)){
            if(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
                    ||c14==g9||c14==g10){
                cout<<c14<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c15>=65&&c15<=90)||(c15>=97&&c15<=122)){
            if(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
                    ||c15==g9||c15==g10){
                cout<<c15<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c16>=65&&c16<=90)||(c16>=97&&c16<=122)){
            if(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
                    ||c16==g9||c16==g10){
                cout<<c16<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c17>=65&&c17<=90)||(c17>=97&&c17<=122)){
            if(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
                    ||c17==g9||c17==g10){
                cout<<c17<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c18>=65&&c18<=90)||(c18>=97&&c18<=122)){
            if(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
                    ||c18==g9||c18==g10){
                cout<<c18<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c19>=65&&c19<=90)||(c19>=97&&c19<=122)){
            if(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
                    ||c19==g9||c19==g10){
                cout<<c19<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c20>=65&&c20<=90)||(c20>=97&&c20<=122)){
            if(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
                    ||c20==g9||c20==g10){
                cout<<c20<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }
    }else{
        man=man+1;
    }if(man==1){     
        cout<<"  -------"<<endl;
        cout<<"  |     |                   ATTEMPTS:"<<g1<<g2<<g3<<g4<<g5<<g6<<g7<<g8<<g9<<g10<<endl; 
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |     @                                                           "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"-----                                                               "<<endl;
        cout<<endl;
        if((c1>=65&&c1<=90)||(c1>=97&&c1<=122)){
            if(c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
                    ||c1==g9||c1==g10){
                cout<<c1<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c2>=65&&c2<=90)||(c2>=97&&c2<=122)){
            if(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
                    ||c2==g9||c2==g10){
                cout<<c2<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c3>=65&&c3<=90)||(c3>=97&&c3<=122)){
            if(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
                    ||c3==g9||c3==g10){
                cout<<c3<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c4>=65&&c4<=90)||(c4>=97&&c4<=122)){
            if(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
                    ||c4==g9||c4==g10){
                cout<<c4<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c5>=65&&c5<=90)||(c5>=97&&c5<=122)){
            if(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
                    ||c5==g9||c5==g10){
                cout<<c5<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c6>=65&&c6<=90)||(c6>=97&&c6<=122)){
            if(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
                    ||c6==g9||c6==g10){
                cout<<c6<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c7>=65&&c7<=90)||(c7>=97&&c7<=122)){
            if(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
                    ||c7==g9||c7==g10){
                cout<<c7<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c8>=65&&c8<=90)||(c8>=97&&c8<=122)){
            if(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
                    ||c8==g9||c8==g10){
                cout<<c8<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c9>=65&&c9<=90)||(c9>=97&&c9<=122)){
            if(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
                    ||c9==g9||c9==g10){
                cout<<c9<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c10>=65&&c10<=90)||(c10>=97&&c10<=122)){
            if(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
                    ||c10==g9||c10==g10){
                cout<<c10<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c11>=65&&c11<=90)||(c11>=97&&c11<=122)){
            if(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
                    ||c11==g9||c11==g10){
                cout<<c11<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c12>=65&&c12<=90)||(c12>=97&&c12<=122)){
            if(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
                    ||c12==g9||c12==g10){
                cout<<c12<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c13>=65&&c13<=90)||(c13>=97&&c13<=122)){
            if(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
                    ||c13==g9||c13==g10){
                cout<<c13<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c14>=65&&c14<=90)||(c14>=97&&c14<=122)){
            if(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
                    ||c14==g9||c14==g10){
                cout<<c14<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c15>=65&&c15<=90)||(c15>=97&&c15<=122)){
            if(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
                    ||c15==g9||c15==g10){
                cout<<c15<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c16>=65&&c16<=90)||(c16>=97&&c16<=122)){
            if(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
                    ||c16==g9||c16==g10){
                cout<<c16<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c17>=65&&c17<=90)||(c17>=97&&c17<=122)){
            if(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
                    ||c17==g9||c17==g10){
                cout<<c17<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c18>=65&&c18<=90)||(c18>=97&&c18<=122)){
            if(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
                    ||c18==g9||c18==g10){
                cout<<c18<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c19>=65&&c19<=90)||(c19>=97&&c19<=122)){
            if(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
                    ||c19==g9||c19==g10){
                cout<<c19<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c20>=65&&c20<=90)||(c20>=97&&c20<=122)){
            if(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
                    ||c20==g9||c20==g10){
                cout<<c20<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }
        cout<<"You only have 4  wrong attempts left"<<endl;
    }
    cout<<endl;
    cout<<"Enter guess number 2!!"<<endl;
    cout<<"Enter only one UPPERCASE letter"<<endl;
    cin>>g2;
    for(int i=1;i<=3;i++){
        cout<<"********************************************************************"<<endl;
    }
    if(g2==c1||g2==c2||g2==c3||g2==c4||g2==c5||g2==c6||g2==c7||g2==c2||g2==c9||g2==c10||g2==c11
            ||g2==c12||g2==c13||g2==c14||g2==c15||g2==c16||g2==c17||g2==c18||g2==c19||g2==c20){
        cout<<"Good Job!"<<endl;
    }else{
        man=man+1;
    }if(man==0){
        cout<<"  -------"<<endl;
        cout<<"  |     |                   ATTEMPTS:"<<g1<<g2<<endl; 
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"-----                                                               "<<endl;
        cout<<endl;
        if((c1>=65&&c1<=90)||(c1>=97&&c1<=122)){
            if(c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
                    ||c1==g9||c1==g10){
                cout<<c1<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c2>=65&&c2<=90)||(c2>=97&&c2<=122)){
            if(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
                    ||c2==g9||c2==g10){
                cout<<c2<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c3>=65&&c3<=90)||(c3>=97&&c3<=122)){
            if(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
                    ||c3==g9||c3==g10){
                cout<<c3<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c4>=65&&c4<=90)||(c4>=97&&c4<=122)){
            if(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
                    ||c4==g9||c4==g10){
                cout<<c4<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c5>=65&&c5<=90)||(c5>=97&&c5<=122)){
            if(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
                    ||c5==g9||c5==g10){
                cout<<c5<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c6>=65&&c6<=90)||(c6>=97&&c6<=122)){
            if(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
                    ||c6==g9||c6==g10){
                cout<<c6<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c7>=65&&c7<=90)||(c7>=97&&c7<=122)){
            if(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
                    ||c7==g9||c7==g10){
                cout<<c7<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c8>=65&&c8<=90)||(c8>=97&&c8<=122)){
            if(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
                    ||c8==g9||c8==g10){
                cout<<c8<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c9>=65&&c9<=90)||(c9>=97&&c9<=122)){
            if(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
                    ||c9==g9||c9==g10){
                cout<<c9<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c10>=65&&c10<=90)||(c10>=97&&c10<=122)){
            if(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
                    ||c10==g9||c10==g10){
                cout<<c10<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c11>=65&&c11<=90)||(c11>=97&&c11<=122)){
            if(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
                    ||c11==g9||c11==g10){
                cout<<c11<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c12>=65&&c12<=90)||(c12>=97&&c12<=122)){
            if(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
                    ||c12==g9||c12==g10){
                cout<<c12<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c13>=65&&c13<=90)||(c13>=97&&c13<=122)){
            if(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
                    ||c13==g9||c13==g10){
                cout<<c13<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c14>=65&&c14<=90)||(c14>=97&&c14<=122)){
            if(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
                    ||c14==g9||c14==g10){
                cout<<c14<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c15>=65&&c15<=90)||(c15>=97&&c15<=122)){
            if(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
                    ||c15==g9||c15==g10){
                cout<<c15<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c16>=65&&c16<=90)||(c16>=97&&c16<=122)){
            if(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
                    ||c16==g9||c16==g10){
                cout<<c16<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c17>=65&&c17<=90)||(c17>=97&&c17<=122)){
            if(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
                    ||c17==g9||c17==g10){
                cout<<c17<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c18>=65&&c18<=90)||(c18>=97&&c18<=122)){
            if(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
                    ||c18==g9||c18==g10){
                cout<<c18<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c19>=65&&c19<=90)||(c19>=97&&c19<=122)){
            if(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
                    ||c19==g9||c19==g10){
                cout<<c19<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c20>=65&&c20<=90)||(c20>=97&&c20<=122)){
            if(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
                    ||c20==g9||c20==g10){
                cout<<c20<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }
    }if(man==1){     
        cout<<"  -------"<<endl;
        cout<<"  |     |                   ATTEMPTS:"<<g1<<g2<<endl; 
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |     @                                                           "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"-----                                                               "<<endl;
        cout<<endl;
        if((c1>=65&&c1<=90)||(c1>=97&&c1<=122)){
            if(c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
                    ||c1==g9||c1==g10){
                cout<<c1<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c2>=65&&c2<=90)||(c2>=97&&c2<=122)){
            if(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
                    ||c2==g9||c2==g10){
                cout<<c2<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c3>=65&&c3<=90)||(c3>=97&&c3<=122)){
            if(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
                    ||c3==g9||c3==g10){
                cout<<c3<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c4>=65&&c4<=90)||(c4>=97&&c4<=122)){
            if(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
                    ||c4==g9||c4==g10){
                cout<<c4<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c5>=65&&c5<=90)||(c5>=97&&c5<=122)){
            if(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
                    ||c5==g9||c5==g10){
                cout<<c5<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c6>=65&&c6<=90)||(c6>=97&&c6<=122)){
            if(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
                    ||c6==g9||c6==g10){
                cout<<c6<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c7>=65&&c7<=90)||(c7>=97&&c7<=122)){
            if(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
                    ||c7==g9||c7==g10){
                cout<<c7<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c8>=65&&c8<=90)||(c8>=97&&c8<=122)){
            if(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
                    ||c8==g9||c8==g10){
                cout<<c8<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c9>=65&&c9<=90)||(c9>=97&&c9<=122)){
            if(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
                    ||c9==g9||c9==g10){
                cout<<c9<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c10>=65&&c10<=90)||(c10>=97&&c10<=122)){
            if(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
                    ||c10==g9||c10==g10){
                cout<<c10<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c11>=65&&c11<=90)||(c11>=97&&c11<=122)){
            if(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
                    ||c11==g9||c11==g10){
                cout<<c11<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c12>=65&&c12<=90)||(c12>=97&&c12<=122)){
            if(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
                    ||c12==g9||c12==g10){
                cout<<c12<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c13>=65&&c13<=90)||(c13>=97&&c13<=122)){
            if(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
                    ||c13==g9||c13==g10){
                cout<<c13<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c14>=65&&c14<=90)||(c14>=97&&c14<=122)){
            if(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
                    ||c14==g9||c14==g10){
                cout<<c14<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c15>=65&&c15<=90)||(c15>=97&&c15<=122)){
            if(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
                    ||c15==g9||c15==g10){
                cout<<c15<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c16>=65&&c16<=90)||(c16>=97&&c16<=122)){
            if(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
                    ||c16==g9||c16==g10){
                cout<<c16<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c17>=65&&c17<=90)||(c17>=97&&c17<=122)){
            if(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
                    ||c17==g9||c17==g10){
                cout<<c17<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c18>=65&&c18<=90)||(c18>=97&&c18<=122)){
            if(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
                    ||c18==g9||c18==g10){
                cout<<c18<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c19>=65&&c19<=90)||(c19>=97&&c19<=122)){
            if(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
                    ||c19==g9||c19==g10){
                cout<<c19<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c20>=65&&c20<=90)||(c20>=97&&c20<=122)){
            if(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
                    ||c20==g9||c20==g10){
                cout<<c20<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }
        cout<<"You only have 4 wrong attempts left"<<endl;
    }if(man==2){     
        cout<<"  -------"<<endl;
        cout<<"  |     |                   ATTEMPTS:"<<g1<<g2<<endl; 
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |     @                                                           "<<endl;
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"-----                                                               "<<endl;
        cout<<endl;
        if((c1>=65&&c1<=90)||(c1>=97&&c1<=122)){
            if(c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
                    ||c1==g9||c1==g10){
                cout<<c1<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c2>=65&&c2<=90)||(c2>=97&&c2<=122)){
            if(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
                    ||c2==g9||c2==g10){
                cout<<c2<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c3>=65&&c3<=90)||(c3>=97&&c3<=122)){
            if(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
                    ||c3==g9||c3==g10){
                cout<<c3<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c4>=65&&c4<=90)||(c4>=97&&c4<=122)){
            if(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
                    ||c4==g9||c4==g10){
                cout<<c4<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c5>=65&&c5<=90)||(c5>=97&&c5<=122)){
            if(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
                    ||c5==g9||c5==g10){
                cout<<c5<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c6>=65&&c6<=90)||(c6>=97&&c6<=122)){
            if(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
                    ||c6==g9||c6==g10){
                cout<<c6<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c7>=65&&c7<=90)||(c7>=97&&c7<=122)){
            if(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
                    ||c7==g9||c7==g10){
                cout<<c7<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c8>=65&&c8<=90)||(c8>=97&&c8<=122)){
            if(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
                    ||c8==g9||c8==g10){
                cout<<c8<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c9>=65&&c9<=90)||(c9>=97&&c9<=122)){
            if(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
                    ||c9==g9||c9==g10){
                cout<<c9<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c10>=65&&c10<=90)||(c10>=97&&c10<=122)){
            if(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
                    ||c10==g9||c10==g10){
                cout<<c10<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c11>=65&&c11<=90)||(c11>=97&&c11<=122)){
            if(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
                    ||c11==g9||c11==g10){
                cout<<c11<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c12>=65&&c12<=90)||(c12>=97&&c12<=122)){
            if(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
                    ||c12==g9||c12==g10){
                cout<<c12<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c13>=65&&c13<=90)||(c13>=97&&c13<=122)){
            if(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
                    ||c13==g9||c13==g10){
                cout<<c13<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c14>=65&&c14<=90)||(c14>=97&&c14<=122)){
            if(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
                    ||c14==g9||c14==g10){
                cout<<c14<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c15>=65&&c15<=90)||(c15>=97&&c15<=122)){
            if(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
                    ||c15==g9||c15==g10){
                cout<<c15<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c16>=65&&c16<=90)||(c16>=97&&c16<=122)){
            if(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
                    ||c16==g9||c16==g10){
                cout<<c16<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c17>=65&&c17<=90)||(c17>=97&&c17<=122)){
            if(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
                    ||c17==g9||c17==g10){
                cout<<c17<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c18>=65&&c18<=90)||(c18>=97&&c18<=122)){
            if(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
                    ||c18==g9||c18==g10){
                cout<<c18<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c19>=65&&c19<=90)||(c19>=97&&c19<=122)){
            if(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
                    ||c19==g9||c19==g10){
                cout<<c19<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c20>=65&&c20<=90)||(c20>=97&&c20<=122)){
            if(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
                    ||c20==g9||c20==g10){
                cout<<c20<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }
    }
    cout<<endl;
    cout<<"Enter guess number 3!!"<<endl;
    cout<<"Enter only one UPPERCASE letter"<<endl;
    cin>>g3;
    for(int i=1;i<=3;i++){
        cout<<"********************************************************************"<<endl;
    }
    if(g3==c1||g3==c2||g3==c3||g3==c4||g3==c5||g3==c6||g3==c7||g3==c2||g3==c9||g3==c10||g3==c11
            ||g3==c12||g3==c13||g3==c14||g3==c15||g3==c16||g3==c17||g3==c18||g3==c19||g3==c20){
        
    }else{
        man=man+1;
    }if(man==0){
        cout<<"  -------"<<endl;
        cout<<"  |     |                   ATTEMPTS:"<<g1<<g2<<g3<<endl; 
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"-----                                                               "<<endl;
        cout<<endl;
        if((c1>=65&&c1<=90)||(c1>=97&&c1<=122)){
            if(c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
                    ||c1==g9||c1==g10){
                cout<<c1<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c2>=65&&c2<=90)||(c2>=97&&c2<=122)){
            if(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
                    ||c2==g9||c2==g10){
                cout<<c2<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c3>=65&&c3<=90)||(c3>=97&&c3<=122)){
            if(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
                    ||c3==g9||c3==g10){
                cout<<c3<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c4>=65&&c4<=90)||(c4>=97&&c4<=122)){
            if(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
                    ||c4==g9||c4==g10){
                cout<<c4<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c5>=65&&c5<=90)||(c5>=97&&c5<=122)){
            if(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
                    ||c5==g9||c5==g10){
                cout<<c5<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c6>=65&&c6<=90)||(c6>=97&&c6<=122)){
            if(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
                    ||c6==g9||c6==g10){
                cout<<c6<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c7>=65&&c7<=90)||(c7>=97&&c7<=122)){
            if(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
                    ||c7==g9||c7==g10){
                cout<<c7<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c8>=65&&c8<=90)||(c8>=97&&c8<=122)){
            if(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
                    ||c8==g9||c8==g10){
                cout<<c8<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c9>=65&&c9<=90)||(c9>=97&&c9<=122)){
            if(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
                    ||c9==g9||c9==g10){
                cout<<c9<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c10>=65&&c10<=90)||(c10>=97&&c10<=122)){
            if(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
                    ||c10==g9||c10==g10){
                cout<<c10<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c11>=65&&c11<=90)||(c11>=97&&c11<=122)){
            if(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
                    ||c11==g9||c11==g10){
                cout<<c11<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c12>=65&&c12<=90)||(c12>=97&&c12<=122)){
            if(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
                    ||c12==g9||c12==g10){
                cout<<c12<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c13>=65&&c13<=90)||(c13>=97&&c13<=122)){
            if(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
                    ||c13==g9||c13==g10){
                cout<<c13<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c14>=65&&c14<=90)||(c14>=97&&c14<=122)){
            if(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
                    ||c14==g9||c14==g10){
                cout<<c14<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c15>=65&&c15<=90)||(c15>=97&&c15<=122)){
            if(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
                    ||c15==g9||c15==g10){
                cout<<c15<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c16>=65&&c16<=90)||(c16>=97&&c16<=122)){
            if(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
                    ||c16==g9||c16==g10){
                cout<<c16<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c17>=65&&c17<=90)||(c17>=97&&c17<=122)){
            if(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
                    ||c17==g9||c17==g10){
                cout<<c17<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c18>=65&&c18<=90)||(c18>=97&&c18<=122)){
            if(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
                    ||c18==g9||c18==g10){
                cout<<c18<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c19>=65&&c19<=90)||(c19>=97&&c19<=122)){
            if(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
                    ||c19==g9||c19==g10){
                cout<<c19<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c20>=65&&c20<=90)||(c20>=97&&c20<=122)){
            if(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
                    ||c20==g9||c20==g10){
                cout<<c20<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }
    }if(man==1){     
        cout<<"  -------"<<endl;
        cout<<"  |     |                   ATTEMPTS:"<<g1<<g2<<g3<<endl; 
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |     @                                                           "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"-----                                                               "<<endl;
        cout<<endl;
        if((c1>=65&&c1<=90)||(c1>=97&&c1<=122)){
            if(c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
                    ||c1==g9||c1==g10){
                cout<<c1<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c2>=65&&c2<=90)||(c2>=97&&c2<=122)){
            if(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
                    ||c2==g9||c2==g10){
                cout<<c2<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c3>=65&&c3<=90)||(c3>=97&&c3<=122)){
            if(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
                    ||c3==g9||c3==g10){
                cout<<c3<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c4>=65&&c4<=90)||(c4>=97&&c4<=122)){
            if(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
                    ||c4==g9||c4==g10){
                cout<<c4<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c5>=65&&c5<=90)||(c5>=97&&c5<=122)){
            if(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
                    ||c5==g9||c5==g10){
                cout<<c5<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c6>=65&&c6<=90)||(c6>=97&&c6<=122)){
            if(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
                    ||c6==g9||c6==g10){
                cout<<c6<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c7>=65&&c7<=90)||(c7>=97&&c7<=122)){
            if(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
                    ||c7==g9||c7==g10){
                cout<<c7<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c8>=65&&c8<=90)||(c8>=97&&c8<=122)){
            if(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
                    ||c8==g9||c8==g10){
                cout<<c8<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c9>=65&&c9<=90)||(c9>=97&&c9<=122)){
            if(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
                    ||c9==g9||c9==g10){
                cout<<c9<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c10>=65&&c10<=90)||(c10>=97&&c10<=122)){
            if(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
                    ||c10==g9||c10==g10){
                cout<<c10<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c11>=65&&c11<=90)||(c11>=97&&c11<=122)){
            if(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
                    ||c11==g9||c11==g10){
                cout<<c11<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c12>=65&&c12<=90)||(c12>=97&&c12<=122)){
            if(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
                    ||c12==g9||c12==g10){
                cout<<c12<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c13>=65&&c13<=90)||(c13>=97&&c13<=122)){
            if(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
                    ||c13==g9||c13==g10){
                cout<<c13<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c14>=65&&c14<=90)||(c14>=97&&c14<=122)){
            if(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
                    ||c14==g9||c14==g10){
                cout<<c14<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c15>=65&&c15<=90)||(c15>=97&&c15<=122)){
            if(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
                    ||c15==g9||c15==g10){
                cout<<c15<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c16>=65&&c16<=90)||(c16>=97&&c16<=122)){
            if(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
                    ||c16==g9||c16==g10){
                cout<<c16<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c17>=65&&c17<=90)||(c17>=97&&c17<=122)){
            if(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
                    ||c17==g9||c17==g10){
                cout<<c17<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c18>=65&&c18<=90)||(c18>=97&&c18<=122)){
            if(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
                    ||c18==g9||c18==g10){
                cout<<c18<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c19>=65&&c19<=90)||(c19>=97&&c19<=122)){
            if(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
                    ||c19==g9||c19==g10){
                cout<<c19<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c20>=65&&c20<=90)||(c20>=97&&c20<=122)){
            if(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
                    ||c20==g9||c20==g10){
                cout<<c20<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }
        cout<<"You only have 4 wrong attempts left"<<endl;
    }if(man==2){     
        cout<<"  -------"<<endl;
        cout<<"  |     |                   ATTEMPTS:"<<g1<<g2<<g3<<endl; 
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |     @                                                           "<<endl;
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"-----                                                               "<<endl;
        cout<<endl;
        if((c1>=65&&c1<=90)||(c1>=97&&c1<=122)){
            if(c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
                    ||c1==g9||c1==g10){
                cout<<c1<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c2>=65&&c2<=90)||(c2>=97&&c2<=122)){
            if(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
                    ||c2==g9||c2==g10){
                cout<<c2<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c3>=65&&c3<=90)||(c3>=97&&c3<=122)){
            if(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
                    ||c3==g9||c3==g10){
                cout<<c3<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c4>=65&&c4<=90)||(c4>=97&&c4<=122)){
            if(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
                    ||c4==g9||c4==g10){
                cout<<c4<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c5>=65&&c5<=90)||(c5>=97&&c5<=122)){
            if(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
                    ||c5==g9||c5==g10){
                cout<<c5<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c6>=65&&c6<=90)||(c6>=97&&c6<=122)){
            if(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
                    ||c6==g9||c6==g10){
                cout<<c6<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c7>=65&&c7<=90)||(c7>=97&&c7<=122)){
            if(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
                    ||c7==g9||c7==g10){
                cout<<c7<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c8>=65&&c8<=90)||(c8>=97&&c8<=122)){
            if(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
                    ||c8==g9||c8==g10){
                cout<<c8<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c9>=65&&c9<=90)||(c9>=97&&c9<=122)){
            if(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
                    ||c9==g9||c9==g10){
                cout<<c9<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c10>=65&&c10<=90)||(c10>=97&&c10<=122)){
            if(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
                    ||c10==g9||c10==g10){
                cout<<c10<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c11>=65&&c11<=90)||(c11>=97&&c11<=122)){
            if(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
                    ||c11==g9||c11==g10){
                cout<<c11<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c12>=65&&c12<=90)||(c12>=97&&c12<=122)){
            if(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
                    ||c12==g9||c12==g10){
                cout<<c12<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c13>=65&&c13<=90)||(c13>=97&&c13<=122)){
            if(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
                    ||c13==g9||c13==g10){
                cout<<c13<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c14>=65&&c14<=90)||(c14>=97&&c14<=122)){
            if(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
                    ||c14==g9||c14==g10){
                cout<<c14<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c15>=65&&c15<=90)||(c15>=97&&c15<=122)){
            if(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
                    ||c15==g9||c15==g10){
                cout<<c15<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c16>=65&&c16<=90)||(c16>=97&&c16<=122)){
            if(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
                    ||c16==g9||c16==g10){
                cout<<c16<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c17>=65&&c17<=90)||(c17>=97&&c17<=122)){
            if(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
                    ||c17==g9||c17==g10){
                cout<<c17<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c18>=65&&c18<=90)||(c18>=97&&c18<=122)){
            if(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
                    ||c18==g9||c18==g10){
                cout<<c18<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c19>=65&&c19<=90)||(c19>=97&&c19<=122)){
            if(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
                    ||c19==g9||c19==g10){
                cout<<c19<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c20>=65&&c20<=90)||(c20>=97&&c20<=122)){
            if(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
                    ||c20==g9||c20==g10){
                cout<<c20<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }
        cout<<"You only have 3 wrong attempts left"<<endl;
    }if(man==3){     
        cout<<"  -------"<<endl;
        cout<<"  |     |                   ATTEMPTS:"<<g1<<g2<<g3<<endl; 
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |     @                                                           "<<endl;
        cout<<"  |     |/                                                          "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"-----                                                               "<<endl;
        cout<<endl;
        if((c1>=65&&c1<=90)||(c1>=97&&c1<=122)){
            if(c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
                    ||c1==g9||c1==g10){
                cout<<c1<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c2>=65&&c2<=90)||(c2>=97&&c2<=122)){
            if(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
                    ||c2==g9||c2==g10){
                cout<<c2<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c3>=65&&c3<=90)||(c3>=97&&c3<=122)){
            if(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
                    ||c3==g9||c3==g10){
                cout<<c3<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c4>=65&&c4<=90)||(c4>=97&&c4<=122)){
            if(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
                    ||c4==g9||c4==g10){
                cout<<c4<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c5>=65&&c5<=90)||(c5>=97&&c5<=122)){
            if(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
                    ||c5==g9||c5==g10){
                cout<<c5<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c6>=65&&c6<=90)||(c6>=97&&c6<=122)){
            if(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
                    ||c6==g9||c6==g10){
                cout<<c6<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c7>=65&&c7<=90)||(c7>=97&&c7<=122)){
            if(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
                    ||c7==g9||c7==g10){
                cout<<c7<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c8>=65&&c8<=90)||(c8>=97&&c8<=122)){
            if(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
                    ||c8==g9||c8==g10){
                cout<<c8<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c9>=65&&c9<=90)||(c9>=97&&c9<=122)){
            if(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
                    ||c9==g9||c9==g10){
                cout<<c9<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c10>=65&&c10<=90)||(c10>=97&&c10<=122)){
            if(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
                    ||c10==g9||c10==g10){
                cout<<c10<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c11>=65&&c11<=90)||(c11>=97&&c11<=122)){
            if(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
                    ||c11==g9||c11==g10){
                cout<<c11<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c12>=65&&c12<=90)||(c12>=97&&c12<=122)){
            if(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
                    ||c12==g9||c12==g10){
                cout<<c12<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c13>=65&&c13<=90)||(c13>=97&&c13<=122)){
            if(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
                    ||c13==g9||c13==g10){
                cout<<c13<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c14>=65&&c14<=90)||(c14>=97&&c14<=122)){
            if(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
                    ||c14==g9||c14==g10){
                cout<<c14<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c15>=65&&c15<=90)||(c15>=97&&c15<=122)){
            if(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
                    ||c15==g9||c15==g10){
                cout<<c15<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c16>=65&&c16<=90)||(c16>=97&&c16<=122)){
            if(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
                    ||c16==g9||c16==g10){
                cout<<c16<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c17>=65&&c17<=90)||(c17>=97&&c17<=122)){
            if(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
                    ||c17==g9||c17==g10){
                cout<<c17<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c18>=65&&c18<=90)||(c18>=97&&c18<=122)){
            if(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
                    ||c18==g9||c18==g10){
                cout<<c18<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c19>=65&&c19<=90)||(c19>=97&&c19<=122)){
            if(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
                    ||c19==g9||c19==g10){
                cout<<c19<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c20>=65&&c20<=90)||(c20>=97&&c20<=122)){
            if(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
                    ||c20==g9||c20==g10){
                cout<<c20<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }
        cout<<"You only have 2 wrong attempts left"<<endl;
    }
    if((c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
            ||c1==g9||c1==g10||c1==1)&&(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
            ||c2==g9||c2==g10||c2==1)&&(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
            ||c3==g9||c3==g10||c3==1)&&(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
            ||c4==g9||c4==g10||c4==1)&&(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
            ||c5==g9||c5==g10||c5==1)&&(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
            ||c6==g9||c6==g10||c6==1)&&(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
            ||c7==g9||c7==g10||c7==1)&&(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
            ||c8==g9||c8==g10||c8==1)&&(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
            ||c9==g9||c9==g10||c9==1)&&(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
            ||c10==g9||c10==g10||c10==1)&&(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
            ||c11==g9||c11==g10||c11==1)&&(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
            ||c12==g9||c12==g10||c12==1)&&(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
            ||c13==g9||c13==g10||c13==1)&&(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
            ||c14==g9||c14==g10||c14==1)&&(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
            ||c15==g9||c15==g10||c15==1)&&(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
            ||c16==g9||c16==g10||c16==1)&&(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
            ||c17==g9||c17==g10||c17==1)&&(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
            ||c18==g9||c18==g10||c18==1)&&(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
            ||c19==g9||c19==g10||c19==1)&&(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
            ||c20==g9||c20==g10||c20==1)){
        cout<<endl;
        for(int i=1;i<=3;i++){
        cout<<"********************************************************************"<<endl;
        }   
        cout<<win<<endl;
        cout<<"The word or words were ";
        switch(num){
        case 1:cout<<c1;break;
        case 2:cout<<c1<<c2;break;
        case 3:cout<<c1<<c2<<c3;break;
        case 4:cout<<c1<<c2<<c3<<c4;break;
        case 5:cout<<c1<<c2<<c3<<c4<<c5;break;
        case 6:cout<<c1<<c2<<c3<<c4<<c5<<c6;break;
        case 7:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7;break;
        case 8:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8;break;
        case 9:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9;break;
        case 10:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10;break;
        case 11:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11;break;
        case 12:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12;break;
        case 13:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13;break;
        case 14:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14;break;
        case 15:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15;break;
        case 16:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16;break;
        case 17:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16<<c17;break;
        case 18:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16<<c17<<c18;break;
        case 19:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16<<c17<<c18<<c19;break;
        case 20:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16<<c17<<c18<<c19<<c20;break;
        }
        return 0;
        
    }
    cout<<endl;
    cout<<"Enter guess number 4!!"<<endl;
    cout<<"Enter only one UPPERCASE letter"<<endl;
    cin>>g4;
    for(int i=1;i<=3;i++){
        cout<<"********************************************************************"<<endl;
    }
    if(g4==c1||g4==c2||g4==c3||g4==c4||g4==c5||g4==c6||g4==c7||g4==c2||g4==c9||g4==c10||g4==c11
            ||g4==c12||g4==c13||g4==c14||g4==c15||g4==c16||g4==c17||g4==c18||g4==c19||g4==c20){
        
    }else{
        man=man+1;
    }if(man==0){
        cout<<"  -------"<<endl;
        cout<<"  |     |                   ATTEMPTS:"<<g1<<g2<<g3<<g4<<endl; 
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"-----                                                               "<<endl;
        cout<<endl;
        if((c1>=65&&c1<=90)||(c1>=97&&c1<=122)){
            if(c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
                    ||c1==g9||c1==g10){
                cout<<c1<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c2>=65&&c2<=90)||(c2>=97&&c2<=122)){
            if(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
                    ||c2==g9||c2==g10){
                cout<<c2<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c3>=65&&c3<=90)||(c3>=97&&c3<=122)){
            if(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
                    ||c3==g9||c3==g10){
                cout<<c3<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c4>=65&&c4<=90)||(c4>=97&&c4<=122)){
            if(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
                    ||c4==g9||c4==g10){
                cout<<c4<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c5>=65&&c5<=90)||(c5>=97&&c5<=122)){
            if(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
                    ||c5==g9||c5==g10){
                cout<<c5<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c6>=65&&c6<=90)||(c6>=97&&c6<=122)){
            if(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
                    ||c6==g9||c6==g10){
                cout<<c6<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c7>=65&&c7<=90)||(c7>=97&&c7<=122)){
            if(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
                    ||c7==g9||c7==g10){
                cout<<c7<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c8>=65&&c8<=90)||(c8>=97&&c8<=122)){
            if(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
                    ||c8==g9||c8==g10){
                cout<<c8<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c9>=65&&c9<=90)||(c9>=97&&c9<=122)){
            if(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
                    ||c9==g9||c9==g10){
                cout<<c9<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c10>=65&&c10<=90)||(c10>=97&&c10<=122)){
            if(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
                    ||c10==g9||c10==g10){
                cout<<c10<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c11>=65&&c11<=90)||(c11>=97&&c11<=122)){
            if(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
                    ||c11==g9||c11==g10){
                cout<<c11<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c12>=65&&c12<=90)||(c12>=97&&c12<=122)){
            if(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
                    ||c12==g9||c12==g10){
                cout<<c12<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c13>=65&&c13<=90)||(c13>=97&&c13<=122)){
            if(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
                    ||c13==g9||c13==g10){
                cout<<c13<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c14>=65&&c14<=90)||(c14>=97&&c14<=122)){
            if(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
                    ||c14==g9||c14==g10){
                cout<<c14<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c15>=65&&c15<=90)||(c15>=97&&c15<=122)){
            if(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
                    ||c15==g9||c15==g10){
                cout<<c15<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c16>=65&&c16<=90)||(c16>=97&&c16<=122)){
            if(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
                    ||c16==g9||c16==g10){
                cout<<c16<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c17>=65&&c17<=90)||(c17>=97&&c17<=122)){
            if(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
                    ||c17==g9||c17==g10){
                cout<<c17<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c18>=65&&c18<=90)||(c18>=97&&c18<=122)){
            if(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
                    ||c18==g9||c18==g10){
                cout<<c18<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c19>=65&&c19<=90)||(c19>=97&&c19<=122)){
            if(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
                    ||c19==g9||c19==g10){
                cout<<c19<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c20>=65&&c20<=90)||(c20>=97&&c20<=122)){
            if(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
                    ||c20==g9||c20==g10){
                cout<<c20<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }
    }if(man==1){     
        cout<<"  -------"<<endl;
        cout<<"  |     |                   ATTEMPTS:"<<g1<<g2<<g3<<g4<<endl; 
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |     @                                                           "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"-----                                                               "<<endl;
        cout<<endl;
        if((c1>=65&&c1<=90)||(c1>=97&&c1<=122)){
            if(c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
                    ||c1==g9||c1==g10){
                cout<<c1<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c2>=65&&c2<=90)||(c2>=97&&c2<=122)){
            if(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
                    ||c2==g9||c2==g10){
                cout<<c2<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c3>=65&&c3<=90)||(c3>=97&&c3<=122)){
            if(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
                    ||c3==g9||c3==g10){
                cout<<c3<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c4>=65&&c4<=90)||(c4>=97&&c4<=122)){
            if(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
                    ||c4==g9||c4==g10){
                cout<<c4<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c5>=65&&c5<=90)||(c5>=97&&c5<=122)){
            if(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
                    ||c5==g9||c5==g10){
                cout<<c5<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c6>=65&&c6<=90)||(c6>=97&&c6<=122)){
            if(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
                    ||c6==g9||c6==g10){
                cout<<c6<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c7>=65&&c7<=90)||(c7>=97&&c7<=122)){
            if(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
                    ||c7==g9||c7==g10){
                cout<<c7<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c8>=65&&c8<=90)||(c8>=97&&c8<=122)){
            if(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
                    ||c8==g9||c8==g10){
                cout<<c8<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c9>=65&&c9<=90)||(c9>=97&&c9<=122)){
            if(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
                    ||c9==g9||c9==g10){
                cout<<c9<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c10>=65&&c10<=90)||(c10>=97&&c10<=122)){
            if(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
                    ||c10==g9||c10==g10){
                cout<<c10<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c11>=65&&c11<=90)||(c11>=97&&c11<=122)){
            if(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
                    ||c11==g9||c11==g10){
                cout<<c11<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c12>=65&&c12<=90)||(c12>=97&&c12<=122)){
            if(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
                    ||c12==g9||c12==g10){
                cout<<c12<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c13>=65&&c13<=90)||(c13>=97&&c13<=122)){
            if(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
                    ||c13==g9||c13==g10){
                cout<<c13<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c14>=65&&c14<=90)||(c14>=97&&c14<=122)){
            if(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
                    ||c14==g9||c14==g10){
                cout<<c14<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c15>=65&&c15<=90)||(c15>=97&&c15<=122)){
            if(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
                    ||c15==g9||c15==g10){
                cout<<c15<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c16>=65&&c16<=90)||(c16>=97&&c16<=122)){
            if(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
                    ||c16==g9||c16==g10){
                cout<<c16<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c17>=65&&c17<=90)||(c17>=97&&c17<=122)){
            if(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
                    ||c17==g9||c17==g10){
                cout<<c17<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c18>=65&&c18<=90)||(c18>=97&&c18<=122)){
            if(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
                    ||c18==g9||c18==g10){
                cout<<c18<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c19>=65&&c19<=90)||(c19>=97&&c19<=122)){
            if(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
                    ||c19==g9||c19==g10){
                cout<<c19<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c20>=65&&c20<=90)||(c20>=97&&c20<=122)){
            if(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
                    ||c20==g9||c20==g10){
                cout<<c20<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }
        cout<<"You only have 4 wrong attempts left"<<endl;
    }if(man==2){     
        cout<<"  -------"<<endl;
        cout<<"  |     |                   ATTEMPTS:"<<g1<<g2<<g3<<g4<<endl; 
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |     @                                                           "<<endl;
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"-----                                                               "<<endl;
        cout<<endl;
        if((c1>=65&&c1<=90)||(c1>=97&&c1<=122)){
            if(c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
                    ||c1==g9||c1==g10){
                cout<<c1<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c2>=65&&c2<=90)||(c2>=97&&c2<=122)){
            if(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
                    ||c2==g9||c2==g10){
                cout<<c2<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c3>=65&&c3<=90)||(c3>=97&&c3<=122)){
            if(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
                    ||c3==g9||c3==g10){
                cout<<c3<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c4>=65&&c4<=90)||(c4>=97&&c4<=122)){
            if(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
                    ||c4==g9||c4==g10){
                cout<<c4<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c5>=65&&c5<=90)||(c5>=97&&c5<=122)){
            if(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
                    ||c5==g9||c5==g10){
                cout<<c5<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c6>=65&&c6<=90)||(c6>=97&&c6<=122)){
            if(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
                    ||c6==g9||c6==g10){
                cout<<c6<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c7>=65&&c7<=90)||(c7>=97&&c7<=122)){
            if(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
                    ||c7==g9||c7==g10){
                cout<<c7<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c8>=65&&c8<=90)||(c8>=97&&c8<=122)){
            if(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
                    ||c8==g9||c8==g10){
                cout<<c8<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c9>=65&&c9<=90)||(c9>=97&&c9<=122)){
            if(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
                    ||c9==g9||c9==g10){
                cout<<c9<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c10>=65&&c10<=90)||(c10>=97&&c10<=122)){
            if(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
                    ||c10==g9||c10==g10){
                cout<<c10<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c11>=65&&c11<=90)||(c11>=97&&c11<=122)){
            if(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
                    ||c11==g9||c11==g10){
                cout<<c11<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c12>=65&&c12<=90)||(c12>=97&&c12<=122)){
            if(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
                    ||c12==g9||c12==g10){
                cout<<c12<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c13>=65&&c13<=90)||(c13>=97&&c13<=122)){
            if(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
                    ||c13==g9||c13==g10){
                cout<<c13<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c14>=65&&c14<=90)||(c14>=97&&c14<=122)){
            if(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
                    ||c14==g9||c14==g10){
                cout<<c14<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c15>=65&&c15<=90)||(c15>=97&&c15<=122)){
            if(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
                    ||c15==g9||c15==g10){
                cout<<c15<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c16>=65&&c16<=90)||(c16>=97&&c16<=122)){
            if(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
                    ||c16==g9||c16==g10){
                cout<<c16<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c17>=65&&c17<=90)||(c17>=97&&c17<=122)){
            if(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
                    ||c17==g9||c17==g10){
                cout<<c17<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c18>=65&&c18<=90)||(c18>=97&&c18<=122)){
            if(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
                    ||c18==g9||c18==g10){
                cout<<c18<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c19>=65&&c19<=90)||(c19>=97&&c19<=122)){
            if(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
                    ||c19==g9||c19==g10){
                cout<<c19<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c20>=65&&c20<=90)||(c20>=97&&c20<=122)){
            if(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
                    ||c20==g9||c20==g10){
                cout<<c20<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }
        cout<<"You only have 3 wrong attempts left"<<endl;
    }if(man==3){     
        cout<<"  -------"<<endl;
        cout<<"  |     |                   ATTEMPTS:"<<g1<<g2<<g3<<g4<<endl; 
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |     @                                                           "<<endl;
        cout<<"  |     |/                                                          "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"-----                                                               "<<endl;
        cout<<endl;
        if((c1>=65&&c1<=90)||(c1>=97&&c1<=122)){
            if(c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
                    ||c1==g9||c1==g10){
                cout<<c1<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c2>=65&&c2<=90)||(c2>=97&&c2<=122)){
            if(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
                    ||c2==g9||c2==g10){
                cout<<c2<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c3>=65&&c3<=90)||(c3>=97&&c3<=122)){
            if(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
                    ||c3==g9||c3==g10){
                cout<<c3<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c4>=65&&c4<=90)||(c4>=97&&c4<=122)){
            if(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
                    ||c4==g9||c4==g10){
                cout<<c4<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c5>=65&&c5<=90)||(c5>=97&&c5<=122)){
            if(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
                    ||c5==g9||c5==g10){
                cout<<c5<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c6>=65&&c6<=90)||(c6>=97&&c6<=122)){
            if(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
                    ||c6==g9||c6==g10){
                cout<<c6<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c7>=65&&c7<=90)||(c7>=97&&c7<=122)){
            if(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
                    ||c7==g9||c7==g10){
                cout<<c7<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c8>=65&&c8<=90)||(c8>=97&&c8<=122)){
            if(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
                    ||c8==g9||c8==g10){
                cout<<c8<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c9>=65&&c9<=90)||(c9>=97&&c9<=122)){
            if(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
                    ||c9==g9||c9==g10){
                cout<<c9<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c10>=65&&c10<=90)||(c10>=97&&c10<=122)){
            if(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
                    ||c10==g9||c10==g10){
                cout<<c10<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c11>=65&&c11<=90)||(c11>=97&&c11<=122)){
            if(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
                    ||c11==g9||c11==g10){
                cout<<c11<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c12>=65&&c12<=90)||(c12>=97&&c12<=122)){
            if(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
                    ||c12==g9||c12==g10){
                cout<<c12<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c13>=65&&c13<=90)||(c13>=97&&c13<=122)){
            if(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
                    ||c13==g9||c13==g10){
                cout<<c13<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c14>=65&&c14<=90)||(c14>=97&&c14<=122)){
            if(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
                    ||c14==g9||c14==g10){
                cout<<c14<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c15>=65&&c15<=90)||(c15>=97&&c15<=122)){
            if(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
                    ||c15==g9||c15==g10){
                cout<<c15<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c16>=65&&c16<=90)||(c16>=97&&c16<=122)){
            if(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
                    ||c16==g9||c16==g10){
                cout<<c16<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c17>=65&&c17<=90)||(c17>=97&&c17<=122)){
            if(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
                    ||c17==g9||c17==g10){
                cout<<c17<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c18>=65&&c18<=90)||(c18>=97&&c18<=122)){
            if(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
                    ||c18==g9||c18==g10){
                cout<<c18<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c19>=65&&c19<=90)||(c19>=97&&c19<=122)){
            if(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
                    ||c19==g9||c19==g10){
                cout<<c19<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c20>=65&&c20<=90)||(c20>=97&&c20<=122)){
            if(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
                    ||c20==g9||c20==g10){
                cout<<c20<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }
        cout<<"You only have 2 wrong attempts left"<<endl;
    }if(man==4){     
        cout<<"  -------"<<endl;
        cout<<"  |     |                   ATTEMPTS:"<<g1<<g2<<g3<<g4<<endl; 
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |     @                                                           "<<endl;
        cout<<"  |    _|/                                                          "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"-----                                                               "<<endl;
        cout<<endl;
        if((c1>=65&&c1<=90)||(c1>=97&&c1<=122)){
            if(c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
                    ||c1==g9||c1==g10){
                cout<<c1<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c2>=65&&c2<=90)||(c2>=97&&c2<=122)){
            if(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
                    ||c2==g9||c2==g10){
                cout<<c2<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c3>=65&&c3<=90)||(c3>=97&&c3<=122)){
            if(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
                    ||c3==g9||c3==g10){
                cout<<c3<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c4>=65&&c4<=90)||(c4>=97&&c4<=122)){
            if(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
                    ||c4==g9||c4==g10){
                cout<<c4<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c5>=65&&c5<=90)||(c5>=97&&c5<=122)){
            if(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
                    ||c5==g9||c5==g10){
                cout<<c5<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c6>=65&&c6<=90)||(c6>=97&&c6<=122)){
            if(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
                    ||c6==g9||c6==g10){
                cout<<c6<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c7>=65&&c7<=90)||(c7>=97&&c7<=122)){
            if(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
                    ||c7==g9||c7==g10){
                cout<<c7<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c8>=65&&c8<=90)||(c8>=97&&c8<=122)){
            if(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
                    ||c8==g9||c8==g10){
                cout<<c8<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c9>=65&&c9<=90)||(c9>=97&&c9<=122)){
            if(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
                    ||c9==g9||c9==g10){
                cout<<c9<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c10>=65&&c10<=90)||(c10>=97&&c10<=122)){
            if(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
                    ||c10==g9||c10==g10){
                cout<<c10<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c11>=65&&c11<=90)||(c11>=97&&c11<=122)){
            if(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
                    ||c11==g9||c11==g10){
                cout<<c11<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c12>=65&&c12<=90)||(c12>=97&&c12<=122)){
            if(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
                    ||c12==g9||c12==g10){
                cout<<c12<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c13>=65&&c13<=90)||(c13>=97&&c13<=122)){
            if(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
                    ||c13==g9||c13==g10){
                cout<<c13<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c14>=65&&c14<=90)||(c14>=97&&c14<=122)){
            if(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
                    ||c14==g9||c14==g10){
                cout<<c14<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c15>=65&&c15<=90)||(c15>=97&&c15<=122)){
            if(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
                    ||c15==g9||c15==g10){
                cout<<c15<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c16>=65&&c16<=90)||(c16>=97&&c16<=122)){
            if(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
                    ||c16==g9||c16==g10){
                cout<<c16<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c17>=65&&c17<=90)||(c17>=97&&c17<=122)){
            if(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
                    ||c17==g9||c17==g10){
                cout<<c17<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c18>=65&&c18<=90)||(c18>=97&&c18<=122)){
            if(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
                    ||c18==g9||c18==g10){
                cout<<c18<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c19>=65&&c19<=90)||(c19>=97&&c19<=122)){
            if(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
                    ||c19==g9||c19==g10){
                cout<<c19<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c20>=65&&c20<=90)||(c20>=97&&c20<=122)){
            if(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
                    ||c20==g9||c20==g10){
                cout<<c20<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }
        cout<<"You only have 1 wrong attempt left"<<endl;
    }
    if((c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
            ||c1==g9||c1==g10||c1==1)&&(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
            ||c2==g9||c2==g10||c2==1)&&(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
            ||c3==g9||c3==g10||c3==1)&&(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
            ||c4==g9||c4==g10||c4==1)&&(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
            ||c5==g9||c5==g10||c5==1)&&(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
            ||c6==g9||c6==g10||c6==1)&&(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
            ||c7==g9||c7==g10||c7==1)&&(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
            ||c8==g9||c8==g10||c8==1)&&(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
            ||c9==g9||c9==g10||c9==1)&&(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
            ||c10==g9||c10==g10||c10==1)&&(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
            ||c11==g9||c11==g10||c11==1)&&(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
            ||c12==g9||c12==g10||c12==1)&&(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
            ||c13==g9||c13==g10||c13==1)&&(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
            ||c14==g9||c14==g10||c14==1)&&(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
            ||c15==g9||c15==g10||c15==1)&&(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
            ||c16==g9||c16==g10||c16==1)&&(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
            ||c17==g9||c17==g10||c17==1)&&(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
            ||c18==g9||c18==g10||c18==1)&&(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
            ||c19==g9||c19==g10||c19==1)&&(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
            ||c20==g9||c20==g10||c20==1)){
        cout<<endl;
        for(int i=1;i<=3;i++){
        cout<<"********************************************************************"<<endl;
        }
        cout<<win<<endl;
        cout<<"The word or words were ";
        switch(num){
        case 1:cout<<c1;break;
        case 2:cout<<c1<<c2;break;
        case 3:cout<<c1<<c2<<c3;break;
        case 4:cout<<c1<<c2<<c3<<c4;break;
        case 5:cout<<c1<<c2<<c3<<c4<<c5;break;
        case 6:cout<<c1<<c2<<c3<<c4<<c5<<c6;break;
        case 7:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7;break;
        case 8:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8;break;
        case 9:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9;break;
        case 10:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10;break;
        case 11:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11;break;
        case 12:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12;break;
        case 13:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13;break;
        case 14:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14;break;
        case 15:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15;break;
        case 16:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16;break;
        case 17:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16<<c17;break;
        case 18:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16<<c17<<c18;break;
        case 19:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16<<c17<<c18<<c19;break;
        case 20:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16<<c17<<c18<<c19<<c20;break;
        }
        return 0;
        
    }
    cout<<endl;
    cout<<"Enter guess number 5!!"<<endl;
    cout<<"Enter only one UPPERCASE letter"<<endl;
    cin>>g5;
    for(int i=1;i<=3;i++){
        cout<<"********************************************************************"<<endl;
    }
    if(g5==c1||g5==c2||g5==c3||g5==c4||g5==c5||g5==c6||g5==c7||g5==c2||g5==c9||g5==c10||g5==c11
            ||g5==c12||g5==c13||g5==c14||g5==c15||g5==c16||g5==c17||g5==c18||g5==c19||g5==c20){
        
    }else{
        man=man+1;
    }if(man==0){
        cout<<"  -------"<<endl;
        cout<<"  |     |                   ATTEMPTS:"<<g1<<g2<<g3<<g4<<g5<<endl; 
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"-----                                                               "<<endl;
        cout<<endl;
        if((c1>=65&&c1<=90)||(c1>=97&&c1<=122)){
            if(c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
                    ||c1==g9||c1==g10){
                cout<<c1<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c2>=65&&c2<=90)||(c2>=97&&c2<=122)){
            if(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
                    ||c2==g9||c2==g10){
                cout<<c2<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c3>=65&&c3<=90)||(c3>=97&&c3<=122)){
            if(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
                    ||c3==g9||c3==g10){
                cout<<c3<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c4>=65&&c4<=90)||(c4>=97&&c4<=122)){
            if(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
                    ||c4==g9||c4==g10){
                cout<<c4<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c5>=65&&c5<=90)||(c5>=97&&c5<=122)){
            if(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
                    ||c5==g9||c5==g10){
                cout<<c5<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c6>=65&&c6<=90)||(c6>=97&&c6<=122)){
            if(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
                    ||c6==g9||c6==g10){
                cout<<c6<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c7>=65&&c7<=90)||(c7>=97&&c7<=122)){
            if(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
                    ||c7==g9||c7==g10){
                cout<<c7<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c8>=65&&c8<=90)||(c8>=97&&c8<=122)){
            if(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
                    ||c8==g9||c8==g10){
                cout<<c8<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c9>=65&&c9<=90)||(c9>=97&&c9<=122)){
            if(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
                    ||c9==g9||c9==g10){
                cout<<c9<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c10>=65&&c10<=90)||(c10>=97&&c10<=122)){
            if(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
                    ||c10==g9||c10==g10){
                cout<<c10<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c11>=65&&c11<=90)||(c11>=97&&c11<=122)){
            if(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
                    ||c11==g9||c11==g10){
                cout<<c11<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c12>=65&&c12<=90)||(c12>=97&&c12<=122)){
            if(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
                    ||c12==g9||c12==g10){
                cout<<c12<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c13>=65&&c13<=90)||(c13>=97&&c13<=122)){
            if(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
                    ||c13==g9||c13==g10){
                cout<<c13<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c14>=65&&c14<=90)||(c14>=97&&c14<=122)){
            if(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
                    ||c14==g9||c14==g10){
                cout<<c14<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c15>=65&&c15<=90)||(c15>=97&&c15<=122)){
            if(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
                    ||c15==g9||c15==g10){
                cout<<c15<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c16>=65&&c16<=90)||(c16>=97&&c16<=122)){
            if(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
                    ||c16==g9||c16==g10){
                cout<<c16<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c17>=65&&c17<=90)||(c17>=97&&c17<=122)){
            if(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
                    ||c17==g9||c17==g10){
                cout<<c17<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c18>=65&&c18<=90)||(c18>=97&&c18<=122)){
            if(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
                    ||c18==g9||c18==g10){
                cout<<c18<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c19>=65&&c19<=90)||(c19>=97&&c19<=122)){
            if(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
                    ||c19==g9||c19==g10){
                cout<<c19<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c20>=65&&c20<=90)||(c20>=97&&c20<=122)){
            if(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
                    ||c20==g9||c20==g10){
                cout<<c20<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }
    }if(man==1){     
        cout<<"  -------"<<endl;
        cout<<"  |     |                   ATTEMPTS:"<<g1<<g2<<g3<<g4<<g5<<endl; 
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |     @                                                           "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"-----                                                               "<<endl;
        cout<<endl;
        if((c1>=65&&c1<=90)||(c1>=97&&c1<=122)){
            if(c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
                    ||c1==g9||c1==g10){
                cout<<c1<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c2>=65&&c2<=90)||(c2>=97&&c2<=122)){
            if(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
                    ||c2==g9||c2==g10){
                cout<<c2<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c3>=65&&c3<=90)||(c3>=97&&c3<=122)){
            if(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
                    ||c3==g9||c3==g10){
                cout<<c3<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c4>=65&&c4<=90)||(c4>=97&&c4<=122)){
            if(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
                    ||c4==g9||c4==g10){
                cout<<c4<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c5>=65&&c5<=90)||(c5>=97&&c5<=122)){
            if(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
                    ||c5==g9||c5==g10){
                cout<<c5<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c6>=65&&c6<=90)||(c6>=97&&c6<=122)){
            if(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
                    ||c6==g9||c6==g10){
                cout<<c6<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c7>=65&&c7<=90)||(c7>=97&&c7<=122)){
            if(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
                    ||c7==g9||c7==g10){
                cout<<c7<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c8>=65&&c8<=90)||(c8>=97&&c8<=122)){
            if(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
                    ||c8==g9||c8==g10){
                cout<<c8<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c9>=65&&c9<=90)||(c9>=97&&c9<=122)){
            if(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
                    ||c9==g9||c9==g10){
                cout<<c9<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c10>=65&&c10<=90)||(c10>=97&&c10<=122)){
            if(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
                    ||c10==g9||c10==g10){
                cout<<c10<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c11>=65&&c11<=90)||(c11>=97&&c11<=122)){
            if(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
                    ||c11==g9||c11==g10){
                cout<<c11<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c12>=65&&c12<=90)||(c12>=97&&c12<=122)){
            if(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
                    ||c12==g9||c12==g10){
                cout<<c12<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c13>=65&&c13<=90)||(c13>=97&&c13<=122)){
            if(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
                    ||c13==g9||c13==g10){
                cout<<c13<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c14>=65&&c14<=90)||(c14>=97&&c14<=122)){
            if(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
                    ||c14==g9||c14==g10){
                cout<<c14<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c15>=65&&c15<=90)||(c15>=97&&c15<=122)){
            if(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
                    ||c15==g9||c15==g10){
                cout<<c15<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c16>=65&&c16<=90)||(c16>=97&&c16<=122)){
            if(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
                    ||c16==g9||c16==g10){
                cout<<c16<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c17>=65&&c17<=90)||(c17>=97&&c17<=122)){
            if(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
                    ||c17==g9||c17==g10){
                cout<<c17<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c18>=65&&c18<=90)||(c18>=97&&c18<=122)){
            if(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
                    ||c18==g9||c18==g10){
                cout<<c18<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c19>=65&&c19<=90)||(c19>=97&&c19<=122)){
            if(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
                    ||c19==g9||c19==g10){
                cout<<c19<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c20>=65&&c20<=90)||(c20>=97&&c20<=122)){
            if(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
                    ||c20==g9||c20==g10){
                cout<<c20<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }
        cout<<"You only have 4 wrong attempts left"<<endl;
    }if(man==2){     
        cout<<"  -------"<<endl;
        cout<<"  |     |                   ATTEMPTS:"<<g1<<g2<<g3<<g4<<g5<<endl; 
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |     @                                                           "<<endl;
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"-----                                                               "<<endl;
        cout<<endl;
        if((c1>=65&&c1<=90)||(c1>=97&&c1<=122)){
            if(c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
                    ||c1==g9||c1==g10){
                cout<<c1<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c2>=65&&c2<=90)||(c2>=97&&c2<=122)){
            if(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
                    ||c2==g9||c2==g10){
                cout<<c2<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c3>=65&&c3<=90)||(c3>=97&&c3<=122)){
            if(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
                    ||c3==g9||c3==g10){
                cout<<c3<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c4>=65&&c4<=90)||(c4>=97&&c4<=122)){
            if(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
                    ||c4==g9||c4==g10){
                cout<<c4<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c5>=65&&c5<=90)||(c5>=97&&c5<=122)){
            if(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
                    ||c5==g9||c5==g10){
                cout<<c5<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c6>=65&&c6<=90)||(c6>=97&&c6<=122)){
            if(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
                    ||c6==g9||c6==g10){
                cout<<c6<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c7>=65&&c7<=90)||(c7>=97&&c7<=122)){
            if(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
                    ||c7==g9||c7==g10){
                cout<<c7<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c8>=65&&c8<=90)||(c8>=97&&c8<=122)){
            if(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
                    ||c8==g9||c8==g10){
                cout<<c8<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c9>=65&&c9<=90)||(c9>=97&&c9<=122)){
            if(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
                    ||c9==g9||c9==g10){
                cout<<c9<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c10>=65&&c10<=90)||(c10>=97&&c10<=122)){
            if(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
                    ||c10==g9||c10==g10){
                cout<<c10<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c11>=65&&c11<=90)||(c11>=97&&c11<=122)){
            if(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
                    ||c11==g9||c11==g10){
                cout<<c11<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c12>=65&&c12<=90)||(c12>=97&&c12<=122)){
            if(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
                    ||c12==g9||c12==g10){
                cout<<c12<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c13>=65&&c13<=90)||(c13>=97&&c13<=122)){
            if(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
                    ||c13==g9||c13==g10){
                cout<<c13<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c14>=65&&c14<=90)||(c14>=97&&c14<=122)){
            if(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
                    ||c14==g9||c14==g10){
                cout<<c14<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c15>=65&&c15<=90)||(c15>=97&&c15<=122)){
            if(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
                    ||c15==g9||c15==g10){
                cout<<c15<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c16>=65&&c16<=90)||(c16>=97&&c16<=122)){
            if(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
                    ||c16==g9||c16==g10){
                cout<<c16<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c17>=65&&c17<=90)||(c17>=97&&c17<=122)){
            if(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
                    ||c17==g9||c17==g10){
                cout<<c17<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c18>=65&&c18<=90)||(c18>=97&&c18<=122)){
            if(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
                    ||c18==g9||c18==g10){
                cout<<c18<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c19>=65&&c19<=90)||(c19>=97&&c19<=122)){
            if(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
                    ||c19==g9||c19==g10){
                cout<<c19<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c20>=65&&c20<=90)||(c20>=97&&c20<=122)){
            if(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
                    ||c20==g9||c20==g10){
                cout<<c20<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }
        cout<<"You only have 3 wrong attempts left"<<endl;
    }if(man==3){     
        cout<<"  -------"<<endl;
        cout<<"  |     |                   ATTEMPTS:"<<g1<<g2<<g3<<g4<<g5<<endl; 
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |     @                                                           "<<endl;
        cout<<"  |     |/                                                          "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"-----                                                               "<<endl;
        cout<<endl;
        if((c1>=65&&c1<=90)||(c1>=97&&c1<=122)){
            if(c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
                    ||c1==g9||c1==g10){
                cout<<c1<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c2>=65&&c2<=90)||(c2>=97&&c2<=122)){
            if(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
                    ||c2==g9||c2==g10){
                cout<<c2<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c3>=65&&c3<=90)||(c3>=97&&c3<=122)){
            if(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
                    ||c3==g9||c3==g10){
                cout<<c3<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c4>=65&&c4<=90)||(c4>=97&&c4<=122)){
            if(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
                    ||c4==g9||c4==g10){
                cout<<c4<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c5>=65&&c5<=90)||(c5>=97&&c5<=122)){
            if(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
                    ||c5==g9||c5==g10){
                cout<<c5<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c6>=65&&c6<=90)||(c6>=97&&c6<=122)){
            if(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
                    ||c6==g9||c6==g10){
                cout<<c6<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c7>=65&&c7<=90)||(c7>=97&&c7<=122)){
            if(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
                    ||c7==g9||c7==g10){
                cout<<c7<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c8>=65&&c8<=90)||(c8>=97&&c8<=122)){
            if(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
                    ||c8==g9||c8==g10){
                cout<<c8<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c9>=65&&c9<=90)||(c9>=97&&c9<=122)){
            if(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
                    ||c9==g9||c9==g10){
                cout<<c9<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c10>=65&&c10<=90)||(c10>=97&&c10<=122)){
            if(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
                    ||c10==g9||c10==g10){
                cout<<c10<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c11>=65&&c11<=90)||(c11>=97&&c11<=122)){
            if(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
                    ||c11==g9||c11==g10){
                cout<<c11<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c12>=65&&c12<=90)||(c12>=97&&c12<=122)){
            if(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
                    ||c12==g9||c12==g10){
                cout<<c12<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c13>=65&&c13<=90)||(c13>=97&&c13<=122)){
            if(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
                    ||c13==g9||c13==g10){
                cout<<c13<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c14>=65&&c14<=90)||(c14>=97&&c14<=122)){
            if(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
                    ||c14==g9||c14==g10){
                cout<<c14<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c15>=65&&c15<=90)||(c15>=97&&c15<=122)){
            if(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
                    ||c15==g9||c15==g10){
                cout<<c15<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c16>=65&&c16<=90)||(c16>=97&&c16<=122)){
            if(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
                    ||c16==g9||c16==g10){
                cout<<c16<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c17>=65&&c17<=90)||(c17>=97&&c17<=122)){
            if(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
                    ||c17==g9||c17==g10){
                cout<<c17<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c18>=65&&c18<=90)||(c18>=97&&c18<=122)){
            if(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
                    ||c18==g9||c18==g10){
                cout<<c18<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c19>=65&&c19<=90)||(c19>=97&&c19<=122)){
            if(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
                    ||c19==g9||c19==g10){
                cout<<c19<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c20>=65&&c20<=90)||(c20>=97&&c20<=122)){
            if(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
                    ||c20==g9||c20==g10){
                cout<<c20<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }
        cout<<"You only have 2 wrong attempts left"<<endl;
    }if(man==4){     
        cout<<"  -------"<<endl;
        cout<<"  |     |                   ATTEMPTS:"<<g1<<g2<<g3<<g4<<g5<<endl; 
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |     @                                                           "<<endl;
        cout<<"  |    _|/                                                          "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"-----                                                               "<<endl;
        cout<<endl;
        if((c1>=65&&c1<=90)||(c1>=97&&c1<=122)){
            if(c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
                    ||c1==g9||c1==g10){
                cout<<c1<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c2>=65&&c2<=90)||(c2>=97&&c2<=122)){
            if(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
                    ||c2==g9||c2==g10){
                cout<<c2<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c3>=65&&c3<=90)||(c3>=97&&c3<=122)){
            if(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
                    ||c3==g9||c3==g10){
                cout<<c3<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c4>=65&&c4<=90)||(c4>=97&&c4<=122)){
            if(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
                    ||c4==g9||c4==g10){
                cout<<c4<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c5>=65&&c5<=90)||(c5>=97&&c5<=122)){
            if(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
                    ||c5==g9||c5==g10){
                cout<<c5<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c6>=65&&c6<=90)||(c6>=97&&c6<=122)){
            if(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
                    ||c6==g9||c6==g10){
                cout<<c6<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c7>=65&&c7<=90)||(c7>=97&&c7<=122)){
            if(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
                    ||c7==g9||c7==g10){
                cout<<c7<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c8>=65&&c8<=90)||(c8>=97&&c8<=122)){
            if(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
                    ||c8==g9||c8==g10){
                cout<<c8<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c9>=65&&c9<=90)||(c9>=97&&c9<=122)){
            if(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
                    ||c9==g9||c9==g10){
                cout<<c9<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c10>=65&&c10<=90)||(c10>=97&&c10<=122)){
            if(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
                    ||c10==g9||c10==g10){
                cout<<c10<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c11>=65&&c11<=90)||(c11>=97&&c11<=122)){
            if(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
                    ||c11==g9||c11==g10){
                cout<<c11<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c12>=65&&c12<=90)||(c12>=97&&c12<=122)){
            if(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
                    ||c12==g9||c12==g10){
                cout<<c12<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c13>=65&&c13<=90)||(c13>=97&&c13<=122)){
            if(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
                    ||c13==g9||c13==g10){
                cout<<c13<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c14>=65&&c14<=90)||(c14>=97&&c14<=122)){
            if(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
                    ||c14==g9||c14==g10){
                cout<<c14<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c15>=65&&c15<=90)||(c15>=97&&c15<=122)){
            if(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
                    ||c15==g9||c15==g10){
                cout<<c15<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c16>=65&&c16<=90)||(c16>=97&&c16<=122)){
            if(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
                    ||c16==g9||c16==g10){
                cout<<c16<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c17>=65&&c17<=90)||(c17>=97&&c17<=122)){
            if(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
                    ||c17==g9||c17==g10){
                cout<<c17<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c18>=65&&c18<=90)||(c18>=97&&c18<=122)){
            if(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
                    ||c18==g9||c18==g10){
                cout<<c18<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c19>=65&&c19<=90)||(c19>=97&&c19<=122)){
            if(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
                    ||c19==g9||c19==g10){
                cout<<c19<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c20>=65&&c20<=90)||(c20>=97&&c20<=122)){
            if(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
                    ||c20==g9||c20==g10){
                cout<<c20<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }
        cout<<"You only have 1 wrong attempt left"<<endl;
    }if(man==5){     
        cout<<"  -------"<<endl;
        cout<<"  |     |                   ATTEMPTS:"<<g1<<g2<<g3<<g4<<g5<<endl; 
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |     @                                                           "<<endl;
        cout<<"  |    _|/                                                          "<<endl;
        cout<<"  |    /                                                            "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"-----                                                               "<<endl;
        cout<<endl;
        if((c1>=65&&c1<=90)||(c1>=97&&c1<=122)){
            if(c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
                    ||c1==g9||c1==g10){
                cout<<c1<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c2>=65&&c2<=90)||(c2>=97&&c2<=122)){
            if(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
                    ||c2==g9||c2==g10){
                cout<<c2<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c3>=65&&c3<=90)||(c3>=97&&c3<=122)){
            if(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
                    ||c3==g9||c3==g10){
                cout<<c3<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c4>=65&&c4<=90)||(c4>=97&&c4<=122)){
            if(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
                    ||c4==g9||c4==g10){
                cout<<c4<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c5>=65&&c5<=90)||(c5>=97&&c5<=122)){
            if(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
                    ||c5==g9||c5==g10){
                cout<<c5<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c6>=65&&c6<=90)||(c6>=97&&c6<=122)){
            if(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
                    ||c6==g9||c6==g10){
                cout<<c6<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c7>=65&&c7<=90)||(c7>=97&&c7<=122)){
            if(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
                    ||c7==g9||c7==g10){
                cout<<c7<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c8>=65&&c8<=90)||(c8>=97&&c8<=122)){
            if(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
                    ||c8==g9||c8==g10){
                cout<<c8<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c9>=65&&c9<=90)||(c9>=97&&c9<=122)){
            if(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
                    ||c9==g9||c9==g10){
                cout<<c9<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c10>=65&&c10<=90)||(c10>=97&&c10<=122)){
            if(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
                    ||c10==g9||c10==g10){
                cout<<c10<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c11>=65&&c11<=90)||(c11>=97&&c11<=122)){
            if(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
                    ||c11==g9||c11==g10){
                cout<<c11<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c12>=65&&c12<=90)||(c12>=97&&c12<=122)){
            if(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
                    ||c12==g9||c12==g10){
                cout<<c12<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c13>=65&&c13<=90)||(c13>=97&&c13<=122)){
            if(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
                    ||c13==g9||c13==g10){
                cout<<c13<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c14>=65&&c14<=90)||(c14>=97&&c14<=122)){
            if(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
                    ||c14==g9||c14==g10){
                cout<<c14<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c15>=65&&c15<=90)||(c15>=97&&c15<=122)){
            if(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
                    ||c15==g9||c15==g10){
                cout<<c15<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c16>=65&&c16<=90)||(c16>=97&&c16<=122)){
            if(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
                    ||c16==g9||c16==g10){
                cout<<c16<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c17>=65&&c17<=90)||(c17>=97&&c17<=122)){
            if(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
                    ||c17==g9||c17==g10){
                cout<<c17<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c18>=65&&c18<=90)||(c18>=97&&c18<=122)){
            if(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
                    ||c18==g9||c18==g10){
                cout<<c18<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c19>=65&&c19<=90)||(c19>=97&&c19<=122)){
            if(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
                    ||c19==g9||c19==g10){
                cout<<c19<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c20>=65&&c20<=90)||(c20>=97&&c20<=122)){
            if(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
                    ||c20==g9||c20==g10){
                cout<<c20<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }
        cout<<"You only have 0 wrong attempts left"<<endl;
    }
    if((c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
            ||c1==g9||c1==g10||c1==1)&&(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
            ||c2==g9||c2==g10||c2==1)&&(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
            ||c3==g9||c3==g10||c3==1)&&(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
            ||c4==g9||c4==g10||c4==1)&&(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
            ||c5==g9||c5==g10||c5==1)&&(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
            ||c6==g9||c6==g10||c6==1)&&(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
            ||c7==g9||c7==g10||c7==1)&&(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
            ||c8==g9||c8==g10||c8==1)&&(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
            ||c9==g9||c9==g10||c9==1)&&(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
            ||c10==g9||c10==g10||c10==1)&&(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
            ||c11==g9||c11==g10||c11==1)&&(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
            ||c12==g9||c12==g10||c12==1)&&(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
            ||c13==g9||c13==g10||c13==1)&&(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
            ||c14==g9||c14==g10||c14==1)&&(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
            ||c15==g9||c15==g10||c15==1)&&(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
            ||c16==g9||c16==g10||c16==1)&&(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
            ||c17==g9||c17==g10||c17==1)&&(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
            ||c18==g9||c18==g10||c18==1)&&(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
            ||c19==g9||c19==g10||c19==1)&&(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
            ||c20==g9||c20==g10||c20==1)){
        cout<<endl;
        for(int i=1;i<=3;i++){
        cout<<"********************************************************************"<<endl;
        }
        cout<<win<<endl;
        cout<<"The word or words were ";
        switch(num){
        case 1:cout<<c1;break;
        case 2:cout<<c1<<c2;break;
        case 3:cout<<c1<<c2<<c3;break;
        case 4:cout<<c1<<c2<<c3<<c4;break;
        case 5:cout<<c1<<c2<<c3<<c4<<c5;break;
        case 6:cout<<c1<<c2<<c3<<c4<<c5<<c6;break;
        case 7:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7;break;
        case 8:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8;break;
        case 9:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9;break;
        case 10:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10;break;
        case 11:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11;break;
        case 12:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12;break;
        case 13:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13;break;
        case 14:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14;break;
        case 15:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15;break;
        case 16:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16;break;
        case 17:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16<<c17;break;
        case 18:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16<<c17<<c18;break;
        case 19:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16<<c17<<c18<<c19;break;
        case 20:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16<<c17<<c18<<c19<<c20;break;
        }
        return 0;
        
    }
    cout<<endl;
    cout<<"Enter guess number 6!!"<<endl;
    cout<<"Enter only one UPPERCASE letter"<<endl;
    cin>>g6;
    for(int i=1;i<=3;i++){
        cout<<"********************************************************************"<<endl;
    }
    if(g6==c1||g6==c2||g6==c3||g6==c4||g6==c5||g6==c6||g6==c7||g6==c2||g6==c9||g6==c10||g6==c11
            ||g6==c12||g6==c13||g6==c14||g6==c15||g6==c16||g6==c17||g6==c18||g6==c19||g6==c20){
        
    }else{
        man=man+1;
    }if(man==0){
        cout<<"  -------"<<endl;
        cout<<"  |     |                   ATTEMPTS:"<<g1<<g2<<g3<<g4<<g5<<g6<<endl; 
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"-----                                                               "<<endl;
        cout<<endl;
        if((c1>=65&&c1<=90)||(c1>=97&&c1<=122)){
            if(c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
                    ||c1==g9||c1==g10){
                cout<<c1<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c2>=65&&c2<=90)||(c2>=97&&c2<=122)){
            if(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
                    ||c2==g9||c2==g10){
                cout<<c2<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c3>=65&&c3<=90)||(c3>=97&&c3<=122)){
            if(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
                    ||c3==g9||c3==g10){
                cout<<c3<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c4>=65&&c4<=90)||(c4>=97&&c4<=122)){
            if(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
                    ||c4==g9||c4==g10){
                cout<<c4<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c5>=65&&c5<=90)||(c5>=97&&c5<=122)){
            if(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
                    ||c5==g9||c5==g10){
                cout<<c5<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c6>=65&&c6<=90)||(c6>=97&&c6<=122)){
            if(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
                    ||c6==g9||c6==g10){
                cout<<c6<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c7>=65&&c7<=90)||(c7>=97&&c7<=122)){
            if(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
                    ||c7==g9||c7==g10){
                cout<<c7<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c8>=65&&c8<=90)||(c8>=97&&c8<=122)){
            if(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
                    ||c8==g9||c8==g10){
                cout<<c8<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c9>=65&&c9<=90)||(c9>=97&&c9<=122)){
            if(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
                    ||c9==g9||c9==g10){
                cout<<c9<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c10>=65&&c10<=90)||(c10>=97&&c10<=122)){
            if(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
                    ||c10==g9||c10==g10){
                cout<<c10<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c11>=65&&c11<=90)||(c11>=97&&c11<=122)){
            if(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
                    ||c11==g9||c11==g10){
                cout<<c11<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c12>=65&&c12<=90)||(c12>=97&&c12<=122)){
            if(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
                    ||c12==g9||c12==g10){
                cout<<c12<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c13>=65&&c13<=90)||(c13>=97&&c13<=122)){
            if(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
                    ||c13==g9||c13==g10){
                cout<<c13<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c14>=65&&c14<=90)||(c14>=97&&c14<=122)){
            if(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
                    ||c14==g9||c14==g10){
                cout<<c14<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c15>=65&&c15<=90)||(c15>=97&&c15<=122)){
            if(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
                    ||c15==g9||c15==g10){
                cout<<c15<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c16>=65&&c16<=90)||(c16>=97&&c16<=122)){
            if(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
                    ||c16==g9||c16==g10){
                cout<<c16<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c17>=65&&c17<=90)||(c17>=97&&c17<=122)){
            if(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
                    ||c17==g9||c17==g10){
                cout<<c17<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c18>=65&&c18<=90)||(c18>=97&&c18<=122)){
            if(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
                    ||c18==g9||c18==g10){
                cout<<c18<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c19>=65&&c19<=90)||(c19>=97&&c19<=122)){
            if(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
                    ||c19==g9||c19==g10){
                cout<<c19<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c20>=65&&c20<=90)||(c20>=97&&c20<=122)){
            if(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
                    ||c20==g9||c20==g10){
                cout<<c20<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }
    }if(man==1){     
        cout<<"  -------"<<endl;
        cout<<"  |     |                   ATTEMPTS:"<<g1<<g2<<g3<<g4<<g5<<g6<<endl; 
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |     @                                                           "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"-----                                                               "<<endl;
        cout<<endl;
        if((c1>=65&&c1<=90)||(c1>=97&&c1<=122)){
            if(c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
                    ||c1==g9||c1==g10){
                cout<<c1<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c2>=65&&c2<=90)||(c2>=97&&c2<=122)){
            if(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
                    ||c2==g9||c2==g10){
                cout<<c2<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c3>=65&&c3<=90)||(c3>=97&&c3<=122)){
            if(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
                    ||c3==g9||c3==g10){
                cout<<c3<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c4>=65&&c4<=90)||(c4>=97&&c4<=122)){
            if(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
                    ||c4==g9||c4==g10){
                cout<<c4<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c5>=65&&c5<=90)||(c5>=97&&c5<=122)){
            if(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
                    ||c5==g9||c5==g10){
                cout<<c5<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c6>=65&&c6<=90)||(c6>=97&&c6<=122)){
            if(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
                    ||c6==g9||c6==g10){
                cout<<c6<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c7>=65&&c7<=90)||(c7>=97&&c7<=122)){
            if(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
                    ||c7==g9||c7==g10){
                cout<<c7<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c8>=65&&c8<=90)||(c8>=97&&c8<=122)){
            if(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
                    ||c8==g9||c8==g10){
                cout<<c8<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c9>=65&&c9<=90)||(c9>=97&&c9<=122)){
            if(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
                    ||c9==g9||c9==g10){
                cout<<c9<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c10>=65&&c10<=90)||(c10>=97&&c10<=122)){
            if(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
                    ||c10==g9||c10==g10){
                cout<<c10<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c11>=65&&c11<=90)||(c11>=97&&c11<=122)){
            if(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
                    ||c11==g9||c11==g10){
                cout<<c11<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c12>=65&&c12<=90)||(c12>=97&&c12<=122)){
            if(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
                    ||c12==g9||c12==g10){
                cout<<c12<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c13>=65&&c13<=90)||(c13>=97&&c13<=122)){
            if(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
                    ||c13==g9||c13==g10){
                cout<<c13<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c14>=65&&c14<=90)||(c14>=97&&c14<=122)){
            if(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
                    ||c14==g9||c14==g10){
                cout<<c14<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c15>=65&&c15<=90)||(c15>=97&&c15<=122)){
            if(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
                    ||c15==g9||c15==g10){
                cout<<c15<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c16>=65&&c16<=90)||(c16>=97&&c16<=122)){
            if(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
                    ||c16==g9||c16==g10){
                cout<<c16<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c17>=65&&c17<=90)||(c17>=97&&c17<=122)){
            if(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
                    ||c17==g9||c17==g10){
                cout<<c17<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c18>=65&&c18<=90)||(c18>=97&&c18<=122)){
            if(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
                    ||c18==g9||c18==g10){
                cout<<c18<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c19>=65&&c19<=90)||(c19>=97&&c19<=122)){
            if(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
                    ||c19==g9||c19==g10){
                cout<<c19<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c20>=65&&c20<=90)||(c20>=97&&c20<=122)){
            if(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
                    ||c20==g9||c20==g10){
                cout<<c20<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }
        cout<<"You only have 4 wrong attempts left"<<endl;
    }if(man==2){     
        cout<<"  -------"<<endl;
        cout<<"  |     |                   ATTEMPTS:"<<g1<<g2<<g3<<g4<<g5<<g6<<endl; 
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |     @                                                           "<<endl;
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"-----                                                               "<<endl;
        cout<<endl;
        if((c1>=65&&c1<=90)||(c1>=97&&c1<=122)){
            if(c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
                    ||c1==g9||c1==g10){
                cout<<c1<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c2>=65&&c2<=90)||(c2>=97&&c2<=122)){
            if(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
                    ||c2==g9||c2==g10){
                cout<<c2<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c3>=65&&c3<=90)||(c3>=97&&c3<=122)){
            if(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
                    ||c3==g9||c3==g10){
                cout<<c3<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c4>=65&&c4<=90)||(c4>=97&&c4<=122)){
            if(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
                    ||c4==g9||c4==g10){
                cout<<c4<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c5>=65&&c5<=90)||(c5>=97&&c5<=122)){
            if(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
                    ||c5==g9||c5==g10){
                cout<<c5<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c6>=65&&c6<=90)||(c6>=97&&c6<=122)){
            if(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
                    ||c6==g9||c6==g10){
                cout<<c6<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c7>=65&&c7<=90)||(c7>=97&&c7<=122)){
            if(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
                    ||c7==g9||c7==g10){
                cout<<c7<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c8>=65&&c8<=90)||(c8>=97&&c8<=122)){
            if(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
                    ||c8==g9||c8==g10){
                cout<<c8<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c9>=65&&c9<=90)||(c9>=97&&c9<=122)){
            if(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
                    ||c9==g9||c9==g10){
                cout<<c9<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c10>=65&&c10<=90)||(c10>=97&&c10<=122)){
            if(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
                    ||c10==g9||c10==g10){
                cout<<c10<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c11>=65&&c11<=90)||(c11>=97&&c11<=122)){
            if(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
                    ||c11==g9||c11==g10){
                cout<<c11<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c12>=65&&c12<=90)||(c12>=97&&c12<=122)){
            if(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
                    ||c12==g9||c12==g10){
                cout<<c12<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c13>=65&&c13<=90)||(c13>=97&&c13<=122)){
            if(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
                    ||c13==g9||c13==g10){
                cout<<c13<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c14>=65&&c14<=90)||(c14>=97&&c14<=122)){
            if(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
                    ||c14==g9||c14==g10){
                cout<<c14<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c15>=65&&c15<=90)||(c15>=97&&c15<=122)){
            if(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
                    ||c15==g9||c15==g10){
                cout<<c15<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c16>=65&&c16<=90)||(c16>=97&&c16<=122)){
            if(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
                    ||c16==g9||c16==g10){
                cout<<c16<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c17>=65&&c17<=90)||(c17>=97&&c17<=122)){
            if(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
                    ||c17==g9||c17==g10){
                cout<<c17<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c18>=65&&c18<=90)||(c18>=97&&c18<=122)){
            if(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
                    ||c18==g9||c18==g10){
                cout<<c18<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c19>=65&&c19<=90)||(c19>=97&&c19<=122)){
            if(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
                    ||c19==g9||c19==g10){
                cout<<c19<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c20>=65&&c20<=90)||(c20>=97&&c20<=122)){
            if(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
                    ||c20==g9||c20==g10){
                cout<<c20<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }
        cout<<"You only have 3 wrong attempts left"<<endl;
    }if(man==3){     
        cout<<"  -------"<<endl;
        cout<<"  |     |                   ATTEMPTS:"<<g1<<g2<<g3<<g4<<g5<<g6<<endl; 
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |     @                                                           "<<endl;
        cout<<"  |     |/                                                          "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"-----                                                               "<<endl;
        cout<<endl;
        if((c1>=65&&c1<=90)||(c1>=97&&c1<=122)){
            if(c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
                    ||c1==g9||c1==g10){
                cout<<c1<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c2>=65&&c2<=90)||(c2>=97&&c2<=122)){
            if(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
                    ||c2==g9||c2==g10){
                cout<<c2<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c3>=65&&c3<=90)||(c3>=97&&c3<=122)){
            if(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
                    ||c3==g9||c3==g10){
                cout<<c3<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c4>=65&&c4<=90)||(c4>=97&&c4<=122)){
            if(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
                    ||c4==g9||c4==g10){
                cout<<c4<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c5>=65&&c5<=90)||(c5>=97&&c5<=122)){
            if(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
                    ||c5==g9||c5==g10){
                cout<<c5<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c6>=65&&c6<=90)||(c6>=97&&c6<=122)){
            if(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
                    ||c6==g9||c6==g10){
                cout<<c6<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c7>=65&&c7<=90)||(c7>=97&&c7<=122)){
            if(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
                    ||c7==g9||c7==g10){
                cout<<c7<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c8>=65&&c8<=90)||(c8>=97&&c8<=122)){
            if(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
                    ||c8==g9||c8==g10){
                cout<<c8<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c9>=65&&c9<=90)||(c9>=97&&c9<=122)){
            if(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
                    ||c9==g9||c9==g10){
                cout<<c9<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c10>=65&&c10<=90)||(c10>=97&&c10<=122)){
            if(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
                    ||c10==g9||c10==g10){
                cout<<c10<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c11>=65&&c11<=90)||(c11>=97&&c11<=122)){
            if(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
                    ||c11==g9||c11==g10){
                cout<<c11<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c12>=65&&c12<=90)||(c12>=97&&c12<=122)){
            if(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
                    ||c12==g9||c12==g10){
                cout<<c12<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c13>=65&&c13<=90)||(c13>=97&&c13<=122)){
            if(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
                    ||c13==g9||c13==g10){
                cout<<c13<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c14>=65&&c14<=90)||(c14>=97&&c14<=122)){
            if(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
                    ||c14==g9||c14==g10){
                cout<<c14<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c15>=65&&c15<=90)||(c15>=97&&c15<=122)){
            if(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
                    ||c15==g9||c15==g10){
                cout<<c15<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c16>=65&&c16<=90)||(c16>=97&&c16<=122)){
            if(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
                    ||c16==g9||c16==g10){
                cout<<c16<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c17>=65&&c17<=90)||(c17>=97&&c17<=122)){
            if(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
                    ||c17==g9||c17==g10){
                cout<<c17<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c18>=65&&c18<=90)||(c18>=97&&c18<=122)){
            if(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
                    ||c18==g9||c18==g10){
                cout<<c18<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c19>=65&&c19<=90)||(c19>=97&&c19<=122)){
            if(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
                    ||c19==g9||c19==g10){
                cout<<c19<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c20>=65&&c20<=90)||(c20>=97&&c20<=122)){
            if(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
                    ||c20==g9||c20==g10){
                cout<<c20<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }
        cout<<"You only have 2 wrong attempts left"<<endl;
    }if(man==4){     
        cout<<"  -------"<<endl;
        cout<<"  |     |                   ATTEMPTS:"<<g1<<g2<<g3<<g4<<g5<<g6<<endl; 
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |     @                                                           "<<endl;
        cout<<"  |    _|/                                                          "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"-----                                                               "<<endl;
        cout<<endl;
        if((c1>=65&&c1<=90)||(c1>=97&&c1<=122)){
            if(c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
                    ||c1==g9||c1==g10){
                cout<<c1<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c2>=65&&c2<=90)||(c2>=97&&c2<=122)){
            if(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
                    ||c2==g9||c2==g10){
                cout<<c2<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c3>=65&&c3<=90)||(c3>=97&&c3<=122)){
            if(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
                    ||c3==g9||c3==g10){
                cout<<c3<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c4>=65&&c4<=90)||(c4>=97&&c4<=122)){
            if(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
                    ||c4==g9||c4==g10){
                cout<<c4<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c5>=65&&c5<=90)||(c5>=97&&c5<=122)){
            if(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
                    ||c5==g9||c5==g10){
                cout<<c5<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c6>=65&&c6<=90)||(c6>=97&&c6<=122)){
            if(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
                    ||c6==g9||c6==g10){
                cout<<c6<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c7>=65&&c7<=90)||(c7>=97&&c7<=122)){
            if(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
                    ||c7==g9||c7==g10){
                cout<<c7<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c8>=65&&c8<=90)||(c8>=97&&c8<=122)){
            if(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
                    ||c8==g9||c8==g10){
                cout<<c8<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c9>=65&&c9<=90)||(c9>=97&&c9<=122)){
            if(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
                    ||c9==g9||c9==g10){
                cout<<c9<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c10>=65&&c10<=90)||(c10>=97&&c10<=122)){
            if(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
                    ||c10==g9||c10==g10){
                cout<<c10<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c11>=65&&c11<=90)||(c11>=97&&c11<=122)){
            if(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
                    ||c11==g9||c11==g10){
                cout<<c11<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c12>=65&&c12<=90)||(c12>=97&&c12<=122)){
            if(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
                    ||c12==g9||c12==g10){
                cout<<c12<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c13>=65&&c13<=90)||(c13>=97&&c13<=122)){
            if(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
                    ||c13==g9||c13==g10){
                cout<<c13<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c14>=65&&c14<=90)||(c14>=97&&c14<=122)){
            if(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
                    ||c14==g9||c14==g10){
                cout<<c14<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c15>=65&&c15<=90)||(c15>=97&&c15<=122)){
            if(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
                    ||c15==g9||c15==g10){
                cout<<c15<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c16>=65&&c16<=90)||(c16>=97&&c16<=122)){
            if(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
                    ||c16==g9||c16==g10){
                cout<<c16<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c17>=65&&c17<=90)||(c17>=97&&c17<=122)){
            if(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
                    ||c17==g9||c17==g10){
                cout<<c17<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c18>=65&&c18<=90)||(c18>=97&&c18<=122)){
            if(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
                    ||c18==g9||c18==g10){
                cout<<c18<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c19>=65&&c19<=90)||(c19>=97&&c19<=122)){
            if(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
                    ||c19==g9||c19==g10){
                cout<<c19<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c20>=65&&c20<=90)||(c20>=97&&c20<=122)){
            if(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
                    ||c20==g9||c20==g10){
                cout<<c20<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }
        cout<<"You only have 1 wrong attempt left"<<endl;
    }if(man==5){     
        cout<<"  -------"<<endl;
        cout<<"  |     |                   ATTEMPTS:"<<g1<<g2<<g3<<g4<<g5<<g6<<endl; 
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |     @                                                           "<<endl;
        cout<<"  |    _|/                                                          "<<endl;
        cout<<"  |    /                                                            "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"-----                                                               "<<endl;
        cout<<endl;
        if((c1>=65&&c1<=90)||(c1>=97&&c1<=122)){
            if(c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
                    ||c1==g9||c1==g10){
                cout<<c1<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c2>=65&&c2<=90)||(c2>=97&&c2<=122)){
            if(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
                    ||c2==g9||c2==g10){
                cout<<c2<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c3>=65&&c3<=90)||(c3>=97&&c3<=122)){
            if(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
                    ||c3==g9||c3==g10){
                cout<<c3<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c4>=65&&c4<=90)||(c4>=97&&c4<=122)){
            if(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
                    ||c4==g9||c4==g10){
                cout<<c4<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c5>=65&&c5<=90)||(c5>=97&&c5<=122)){
            if(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
                    ||c5==g9||c5==g10){
                cout<<c5<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c6>=65&&c6<=90)||(c6>=97&&c6<=122)){
            if(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
                    ||c6==g9||c6==g10){
                cout<<c6<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c7>=65&&c7<=90)||(c7>=97&&c7<=122)){
            if(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
                    ||c7==g9||c7==g10){
                cout<<c7<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c8>=65&&c8<=90)||(c8>=97&&c8<=122)){
            if(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
                    ||c8==g9||c8==g10){
                cout<<c8<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c9>=65&&c9<=90)||(c9>=97&&c9<=122)){
            if(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
                    ||c9==g9||c9==g10){
                cout<<c9<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c10>=65&&c10<=90)||(c10>=97&&c10<=122)){
            if(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
                    ||c10==g9||c10==g10){
                cout<<c10<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c11>=65&&c11<=90)||(c11>=97&&c11<=122)){
            if(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
                    ||c11==g9||c11==g10){
                cout<<c11<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c12>=65&&c12<=90)||(c12>=97&&c12<=122)){
            if(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
                    ||c12==g9||c12==g10){
                cout<<c12<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c13>=65&&c13<=90)||(c13>=97&&c13<=122)){
            if(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
                    ||c13==g9||c13==g10){
                cout<<c13<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c14>=65&&c14<=90)||(c14>=97&&c14<=122)){
            if(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
                    ||c14==g9||c14==g10){
                cout<<c14<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c15>=65&&c15<=90)||(c15>=97&&c15<=122)){
            if(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
                    ||c15==g9||c15==g10){
                cout<<c15<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c16>=65&&c16<=90)||(c16>=97&&c16<=122)){
            if(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
                    ||c16==g9||c16==g10){
                cout<<c16<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c17>=65&&c17<=90)||(c17>=97&&c17<=122)){
            if(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
                    ||c17==g9||c17==g10){
                cout<<c17<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c18>=65&&c18<=90)||(c18>=97&&c18<=122)){
            if(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
                    ||c18==g9||c18==g10){
                cout<<c18<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c19>=65&&c19<=90)||(c19>=97&&c19<=122)){
            if(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
                    ||c19==g9||c19==g10){
                cout<<c19<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c20>=65&&c20<=90)||(c20>=97&&c20<=122)){
            if(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
                    ||c20==g9||c20==g10){
                cout<<c20<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }
        cout<<"You only have 0 wrong attempts left"<<endl;
    }if(man==6){     
        cout<<"  -------"<<endl;
        cout<<"  |     |                   ATTEMPTS:"<<g1<<g2<<g3<<g4<<g5<<g6<<endl; 
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |     @                                                           "<<endl;
        cout<<"  |    _|/                                                          "<<endl;
        cout<<"  |    /|                                                           "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"-----                                                               "<<endl;
        cout<<endl;
        if((c1>=65&&c1<=90)||(c1>=97&&c1<=122)){
            if(c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
                    ||c1==g9||c1==g10){
                cout<<c1<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c2>=65&&c2<=90)||(c2>=97&&c2<=122)){
            if(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
                    ||c2==g9||c2==g10){
                cout<<c2<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c3>=65&&c3<=90)||(c3>=97&&c3<=122)){
            if(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
                    ||c3==g9||c3==g10){
                cout<<c3<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c4>=65&&c4<=90)||(c4>=97&&c4<=122)){
            if(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
                    ||c4==g9||c4==g10){
                cout<<c4<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c5>=65&&c5<=90)||(c5>=97&&c5<=122)){
            if(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
                    ||c5==g9||c5==g10){
                cout<<c5<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c6>=65&&c6<=90)||(c6>=97&&c6<=122)){
            if(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
                    ||c6==g9||c6==g10){
                cout<<c6<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c7>=65&&c7<=90)||(c7>=97&&c7<=122)){
            if(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
                    ||c7==g9||c7==g10){
                cout<<c7<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c8>=65&&c8<=90)||(c8>=97&&c8<=122)){
            if(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
                    ||c8==g9||c8==g10){
                cout<<c8<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c9>=65&&c9<=90)||(c9>=97&&c9<=122)){
            if(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
                    ||c9==g9||c9==g10){
                cout<<c9<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c10>=65&&c10<=90)||(c10>=97&&c10<=122)){
            if(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
                    ||c10==g9||c10==g10){
                cout<<c10<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c11>=65&&c11<=90)||(c11>=97&&c11<=122)){
            if(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
                    ||c11==g9||c11==g10){
                cout<<c11<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c12>=65&&c12<=90)||(c12>=97&&c12<=122)){
            if(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
                    ||c12==g9||c12==g10){
                cout<<c12<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c13>=65&&c13<=90)||(c13>=97&&c13<=122)){
            if(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
                    ||c13==g9||c13==g10){
                cout<<c13<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c14>=65&&c14<=90)||(c14>=97&&c14<=122)){
            if(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
                    ||c14==g9||c14==g10){
                cout<<c14<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c15>=65&&c15<=90)||(c15>=97&&c15<=122)){
            if(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
                    ||c15==g9||c15==g10){
                cout<<c15<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c16>=65&&c16<=90)||(c16>=97&&c16<=122)){
            if(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
                    ||c16==g9||c16==g10){
                cout<<c16<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c17>=65&&c17<=90)||(c17>=97&&c17<=122)){
            if(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
                    ||c17==g9||c17==g10){
                cout<<c17<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c18>=65&&c18<=90)||(c18>=97&&c18<=122)){
            if(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
                    ||c18==g9||c18==g10){
                cout<<c18<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c19>=65&&c19<=90)||(c19>=97&&c19<=122)){
            if(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
                    ||c19==g9||c19==g10){
                cout<<c19<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c20>=65&&c20<=90)||(c20>=97&&c20<=122)){
            if(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
                    ||c20==g9||c20==g10){
                cout<<c20<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }
        cout<<endl;
        for(int i=1;i<=3;i++){
        cout<<"********************************************************************"<<endl;
        }
        cout<<"GAME OVER"<<endl;
        cout<<lose<<endl;
        cout<<"The word or words were ";
        switch(num){
        case 1:cout<<c1;break;
        case 2:cout<<c1<<c2;break;
        case 3:cout<<c1<<c2<<c3;break;
        case 4:cout<<c1<<c2<<c3<<c4;break;
        case 5:cout<<c1<<c2<<c3<<c4<<c5;break;
        case 6:cout<<c1<<c2<<c3<<c4<<c5<<c6;break;
        case 7:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7;break;
        case 8:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8;break;
        case 9:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9;break;
        case 10:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10;break;
        case 11:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11;break;
        case 12:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12;break;
        case 13:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13;break;
        case 14:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14;break;
        case 15:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15;break;
        case 16:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16;break;
        case 17:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16<<c17;break;
        case 18:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16<<c17<<c18;break;
        case 19:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16<<c17<<c18<<c19;break;
        case 20:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16<<c17<<c18<<c19<<c20;break;
        }
        return 0;  
    }
    if((c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
            ||c1==g9||c1==g10||c1==1)&&(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
            ||c2==g9||c2==g10||c2==1)&&(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
            ||c3==g9||c3==g10||c3==1)&&(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
            ||c4==g9||c4==g10||c4==1)&&(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
            ||c5==g9||c5==g10||c5==1)&&(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
            ||c6==g9||c6==g10||c6==1)&&(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
            ||c7==g9||c7==g10||c7==1)&&(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
            ||c8==g9||c8==g10||c8==1)&&(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
            ||c9==g9||c9==g10||c9==1)&&(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
            ||c10==g9||c10==g10||c10==1)&&(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
            ||c11==g9||c11==g10||c11==1)&&(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
            ||c12==g9||c12==g10||c12==1)&&(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
            ||c13==g9||c13==g10||c13==1)&&(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
            ||c14==g9||c14==g10||c14==1)&&(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
            ||c15==g9||c15==g10||c15==1)&&(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
            ||c16==g9||c16==g10||c16==1)&&(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
            ||c17==g9||c17==g10||c17==1)&&(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
            ||c18==g9||c18==g10||c18==1)&&(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
            ||c19==g9||c19==g10||c19==1)&&(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
            ||c20==g9||c20==g10||c20==1)){
        cout<<endl;
        for(int i=1;i<=3;i++){
        cout<<"********************************************************************"<<endl;
        }
        cout<<win<<endl;
        cout<<"The word or words were ";
        switch(num){
        case 1:cout<<c1;break;
        case 2:cout<<c1<<c2;break;
        case 3:cout<<c1<<c2<<c3;break;
        case 4:cout<<c1<<c2<<c3<<c4;break;
        case 5:cout<<c1<<c2<<c3<<c4<<c5;break;
        case 6:cout<<c1<<c2<<c3<<c4<<c5<<c6;break;
        case 7:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7;break;
        case 8:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8;break;
        case 9:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9;break;
        case 10:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10;break;
        case 11:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11;break;
        case 12:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12;break;
        case 13:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13;break;
        case 14:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14;break;
        case 15:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15;break;
        case 16:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16;break;
        case 17:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16<<c17;break;
        case 18:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16<<c17<<c18;break;
        case 19:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16<<c17<<c18<<c19;break;
        case 20:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16<<c17<<c18<<c19<<c20;break;
        }
        return 0;
        
    }
    cout<<endl;
    cout<<"Enter guess number 7!!"<<endl;
    cout<<"Enter only one UPPERCASE letter"<<endl;
    cin>>g7;
    for(int i=1;i<=3;i++){
        cout<<"********************************************************************"<<endl;
    }
    if(g7==c1||g7==c2||g7==c3||g7==c4||g7==c5||g7==c6||g7==c7||g7==c2||g7==c9||g7==c10||g7==c11
            ||g7==c12||g7==c13||g7==c14||g7==c15||g7==c16||g7==c17||g7==c18||g7==c19||g7==c20){
        
    }else{
        man=man+1;
    }if(man==0){
        cout<<"  -------"<<endl;
        cout<<"  |     |                   ATTEMPTS:"<<g1<<g2<<g3<<g4<<g5<<g6<<g7<<endl; 
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"-----                                                               "<<endl;
        cout<<endl;
        if((c1>=65&&c1<=90)||(c1>=97&&c1<=122)){
            if(c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
                    ||c1==g9||c1==g10){
                cout<<c1<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c2>=65&&c2<=90)||(c2>=97&&c2<=122)){
            if(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
                    ||c2==g9||c2==g10){
                cout<<c2<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c3>=65&&c3<=90)||(c3>=97&&c3<=122)){
            if(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
                    ||c3==g9||c3==g10){
                cout<<c3<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c4>=65&&c4<=90)||(c4>=97&&c4<=122)){
            if(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
                    ||c4==g9||c4==g10){
                cout<<c4<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c5>=65&&c5<=90)||(c5>=97&&c5<=122)){
            if(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
                    ||c5==g9||c5==g10){
                cout<<c5<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c6>=65&&c6<=90)||(c6>=97&&c6<=122)){
            if(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
                    ||c6==g9||c6==g10){
                cout<<c6<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c7>=65&&c7<=90)||(c7>=97&&c7<=122)){
            if(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
                    ||c7==g9||c7==g10){
                cout<<c7<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c8>=65&&c8<=90)||(c8>=97&&c8<=122)){
            if(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
                    ||c8==g9||c8==g10){
                cout<<c8<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c9>=65&&c9<=90)||(c9>=97&&c9<=122)){
            if(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
                    ||c9==g9||c9==g10){
                cout<<c9<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c10>=65&&c10<=90)||(c10>=97&&c10<=122)){
            if(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
                    ||c10==g9||c10==g10){
                cout<<c10<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c11>=65&&c11<=90)||(c11>=97&&c11<=122)){
            if(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
                    ||c11==g9||c11==g10){
                cout<<c11<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c12>=65&&c12<=90)||(c12>=97&&c12<=122)){
            if(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
                    ||c12==g9||c12==g10){
                cout<<c12<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c13>=65&&c13<=90)||(c13>=97&&c13<=122)){
            if(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
                    ||c13==g9||c13==g10){
                cout<<c13<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c14>=65&&c14<=90)||(c14>=97&&c14<=122)){
            if(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
                    ||c14==g9||c14==g10){
                cout<<c14<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c15>=65&&c15<=90)||(c15>=97&&c15<=122)){
            if(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
                    ||c15==g9||c15==g10){
                cout<<c15<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c16>=65&&c16<=90)||(c16>=97&&c16<=122)){
            if(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
                    ||c16==g9||c16==g10){
                cout<<c16<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c17>=65&&c17<=90)||(c17>=97&&c17<=122)){
            if(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
                    ||c17==g9||c17==g10){
                cout<<c17<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c18>=65&&c18<=90)||(c18>=97&&c18<=122)){
            if(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
                    ||c18==g9||c18==g10){
                cout<<c18<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c19>=65&&c19<=90)||(c19>=97&&c19<=122)){
            if(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
                    ||c19==g9||c19==g10){
                cout<<c19<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c20>=65&&c20<=90)||(c20>=97&&c20<=122)){
            if(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
                    ||c20==g9||c20==g10){
                cout<<c20<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }
    }if(man==1){     
        cout<<"  -------"<<endl;
        cout<<"  |     |                   ATTEMPTS:"<<g1<<g2<<g3<<g4<<g5<<g6<<g7<<endl; 
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |     @                                                           "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"-----                                                               "<<endl;
        cout<<endl;
        if((c1>=65&&c1<=90)||(c1>=97&&c1<=122)){
            if(c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
                    ||c1==g9||c1==g10){
                cout<<c1<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c2>=65&&c2<=90)||(c2>=97&&c2<=122)){
            if(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
                    ||c2==g9||c2==g10){
                cout<<c2<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c3>=65&&c3<=90)||(c3>=97&&c3<=122)){
            if(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
                    ||c3==g9||c3==g10){
                cout<<c3<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c4>=65&&c4<=90)||(c4>=97&&c4<=122)){
            if(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
                    ||c4==g9||c4==g10){
                cout<<c4<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c5>=65&&c5<=90)||(c5>=97&&c5<=122)){
            if(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
                    ||c5==g9||c5==g10){
                cout<<c5<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c6>=65&&c6<=90)||(c6>=97&&c6<=122)){
            if(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
                    ||c6==g9||c6==g10){
                cout<<c6<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c7>=65&&c7<=90)||(c7>=97&&c7<=122)){
            if(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
                    ||c7==g9||c7==g10){
                cout<<c7<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c8>=65&&c8<=90)||(c8>=97&&c8<=122)){
            if(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
                    ||c8==g9||c8==g10){
                cout<<c8<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c9>=65&&c9<=90)||(c9>=97&&c9<=122)){
            if(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
                    ||c9==g9||c9==g10){
                cout<<c9<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c10>=65&&c10<=90)||(c10>=97&&c10<=122)){
            if(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
                    ||c10==g9||c10==g10){
                cout<<c10<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c11>=65&&c11<=90)||(c11>=97&&c11<=122)){
            if(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
                    ||c11==g9||c11==g10){
                cout<<c11<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c12>=65&&c12<=90)||(c12>=97&&c12<=122)){
            if(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
                    ||c12==g9||c12==g10){
                cout<<c12<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c13>=65&&c13<=90)||(c13>=97&&c13<=122)){
            if(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
                    ||c13==g9||c13==g10){
                cout<<c13<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c14>=65&&c14<=90)||(c14>=97&&c14<=122)){
            if(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
                    ||c14==g9||c14==g10){
                cout<<c14<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c15>=65&&c15<=90)||(c15>=97&&c15<=122)){
            if(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
                    ||c15==g9||c15==g10){
                cout<<c15<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c16>=65&&c16<=90)||(c16>=97&&c16<=122)){
            if(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
                    ||c16==g9||c16==g10){
                cout<<c16<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c17>=65&&c17<=90)||(c17>=97&&c17<=122)){
            if(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
                    ||c17==g9||c17==g10){
                cout<<c17<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c18>=65&&c18<=90)||(c18>=97&&c18<=122)){
            if(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
                    ||c18==g9||c18==g10){
                cout<<c18<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c19>=65&&c19<=90)||(c19>=97&&c19<=122)){
            if(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
                    ||c19==g9||c19==g10){
                cout<<c19<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c20>=65&&c20<=90)||(c20>=97&&c20<=122)){
            if(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
                    ||c20==g9||c20==g10){
                cout<<c20<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }
        cout<<"You only have 4 wrong attempts left"<<endl;
    }if(man==2){     
        cout<<"  -------"<<endl;
        cout<<"  |     |                   ATTEMPTS:"<<g1<<g2<<g3<<g4<<g5<<g6<<g7<<endl; 
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |     @                                                           "<<endl;
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"-----                                                               "<<endl;
        cout<<endl;
        if((c1>=65&&c1<=90)||(c1>=97&&c1<=122)){
            if(c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
                    ||c1==g9||c1==g10){
                cout<<c1<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c2>=65&&c2<=90)||(c2>=97&&c2<=122)){
            if(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
                    ||c2==g9||c2==g10){
                cout<<c2<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c3>=65&&c3<=90)||(c3>=97&&c3<=122)){
            if(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
                    ||c3==g9||c3==g10){
                cout<<c3<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c4>=65&&c4<=90)||(c4>=97&&c4<=122)){
            if(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
                    ||c4==g9||c4==g10){
                cout<<c4<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c5>=65&&c5<=90)||(c5>=97&&c5<=122)){
            if(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
                    ||c5==g9||c5==g10){
                cout<<c5<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c6>=65&&c6<=90)||(c6>=97&&c6<=122)){
            if(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
                    ||c6==g9||c6==g10){
                cout<<c6<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c7>=65&&c7<=90)||(c7>=97&&c7<=122)){
            if(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
                    ||c7==g9||c7==g10){
                cout<<c7<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c8>=65&&c8<=90)||(c8>=97&&c8<=122)){
            if(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
                    ||c8==g9||c8==g10){
                cout<<c8<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c9>=65&&c9<=90)||(c9>=97&&c9<=122)){
            if(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
                    ||c9==g9||c9==g10){
                cout<<c9<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c10>=65&&c10<=90)||(c10>=97&&c10<=122)){
            if(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
                    ||c10==g9||c10==g10){
                cout<<c10<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c11>=65&&c11<=90)||(c11>=97&&c11<=122)){
            if(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
                    ||c11==g9||c11==g10){
                cout<<c11<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c12>=65&&c12<=90)||(c12>=97&&c12<=122)){
            if(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
                    ||c12==g9||c12==g10){
                cout<<c12<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c13>=65&&c13<=90)||(c13>=97&&c13<=122)){
            if(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
                    ||c13==g9||c13==g10){
                cout<<c13<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c14>=65&&c14<=90)||(c14>=97&&c14<=122)){
            if(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
                    ||c14==g9||c14==g10){
                cout<<c14<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c15>=65&&c15<=90)||(c15>=97&&c15<=122)){
            if(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
                    ||c15==g9||c15==g10){
                cout<<c15<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c16>=65&&c16<=90)||(c16>=97&&c16<=122)){
            if(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
                    ||c16==g9||c16==g10){
                cout<<c16<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c17>=65&&c17<=90)||(c17>=97&&c17<=122)){
            if(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
                    ||c17==g9||c17==g10){
                cout<<c17<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c18>=65&&c18<=90)||(c18>=97&&c18<=122)){
            if(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
                    ||c18==g9||c18==g10){
                cout<<c18<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c19>=65&&c19<=90)||(c19>=97&&c19<=122)){
            if(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
                    ||c19==g9||c19==g10){
                cout<<c19<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c20>=65&&c20<=90)||(c20>=97&&c20<=122)){
            if(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
                    ||c20==g9||c20==g10){
                cout<<c20<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }
        cout<<"You only have 3 wrong attempts left"<<endl;
    }if(man==3){     
        cout<<"  -------"<<endl;
        cout<<"  |     |                   ATTEMPTS:"<<g1<<g2<<g3<<g4<<g5<<g6<<g7<<endl; 
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |     @                                                           "<<endl;
        cout<<"  |     |/                                                          "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"-----                                                               "<<endl;
        cout<<endl;
        if((c1>=65&&c1<=90)||(c1>=97&&c1<=122)){
            if(c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
                    ||c1==g9||c1==g10){
                cout<<c1<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c2>=65&&c2<=90)||(c2>=97&&c2<=122)){
            if(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
                    ||c2==g9||c2==g10){
                cout<<c2<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c3>=65&&c3<=90)||(c3>=97&&c3<=122)){
            if(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
                    ||c3==g9||c3==g10){
                cout<<c3<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c4>=65&&c4<=90)||(c4>=97&&c4<=122)){
            if(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
                    ||c4==g9||c4==g10){
                cout<<c4<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c5>=65&&c5<=90)||(c5>=97&&c5<=122)){
            if(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
                    ||c5==g9||c5==g10){
                cout<<c5<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c6>=65&&c6<=90)||(c6>=97&&c6<=122)){
            if(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
                    ||c6==g9||c6==g10){
                cout<<c6<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c7>=65&&c7<=90)||(c7>=97&&c7<=122)){
            if(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
                    ||c7==g9||c7==g10){
                cout<<c7<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c8>=65&&c8<=90)||(c8>=97&&c8<=122)){
            if(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
                    ||c8==g9||c8==g10){
                cout<<c8<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c9>=65&&c9<=90)||(c9>=97&&c9<=122)){
            if(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
                    ||c9==g9||c9==g10){
                cout<<c9<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c10>=65&&c10<=90)||(c10>=97&&c10<=122)){
            if(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
                    ||c10==g9||c10==g10){
                cout<<c10<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c11>=65&&c11<=90)||(c11>=97&&c11<=122)){
            if(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
                    ||c11==g9||c11==g10){
                cout<<c11<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c12>=65&&c12<=90)||(c12>=97&&c12<=122)){
            if(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
                    ||c12==g9||c12==g10){
                cout<<c12<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c13>=65&&c13<=90)||(c13>=97&&c13<=122)){
            if(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
                    ||c13==g9||c13==g10){
                cout<<c13<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c14>=65&&c14<=90)||(c14>=97&&c14<=122)){
            if(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
                    ||c14==g9||c14==g10){
                cout<<c14<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c15>=65&&c15<=90)||(c15>=97&&c15<=122)){
            if(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
                    ||c15==g9||c15==g10){
                cout<<c15<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c16>=65&&c16<=90)||(c16>=97&&c16<=122)){
            if(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
                    ||c16==g9||c16==g10){
                cout<<c16<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c17>=65&&c17<=90)||(c17>=97&&c17<=122)){
            if(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
                    ||c17==g9||c17==g10){
                cout<<c17<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c18>=65&&c18<=90)||(c18>=97&&c18<=122)){
            if(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
                    ||c18==g9||c18==g10){
                cout<<c18<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c19>=65&&c19<=90)||(c19>=97&&c19<=122)){
            if(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
                    ||c19==g9||c19==g10){
                cout<<c19<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c20>=65&&c20<=90)||(c20>=97&&c20<=122)){
            if(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
                    ||c20==g9||c20==g10){
                cout<<c20<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }
        cout<<"You only have 2 wrong attempts left"<<endl;
    }if(man==4){     
        cout<<"  -------"<<endl;
        cout<<"  |     |                   ATTEMPTS:"<<g1<<g2<<g3<<g4<<g5<<g6<<g7<<endl; 
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |     @                                                           "<<endl;
        cout<<"  |    _|/                                                          "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"-----                                                               "<<endl;
        cout<<endl;
        if((c1>=65&&c1<=90)||(c1>=97&&c1<=122)){
            if(c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
                    ||c1==g9||c1==g10){
                cout<<c1<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c2>=65&&c2<=90)||(c2>=97&&c2<=122)){
            if(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
                    ||c2==g9||c2==g10){
                cout<<c2<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c3>=65&&c3<=90)||(c3>=97&&c3<=122)){
            if(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
                    ||c3==g9||c3==g10){
                cout<<c3<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c4>=65&&c4<=90)||(c4>=97&&c4<=122)){
            if(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
                    ||c4==g9||c4==g10){
                cout<<c4<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c5>=65&&c5<=90)||(c5>=97&&c5<=122)){
            if(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
                    ||c5==g9||c5==g10){
                cout<<c5<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c6>=65&&c6<=90)||(c6>=97&&c6<=122)){
            if(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
                    ||c6==g9||c6==g10){
                cout<<c6<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c7>=65&&c7<=90)||(c7>=97&&c7<=122)){
            if(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
                    ||c7==g9||c7==g10){
                cout<<c7<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c8>=65&&c8<=90)||(c8>=97&&c8<=122)){
            if(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
                    ||c8==g9||c8==g10){
                cout<<c8<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c9>=65&&c9<=90)||(c9>=97&&c9<=122)){
            if(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
                    ||c9==g9||c9==g10){
                cout<<c9<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c10>=65&&c10<=90)||(c10>=97&&c10<=122)){
            if(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
                    ||c10==g9||c10==g10){
                cout<<c10<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c11>=65&&c11<=90)||(c11>=97&&c11<=122)){
            if(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
                    ||c11==g9||c11==g10){
                cout<<c11<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c12>=65&&c12<=90)||(c12>=97&&c12<=122)){
            if(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
                    ||c12==g9||c12==g10){
                cout<<c12<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c13>=65&&c13<=90)||(c13>=97&&c13<=122)){
            if(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
                    ||c13==g9||c13==g10){
                cout<<c13<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c14>=65&&c14<=90)||(c14>=97&&c14<=122)){
            if(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
                    ||c14==g9||c14==g10){
                cout<<c14<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c15>=65&&c15<=90)||(c15>=97&&c15<=122)){
            if(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
                    ||c15==g9||c15==g10){
                cout<<c15<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c16>=65&&c16<=90)||(c16>=97&&c16<=122)){
            if(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
                    ||c16==g9||c16==g10){
                cout<<c16<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c17>=65&&c17<=90)||(c17>=97&&c17<=122)){
            if(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
                    ||c17==g9||c17==g10){
                cout<<c17<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c18>=65&&c18<=90)||(c18>=97&&c18<=122)){
            if(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
                    ||c18==g9||c18==g10){
                cout<<c18<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c19>=65&&c19<=90)||(c19>=97&&c19<=122)){
            if(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
                    ||c19==g9||c19==g10){
                cout<<c19<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c20>=65&&c20<=90)||(c20>=97&&c20<=122)){
            if(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
                    ||c20==g9||c20==g10){
                cout<<c20<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }
        cout<<"You only have 1 wrong attempt left"<<endl;
    }if(man==5){     
        cout<<"  -------"<<endl;
        cout<<"  |     |                   ATTEMPTS:"<<g1<<g2<<g3<<g4<<g5<<g6<<g7<<endl; 
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |     @                                                           "<<endl;
        cout<<"  |    _|/                                                          "<<endl;
        cout<<"  |    /                                                            "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"-----                                                               "<<endl;
        cout<<endl;
        if((c1>=65&&c1<=90)||(c1>=97&&c1<=122)){
            if(c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
                    ||c1==g9||c1==g10){
                cout<<c1<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c2>=65&&c2<=90)||(c2>=97&&c2<=122)){
            if(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
                    ||c2==g9||c2==g10){
                cout<<c2<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c3>=65&&c3<=90)||(c3>=97&&c3<=122)){
            if(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
                    ||c3==g9||c3==g10){
                cout<<c3<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c4>=65&&c4<=90)||(c4>=97&&c4<=122)){
            if(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
                    ||c4==g9||c4==g10){
                cout<<c4<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c5>=65&&c5<=90)||(c5>=97&&c5<=122)){
            if(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
                    ||c5==g9||c5==g10){
                cout<<c5<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c6>=65&&c6<=90)||(c6>=97&&c6<=122)){
            if(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
                    ||c6==g9||c6==g10){
                cout<<c6<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c7>=65&&c7<=90)||(c7>=97&&c7<=122)){
            if(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
                    ||c7==g9||c7==g10){
                cout<<c7<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c8>=65&&c8<=90)||(c8>=97&&c8<=122)){
            if(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
                    ||c8==g9||c8==g10){
                cout<<c8<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c9>=65&&c9<=90)||(c9>=97&&c9<=122)){
            if(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
                    ||c9==g9||c9==g10){
                cout<<c9<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c10>=65&&c10<=90)||(c10>=97&&c10<=122)){
            if(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
                    ||c10==g9||c10==g10){
                cout<<c10<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c11>=65&&c11<=90)||(c11>=97&&c11<=122)){
            if(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
                    ||c11==g9||c11==g10){
                cout<<c11<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c12>=65&&c12<=90)||(c12>=97&&c12<=122)){
            if(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
                    ||c12==g9||c12==g10){
                cout<<c12<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c13>=65&&c13<=90)||(c13>=97&&c13<=122)){
            if(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
                    ||c13==g9||c13==g10){
                cout<<c13<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c14>=65&&c14<=90)||(c14>=97&&c14<=122)){
            if(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
                    ||c14==g9||c14==g10){
                cout<<c14<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c15>=65&&c15<=90)||(c15>=97&&c15<=122)){
            if(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
                    ||c15==g9||c15==g10){
                cout<<c15<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c16>=65&&c16<=90)||(c16>=97&&c16<=122)){
            if(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
                    ||c16==g9||c16==g10){
                cout<<c16<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c17>=65&&c17<=90)||(c17>=97&&c17<=122)){
            if(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
                    ||c17==g9||c17==g10){
                cout<<c17<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c18>=65&&c18<=90)||(c18>=97&&c18<=122)){
            if(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
                    ||c18==g9||c18==g10){
                cout<<c18<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c19>=65&&c19<=90)||(c19>=97&&c19<=122)){
            if(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
                    ||c19==g9||c19==g10){
                cout<<c19<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c20>=65&&c20<=90)||(c20>=97&&c20<=122)){
            if(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
                    ||c20==g9||c20==g10){
                cout<<c20<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }
        cout<<"You only have 0 wrong attempts left"<<endl;
    }if(man==6){     
        cout<<"  -------"<<endl;
        cout<<"  |     |                   ATTEMPTS:"<<g1<<g2<<g3<<g4<<g5<<g6<<g7<<endl; 
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |     @                                                           "<<endl;
        cout<<"  |    _|/                                                          "<<endl;
        cout<<"  |    /|                                                           "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"-----                                                               "<<endl;
        cout<<endl;
        if((c1>=65&&c1<=90)||(c1>=97&&c1<=122)){
            if(c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
                    ||c1==g9||c1==g10){
                cout<<c1<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c2>=65&&c2<=90)||(c2>=97&&c2<=122)){
            if(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
                    ||c2==g9||c2==g10){
                cout<<c2<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c3>=65&&c3<=90)||(c3>=97&&c3<=122)){
            if(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
                    ||c3==g9||c3==g10){
                cout<<c3<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c4>=65&&c4<=90)||(c4>=97&&c4<=122)){
            if(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
                    ||c4==g9||c4==g10){
                cout<<c4<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c5>=65&&c5<=90)||(c5>=97&&c5<=122)){
            if(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
                    ||c5==g9||c5==g10){
                cout<<c5<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c6>=65&&c6<=90)||(c6>=97&&c6<=122)){
            if(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
                    ||c6==g9||c6==g10){
                cout<<c6<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c7>=65&&c7<=90)||(c7>=97&&c7<=122)){
            if(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
                    ||c7==g9||c7==g10){
                cout<<c7<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c8>=65&&c8<=90)||(c8>=97&&c8<=122)){
            if(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
                    ||c8==g9||c8==g10){
                cout<<c8<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c9>=65&&c9<=90)||(c9>=97&&c9<=122)){
            if(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
                    ||c9==g9||c9==g10){
                cout<<c9<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c10>=65&&c10<=90)||(c10>=97&&c10<=122)){
            if(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
                    ||c10==g9||c10==g10){
                cout<<c10<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c11>=65&&c11<=90)||(c11>=97&&c11<=122)){
            if(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
                    ||c11==g9||c11==g10){
                cout<<c11<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c12>=65&&c12<=90)||(c12>=97&&c12<=122)){
            if(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
                    ||c12==g9||c12==g10){
                cout<<c12<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c13>=65&&c13<=90)||(c13>=97&&c13<=122)){
            if(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
                    ||c13==g9||c13==g10){
                cout<<c13<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c14>=65&&c14<=90)||(c14>=97&&c14<=122)){
            if(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
                    ||c14==g9||c14==g10){
                cout<<c14<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c15>=65&&c15<=90)||(c15>=97&&c15<=122)){
            if(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
                    ||c15==g9||c15==g10){
                cout<<c15<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c16>=65&&c16<=90)||(c16>=97&&c16<=122)){
            if(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
                    ||c16==g9||c16==g10){
                cout<<c16<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c17>=65&&c17<=90)||(c17>=97&&c17<=122)){
            if(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
                    ||c17==g9||c17==g10){
                cout<<c17<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c18>=65&&c18<=90)||(c18>=97&&c18<=122)){
            if(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
                    ||c18==g9||c18==g10){
                cout<<c18<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c19>=65&&c19<=90)||(c19>=97&&c19<=122)){
            if(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
                    ||c19==g9||c19==g10){
                cout<<c19<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c20>=65&&c20<=90)||(c20>=97&&c20<=122)){
            if(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
                    ||c20==g9||c20==g10){
                cout<<c20<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }
        cout<<endl;
        for(int i=1;i<=3;i++){
        cout<<"********************************************************************"<<endl;
        }
        cout<<"GAME OVER"<<endl;
        cout<<lose<<endl;
        cout<<"The word or words were ";
        switch(num){
        case 1:cout<<c1;break;
        case 2:cout<<c1<<c2;break;
        case 3:cout<<c1<<c2<<c3;break;
        case 4:cout<<c1<<c2<<c3<<c4;break;
        case 5:cout<<c1<<c2<<c3<<c4<<c5;break;
        case 6:cout<<c1<<c2<<c3<<c4<<c5<<c6;break;
        case 7:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7;break;
        case 8:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8;break;
        case 9:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9;break;
        case 10:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10;break;
        case 11:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11;break;
        case 12:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12;break;
        case 13:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13;break;
        case 14:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14;break;
        case 15:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15;break;
        case 16:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16;break;
        case 17:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16<<c17;break;
        case 18:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16<<c17<<c18;break;
        case 19:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16<<c17<<c18<<c19;break;
        case 20:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16<<c17<<c18<<c19<<c20;break;
        }
        return 0;  
    }
    if((c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
            ||c1==g9||c1==g10||c1==1)&&(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
            ||c2==g9||c2==g10||c2==1)&&(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
            ||c3==g9||c3==g10||c3==1)&&(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
            ||c4==g9||c4==g10||c4==1)&&(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
            ||c5==g9||c5==g10||c5==1)&&(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
            ||c6==g9||c6==g10||c6==1)&&(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
            ||c7==g9||c7==g10||c7==1)&&(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
            ||c8==g9||c8==g10||c8==1)&&(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
            ||c9==g9||c9==g10||c9==1)&&(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
            ||c10==g9||c10==g10||c10==1)&&(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
            ||c11==g9||c11==g10||c11==1)&&(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
            ||c12==g9||c12==g10||c12==1)&&(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
            ||c13==g9||c13==g10||c13==1)&&(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
            ||c14==g9||c14==g10||c14==1)&&(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
            ||c15==g9||c15==g10||c15==1)&&(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
            ||c16==g9||c16==g10||c16==1)&&(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
            ||c17==g9||c17==g10||c17==1)&&(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
            ||c18==g9||c18==g10||c18==1)&&(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
            ||c19==g9||c19==g10||c19==1)&&(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
            ||c20==g9||c20==g10||c20==1)){
        cout<<endl;
        for(int i=1;i<=3;i++){
        cout<<"********************************************************************"<<endl;
        }
        cout<<win<<endl;
        cout<<"The word or words were ";
        switch(num){
        case 1:cout<<c1;break;
        case 2:cout<<c1<<c2;break;
        case 3:cout<<c1<<c2<<c3;break;
        case 4:cout<<c1<<c2<<c3<<c4;break;
        case 5:cout<<c1<<c2<<c3<<c4<<c5;break;
        case 6:cout<<c1<<c2<<c3<<c4<<c5<<c6;break;
        case 7:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7;break;
        case 8:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8;break;
        case 9:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9;break;
        case 10:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10;break;
        case 11:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11;break;
        case 12:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12;break;
        case 13:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13;break;
        case 14:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14;break;
        case 15:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15;break;
        case 16:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16;break;
        case 17:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16<<c17;break;
        case 18:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16<<c17<<c18;break;
        case 19:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16<<c17<<c18<<c19;break;
        case 20:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16<<c17<<c18<<c19<<c20;break;
        }
        return 0;
        
    }
    cout<<endl;
    cout<<"Enter guess number 8!!"<<endl;
    cout<<"Enter only one UPPERCASE letter"<<endl;
    cin>>g8;
    for(int i=1;i<=3;i++){
        cout<<"********************************************************************"<<endl;
    }
    if(g8==c1||g8==c2||g8==c3||g8==c4||g8==c5||g8==c6||g8==c7||g8==c2||g8==c9||g8==c10||g8==c11
            ||g8==c12||g8==c13||g8==c14||g8==c15||g8==c16||g8==c17||g8==c18||g8==c19||g8==c20){
        
    }else{
        man=man+1;
    }if(man==0){
        cout<<"  -------"<<endl;
        cout<<"  |     |                   ATTEMPTS:"<<g1<<g2<<g3<<g4<<g5<<g6<<g7<<g8<<endl; 
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"-----                                                               "<<endl;
        cout<<endl;
        if((c1>=65&&c1<=90)||(c1>=97&&c1<=122)){
            if(c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
                    ||c1==g9||c1==g10){
                cout<<c1<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c2>=65&&c2<=90)||(c2>=97&&c2<=122)){
            if(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
                    ||c2==g9||c2==g10){
                cout<<c2<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c3>=65&&c3<=90)||(c3>=97&&c3<=122)){
            if(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
                    ||c3==g9||c3==g10){
                cout<<c3<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c4>=65&&c4<=90)||(c4>=97&&c4<=122)){
            if(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
                    ||c4==g9||c4==g10){
                cout<<c4<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c5>=65&&c5<=90)||(c5>=97&&c5<=122)){
            if(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
                    ||c5==g9||c5==g10){
                cout<<c5<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c6>=65&&c6<=90)||(c6>=97&&c6<=122)){
            if(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
                    ||c6==g9||c6==g10){
                cout<<c6<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c7>=65&&c7<=90)||(c7>=97&&c7<=122)){
            if(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
                    ||c7==g9||c7==g10){
                cout<<c7<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c8>=65&&c8<=90)||(c8>=97&&c8<=122)){
            if(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
                    ||c8==g9||c8==g10){
                cout<<c8<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c9>=65&&c9<=90)||(c9>=97&&c9<=122)){
            if(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
                    ||c9==g9||c9==g10){
                cout<<c9<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c10>=65&&c10<=90)||(c10>=97&&c10<=122)){
            if(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
                    ||c10==g9||c10==g10){
                cout<<c10<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c11>=65&&c11<=90)||(c11>=97&&c11<=122)){
            if(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
                    ||c11==g9||c11==g10){
                cout<<c11<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c12>=65&&c12<=90)||(c12>=97&&c12<=122)){
            if(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
                    ||c12==g9||c12==g10){
                cout<<c12<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c13>=65&&c13<=90)||(c13>=97&&c13<=122)){
            if(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
                    ||c13==g9||c13==g10){
                cout<<c13<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c14>=65&&c14<=90)||(c14>=97&&c14<=122)){
            if(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
                    ||c14==g9||c14==g10){
                cout<<c14<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c15>=65&&c15<=90)||(c15>=97&&c15<=122)){
            if(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
                    ||c15==g9||c15==g10){
                cout<<c15<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c16>=65&&c16<=90)||(c16>=97&&c16<=122)){
            if(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
                    ||c16==g9||c16==g10){
                cout<<c16<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c17>=65&&c17<=90)||(c17>=97&&c17<=122)){
            if(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
                    ||c17==g9||c17==g10){
                cout<<c17<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c18>=65&&c18<=90)||(c18>=97&&c18<=122)){
            if(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
                    ||c18==g9||c18==g10){
                cout<<c18<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c19>=65&&c19<=90)||(c19>=97&&c19<=122)){
            if(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
                    ||c19==g9||c19==g10){
                cout<<c19<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c20>=65&&c20<=90)||(c20>=97&&c20<=122)){
            if(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
                    ||c20==g9||c20==g10){
                cout<<c20<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }
    }if(man==1){     
        cout<<"  -------"<<endl;
        cout<<"  |     |                   ATTEMPTS:"<<g1<<g2<<g3<<g4<<g5<<g6<<g7<<g8<<endl; 
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |     @                                                           "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"-----                                                               "<<endl;
        cout<<endl;
        if((c1>=65&&c1<=90)||(c1>=97&&c1<=122)){
            if(c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
                    ||c1==g9||c1==g10){
                cout<<c1<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c2>=65&&c2<=90)||(c2>=97&&c2<=122)){
            if(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
                    ||c2==g9||c2==g10){
                cout<<c2<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c3>=65&&c3<=90)||(c3>=97&&c3<=122)){
            if(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
                    ||c3==g9||c3==g10){
                cout<<c3<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c4>=65&&c4<=90)||(c4>=97&&c4<=122)){
            if(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
                    ||c4==g9||c4==g10){
                cout<<c4<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c5>=65&&c5<=90)||(c5>=97&&c5<=122)){
            if(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
                    ||c5==g9||c5==g10){
                cout<<c5<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c6>=65&&c6<=90)||(c6>=97&&c6<=122)){
            if(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
                    ||c6==g9||c6==g10){
                cout<<c6<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c7>=65&&c7<=90)||(c7>=97&&c7<=122)){
            if(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
                    ||c7==g9||c7==g10){
                cout<<c7<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c8>=65&&c8<=90)||(c8>=97&&c8<=122)){
            if(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
                    ||c8==g9||c8==g10){
                cout<<c8<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c9>=65&&c9<=90)||(c9>=97&&c9<=122)){
            if(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
                    ||c9==g9||c9==g10){
                cout<<c9<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c10>=65&&c10<=90)||(c10>=97&&c10<=122)){
            if(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
                    ||c10==g9||c10==g10){
                cout<<c10<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c11>=65&&c11<=90)||(c11>=97&&c11<=122)){
            if(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
                    ||c11==g9||c11==g10){
                cout<<c11<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c12>=65&&c12<=90)||(c12>=97&&c12<=122)){
            if(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
                    ||c12==g9||c12==g10){
                cout<<c12<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c13>=65&&c13<=90)||(c13>=97&&c13<=122)){
            if(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
                    ||c13==g9||c13==g10){
                cout<<c13<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c14>=65&&c14<=90)||(c14>=97&&c14<=122)){
            if(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
                    ||c14==g9||c14==g10){
                cout<<c14<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c15>=65&&c15<=90)||(c15>=97&&c15<=122)){
            if(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
                    ||c15==g9||c15==g10){
                cout<<c15<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c16>=65&&c16<=90)||(c16>=97&&c16<=122)){
            if(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
                    ||c16==g9||c16==g10){
                cout<<c16<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c17>=65&&c17<=90)||(c17>=97&&c17<=122)){
            if(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
                    ||c17==g9||c17==g10){
                cout<<c17<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c18>=65&&c18<=90)||(c18>=97&&c18<=122)){
            if(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
                    ||c18==g9||c18==g10){
                cout<<c18<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c19>=65&&c19<=90)||(c19>=97&&c19<=122)){
            if(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
                    ||c19==g9||c19==g10){
                cout<<c19<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c20>=65&&c20<=90)||(c20>=97&&c20<=122)){
            if(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
                    ||c20==g9||c20==g10){
                cout<<c20<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }
        cout<<"You only have 4 wrong attempts left"<<endl;
    }if(man==2){     
        cout<<"  -------"<<endl;
        cout<<"  |     |                   ATTEMPTS:"<<g1<<g2<<g3<<g4<<g5<<g6<<g7<<g8<<endl; 
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |     @                                                           "<<endl;
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"-----                                                               "<<endl;
        cout<<endl;
        if((c1>=65&&c1<=90)||(c1>=97&&c1<=122)){
            if(c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
                    ||c1==g9||c1==g10){
                cout<<c1<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c2>=65&&c2<=90)||(c2>=97&&c2<=122)){
            if(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
                    ||c2==g9||c2==g10){
                cout<<c2<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c3>=65&&c3<=90)||(c3>=97&&c3<=122)){
            if(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
                    ||c3==g9||c3==g10){
                cout<<c3<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c4>=65&&c4<=90)||(c4>=97&&c4<=122)){
            if(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
                    ||c4==g9||c4==g10){
                cout<<c4<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c5>=65&&c5<=90)||(c5>=97&&c5<=122)){
            if(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
                    ||c5==g9||c5==g10){
                cout<<c5<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c6>=65&&c6<=90)||(c6>=97&&c6<=122)){
            if(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
                    ||c6==g9||c6==g10){
                cout<<c6<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c7>=65&&c7<=90)||(c7>=97&&c7<=122)){
            if(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
                    ||c7==g9||c7==g10){
                cout<<c7<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c8>=65&&c8<=90)||(c8>=97&&c8<=122)){
            if(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
                    ||c8==g9||c8==g10){
                cout<<c8<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c9>=65&&c9<=90)||(c9>=97&&c9<=122)){
            if(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
                    ||c9==g9||c9==g10){
                cout<<c9<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c10>=65&&c10<=90)||(c10>=97&&c10<=122)){
            if(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
                    ||c10==g9||c10==g10){
                cout<<c10<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c11>=65&&c11<=90)||(c11>=97&&c11<=122)){
            if(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
                    ||c11==g9||c11==g10){
                cout<<c11<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c12>=65&&c12<=90)||(c12>=97&&c12<=122)){
            if(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
                    ||c12==g9||c12==g10){
                cout<<c12<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c13>=65&&c13<=90)||(c13>=97&&c13<=122)){
            if(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
                    ||c13==g9||c13==g10){
                cout<<c13<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c14>=65&&c14<=90)||(c14>=97&&c14<=122)){
            if(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
                    ||c14==g9||c14==g10){
                cout<<c14<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c15>=65&&c15<=90)||(c15>=97&&c15<=122)){
            if(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
                    ||c15==g9||c15==g10){
                cout<<c15<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c16>=65&&c16<=90)||(c16>=97&&c16<=122)){
            if(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
                    ||c16==g9||c16==g10){
                cout<<c16<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c17>=65&&c17<=90)||(c17>=97&&c17<=122)){
            if(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
                    ||c17==g9||c17==g10){
                cout<<c17<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c18>=65&&c18<=90)||(c18>=97&&c18<=122)){
            if(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
                    ||c18==g9||c18==g10){
                cout<<c18<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c19>=65&&c19<=90)||(c19>=97&&c19<=122)){
            if(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
                    ||c19==g9||c19==g10){
                cout<<c19<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c20>=65&&c20<=90)||(c20>=97&&c20<=122)){
            if(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
                    ||c20==g9||c20==g10){
                cout<<c20<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }
        cout<<"You only have 3 wrong attempts left"<<endl;
    }if(man==3){     
        cout<<"  -------"<<endl;
        cout<<"  |     |                   ATTEMPTS:"<<g1<<g2<<g3<<g4<<g5<<g6<<g7<<g8<<endl; 
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |     @                                                           "<<endl;
        cout<<"  |     |/                                                          "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"-----                                                               "<<endl;
        cout<<endl;
        if((c1>=65&&c1<=90)||(c1>=97&&c1<=122)){
            if(c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
                    ||c1==g9||c1==g10){
                cout<<c1<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c2>=65&&c2<=90)||(c2>=97&&c2<=122)){
            if(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
                    ||c2==g9||c2==g10){
                cout<<c2<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c3>=65&&c3<=90)||(c3>=97&&c3<=122)){
            if(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
                    ||c3==g9||c3==g10){
                cout<<c3<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c4>=65&&c4<=90)||(c4>=97&&c4<=122)){
            if(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
                    ||c4==g9||c4==g10){
                cout<<c4<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c5>=65&&c5<=90)||(c5>=97&&c5<=122)){
            if(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
                    ||c5==g9||c5==g10){
                cout<<c5<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c6>=65&&c6<=90)||(c6>=97&&c6<=122)){
            if(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
                    ||c6==g9||c6==g10){
                cout<<c6<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c7>=65&&c7<=90)||(c7>=97&&c7<=122)){
            if(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
                    ||c7==g9||c7==g10){
                cout<<c7<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c8>=65&&c8<=90)||(c8>=97&&c8<=122)){
            if(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
                    ||c8==g9||c8==g10){
                cout<<c8<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c9>=65&&c9<=90)||(c9>=97&&c9<=122)){
            if(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
                    ||c9==g9||c9==g10){
                cout<<c9<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c10>=65&&c10<=90)||(c10>=97&&c10<=122)){
            if(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
                    ||c10==g9||c10==g10){
                cout<<c10<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c11>=65&&c11<=90)||(c11>=97&&c11<=122)){
            if(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
                    ||c11==g9||c11==g10){
                cout<<c11<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c12>=65&&c12<=90)||(c12>=97&&c12<=122)){
            if(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
                    ||c12==g9||c12==g10){
                cout<<c12<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c13>=65&&c13<=90)||(c13>=97&&c13<=122)){
            if(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
                    ||c13==g9||c13==g10){
                cout<<c13<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c14>=65&&c14<=90)||(c14>=97&&c14<=122)){
            if(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
                    ||c14==g9||c14==g10){
                cout<<c14<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c15>=65&&c15<=90)||(c15>=97&&c15<=122)){
            if(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
                    ||c15==g9||c15==g10){
                cout<<c15<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c16>=65&&c16<=90)||(c16>=97&&c16<=122)){
            if(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
                    ||c16==g9||c16==g10){
                cout<<c16<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c17>=65&&c17<=90)||(c17>=97&&c17<=122)){
            if(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
                    ||c17==g9||c17==g10){
                cout<<c17<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c18>=65&&c18<=90)||(c18>=97&&c18<=122)){
            if(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
                    ||c18==g9||c18==g10){
                cout<<c18<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c19>=65&&c19<=90)||(c19>=97&&c19<=122)){
            if(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
                    ||c19==g9||c19==g10){
                cout<<c19<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c20>=65&&c20<=90)||(c20>=97&&c20<=122)){
            if(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
                    ||c20==g9||c20==g10){
                cout<<c20<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }
        cout<<"You only have 2 wrong attempts left"<<endl;
    }if(man==4){     
        cout<<"  -------"<<endl;
        cout<<"  |     |                   ATTEMPTS:"<<g1<<g2<<g3<<g4<<g5<<g6<<g7<<g8<<endl; 
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |     @                                                           "<<endl;
        cout<<"  |    _|/                                                          "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"-----                                                               "<<endl;
        cout<<endl;
        if((c1>=65&&c1<=90)||(c1>=97&&c1<=122)){
            if(c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
                    ||c1==g9||c1==g10){
                cout<<c1<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c2>=65&&c2<=90)||(c2>=97&&c2<=122)){
            if(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
                    ||c2==g9||c2==g10){
                cout<<c2<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c3>=65&&c3<=90)||(c3>=97&&c3<=122)){
            if(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
                    ||c3==g9||c3==g10){
                cout<<c3<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c4>=65&&c4<=90)||(c4>=97&&c4<=122)){
            if(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
                    ||c4==g9||c4==g10){
                cout<<c4<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c5>=65&&c5<=90)||(c5>=97&&c5<=122)){
            if(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
                    ||c5==g9||c5==g10){
                cout<<c5<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c6>=65&&c6<=90)||(c6>=97&&c6<=122)){
            if(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
                    ||c6==g9||c6==g10){
                cout<<c6<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c7>=65&&c7<=90)||(c7>=97&&c7<=122)){
            if(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
                    ||c7==g9||c7==g10){
                cout<<c7<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c8>=65&&c8<=90)||(c8>=97&&c8<=122)){
            if(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
                    ||c8==g9||c8==g10){
                cout<<c8<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c9>=65&&c9<=90)||(c9>=97&&c9<=122)){
            if(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
                    ||c9==g9||c9==g10){
                cout<<c9<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c10>=65&&c10<=90)||(c10>=97&&c10<=122)){
            if(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
                    ||c10==g9||c10==g10){
                cout<<c10<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c11>=65&&c11<=90)||(c11>=97&&c11<=122)){
            if(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
                    ||c11==g9||c11==g10){
                cout<<c11<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c12>=65&&c12<=90)||(c12>=97&&c12<=122)){
            if(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
                    ||c12==g9||c12==g10){
                cout<<c12<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c13>=65&&c13<=90)||(c13>=97&&c13<=122)){
            if(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
                    ||c13==g9||c13==g10){
                cout<<c13<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c14>=65&&c14<=90)||(c14>=97&&c14<=122)){
            if(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
                    ||c14==g9||c14==g10){
                cout<<c14<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c15>=65&&c15<=90)||(c15>=97&&c15<=122)){
            if(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
                    ||c15==g9||c15==g10){
                cout<<c15<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c16>=65&&c16<=90)||(c16>=97&&c16<=122)){
            if(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
                    ||c16==g9||c16==g10){
                cout<<c16<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c17>=65&&c17<=90)||(c17>=97&&c17<=122)){
            if(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
                    ||c17==g9||c17==g10){
                cout<<c17<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c18>=65&&c18<=90)||(c18>=97&&c18<=122)){
            if(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
                    ||c18==g9||c18==g10){
                cout<<c18<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c19>=65&&c19<=90)||(c19>=97&&c19<=122)){
            if(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
                    ||c19==g9||c19==g10){
                cout<<c19<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c20>=65&&c20<=90)||(c20>=97&&c20<=122)){
            if(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
                    ||c20==g9||c20==g10){
                cout<<c20<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }
        cout<<"You only have 1 wrong attempt left"<<endl;
    }if(man==5){     
        cout<<"  -------"<<endl;
        cout<<"  |     |                   ATTEMPTS:"<<g1<<g2<<g3<<g4<<g5<<g6<<g7<<g8<<endl; 
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |     @                                                           "<<endl;
        cout<<"  |    _|/                                                          "<<endl;
        cout<<"  |    /                                                            "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"-----                                                               "<<endl;
        cout<<endl;
        if((c1>=65&&c1<=90)||(c1>=97&&c1<=122)){
            if(c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
                    ||c1==g9||c1==g10){
                cout<<c1<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c2>=65&&c2<=90)||(c2>=97&&c2<=122)){
            if(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
                    ||c2==g9||c2==g10){
                cout<<c2<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c3>=65&&c3<=90)||(c3>=97&&c3<=122)){
            if(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
                    ||c3==g9||c3==g10){
                cout<<c3<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c4>=65&&c4<=90)||(c4>=97&&c4<=122)){
            if(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
                    ||c4==g9||c4==g10){
                cout<<c4<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c5>=65&&c5<=90)||(c5>=97&&c5<=122)){
            if(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
                    ||c5==g9||c5==g10){
                cout<<c5<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c6>=65&&c6<=90)||(c6>=97&&c6<=122)){
            if(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
                    ||c6==g9||c6==g10){
                cout<<c6<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c7>=65&&c7<=90)||(c7>=97&&c7<=122)){
            if(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
                    ||c7==g9||c7==g10){
                cout<<c7<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c8>=65&&c8<=90)||(c8>=97&&c8<=122)){
            if(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
                    ||c8==g9||c8==g10){
                cout<<c8<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c9>=65&&c9<=90)||(c9>=97&&c9<=122)){
            if(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
                    ||c9==g9||c9==g10){
                cout<<c9<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c10>=65&&c10<=90)||(c10>=97&&c10<=122)){
            if(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
                    ||c10==g9||c10==g10){
                cout<<c10<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c11>=65&&c11<=90)||(c11>=97&&c11<=122)){
            if(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
                    ||c11==g9||c11==g10){
                cout<<c11<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c12>=65&&c12<=90)||(c12>=97&&c12<=122)){
            if(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
                    ||c12==g9||c12==g10){
                cout<<c12<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c13>=65&&c13<=90)||(c13>=97&&c13<=122)){
            if(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
                    ||c13==g9||c13==g10){
                cout<<c13<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c14>=65&&c14<=90)||(c14>=97&&c14<=122)){
            if(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
                    ||c14==g9||c14==g10){
                cout<<c14<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c15>=65&&c15<=90)||(c15>=97&&c15<=122)){
            if(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
                    ||c15==g9||c15==g10){
                cout<<c15<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c16>=65&&c16<=90)||(c16>=97&&c16<=122)){
            if(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
                    ||c16==g9||c16==g10){
                cout<<c16<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c17>=65&&c17<=90)||(c17>=97&&c17<=122)){
            if(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
                    ||c17==g9||c17==g10){
                cout<<c17<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c18>=65&&c18<=90)||(c18>=97&&c18<=122)){
            if(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
                    ||c18==g9||c18==g10){
                cout<<c18<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c19>=65&&c19<=90)||(c19>=97&&c19<=122)){
            if(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
                    ||c19==g9||c19==g10){
                cout<<c19<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c20>=65&&c20<=90)||(c20>=97&&c20<=122)){
            if(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
                    ||c20==g9||c20==g10){
                cout<<c20<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }
        cout<<"You only have 0 wrong attempts left"<<endl;
    }if(man==6){     
        cout<<"  -------"<<endl;
        cout<<"  |     |                   ATTEMPTS:"<<g1<<g2<<g3<<g4<<g5<<g6<<g7<<g8<<endl; 
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |     @                                                           "<<endl;
        cout<<"  |    _|/                                                          "<<endl;
        cout<<"  |    /|                                                           "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"-----                                                               "<<endl;
        cout<<endl;
        if((c1>=65&&c1<=90)||(c1>=97&&c1<=122)){
            if(c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
                    ||c1==g9||c1==g10){
                cout<<c1<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c2>=65&&c2<=90)||(c2>=97&&c2<=122)){
            if(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
                    ||c2==g9||c2==g10){
                cout<<c2<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c3>=65&&c3<=90)||(c3>=97&&c3<=122)){
            if(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
                    ||c3==g9||c3==g10){
                cout<<c3<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c4>=65&&c4<=90)||(c4>=97&&c4<=122)){
            if(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
                    ||c4==g9||c4==g10){
                cout<<c4<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c5>=65&&c5<=90)||(c5>=97&&c5<=122)){
            if(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
                    ||c5==g9||c5==g10){
                cout<<c5<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c6>=65&&c6<=90)||(c6>=97&&c6<=122)){
            if(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
                    ||c6==g9||c6==g10){
                cout<<c6<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c7>=65&&c7<=90)||(c7>=97&&c7<=122)){
            if(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
                    ||c7==g9||c7==g10){
                cout<<c7<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c8>=65&&c8<=90)||(c8>=97&&c8<=122)){
            if(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
                    ||c8==g9||c8==g10){
                cout<<c8<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c9>=65&&c9<=90)||(c9>=97&&c9<=122)){
            if(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
                    ||c9==g9||c9==g10){
                cout<<c9<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c10>=65&&c10<=90)||(c10>=97&&c10<=122)){
            if(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
                    ||c10==g9||c10==g10){
                cout<<c10<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c11>=65&&c11<=90)||(c11>=97&&c11<=122)){
            if(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
                    ||c11==g9||c11==g10){
                cout<<c11<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c12>=65&&c12<=90)||(c12>=97&&c12<=122)){
            if(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
                    ||c12==g9||c12==g10){
                cout<<c12<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c13>=65&&c13<=90)||(c13>=97&&c13<=122)){
            if(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
                    ||c13==g9||c13==g10){
                cout<<c13<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c14>=65&&c14<=90)||(c14>=97&&c14<=122)){
            if(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
                    ||c14==g9||c14==g10){
                cout<<c14<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c15>=65&&c15<=90)||(c15>=97&&c15<=122)){
            if(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
                    ||c15==g9||c15==g10){
                cout<<c15<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c16>=65&&c16<=90)||(c16>=97&&c16<=122)){
            if(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
                    ||c16==g9||c16==g10){
                cout<<c16<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c17>=65&&c17<=90)||(c17>=97&&c17<=122)){
            if(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
                    ||c17==g9||c17==g10){
                cout<<c17<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c18>=65&&c18<=90)||(c18>=97&&c18<=122)){
            if(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
                    ||c18==g9||c18==g10){
                cout<<c18<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c19>=65&&c19<=90)||(c19>=97&&c19<=122)){
            if(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
                    ||c19==g9||c19==g10){
                cout<<c19<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c20>=65&&c20<=90)||(c20>=97&&c20<=122)){
            if(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
                    ||c20==g9||c20==g10){
                cout<<c20<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }
        cout<<endl;
        for(int i=1;i<=3;i++){
        cout<<"********************************************************************"<<endl;
        }
        cout<<"GAME OVER"<<endl;
        cout<<lose<<endl;
        cout<<"The word or words were ";
        switch(num){
        case 1:cout<<c1;break;
        case 2:cout<<c1<<c2;break;
        case 3:cout<<c1<<c2<<c3;break;
        case 4:cout<<c1<<c2<<c3<<c4;break;
        case 5:cout<<c1<<c2<<c3<<c4<<c5;break;
        case 6:cout<<c1<<c2<<c3<<c4<<c5<<c6;break;
        case 7:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7;break;
        case 8:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8;break;
        case 9:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9;break;
        case 10:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10;break;
        case 11:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11;break;
        case 12:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12;break;
        case 13:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13;break;
        case 14:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14;break;
        case 15:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15;break;
        case 16:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16;break;
        case 17:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16<<c17;break;
        case 18:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16<<c17<<c18;break;
        case 19:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16<<c17<<c18<<c19;break;
        case 20:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16<<c17<<c18<<c19<<c20;break;
        }
        return 0;  
    }
    if((c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
            ||c1==g9||c1==g10||c1==1)&&(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
            ||c2==g9||c2==g10||c2==1)&&(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
            ||c3==g9||c3==g10||c3==1)&&(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
            ||c4==g9||c4==g10||c4==1)&&(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
            ||c5==g9||c5==g10||c5==1)&&(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
            ||c6==g9||c6==g10||c6==1)&&(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
            ||c7==g9||c7==g10||c7==1)&&(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
            ||c8==g9||c8==g10||c8==1)&&(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
            ||c9==g9||c9==g10||c9==1)&&(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
            ||c10==g9||c10==g10||c10==1)&&(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
            ||c11==g9||c11==g10||c11==1)&&(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
            ||c12==g9||c12==g10||c12==1)&&(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
            ||c13==g9||c13==g10||c13==1)&&(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
            ||c14==g9||c14==g10||c14==1)&&(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
            ||c15==g9||c15==g10||c15==1)&&(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
            ||c16==g9||c16==g10||c16==1)&&(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
            ||c17==g9||c17==g10||c17==1)&&(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
            ||c18==g9||c18==g10||c18==1)&&(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
            ||c19==g9||c19==g10||c19==1)&&(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
            ||c20==g9||c20==g10||c20==1)){
        cout<<endl;
        for(int i=1;i<=3;i++){
        cout<<"********************************************************************"<<endl;
        }
        cout<<win<<endl;
        cout<<"The word or words were ";
        switch(num){
        case 1:cout<<c1;break;
        case 2:cout<<c1<<c2;break;
        case 3:cout<<c1<<c2<<c3;break;
        case 4:cout<<c1<<c2<<c3<<c4;break;
        case 5:cout<<c1<<c2<<c3<<c4<<c5;break;
        case 6:cout<<c1<<c2<<c3<<c4<<c5<<c6;break;
        case 7:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7;break;
        case 8:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8;break;
        case 9:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9;break;
        case 10:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10;break;
        case 11:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11;break;
        case 12:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12;break;
        case 13:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13;break;
        case 14:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14;break;
        case 15:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15;break;
        case 16:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16;break;
        case 17:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16<<c17;break;
        case 18:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16<<c17<<c18;break;
        case 19:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16<<c17<<c18<<c19;break;
        case 20:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16<<c17<<c18<<c19<<c20;break;
        }
        return 0;
        
    }
    cout<<endl;
    cout<<"Enter guess number 9!!"<<endl;
    cout<<"Enter only one UPPERCASE letter"<<endl;
    cin>>g9;
    for(int i=1;i<=3;i++){
        cout<<"********************************************************************"<<endl;
    }
    if(g9==c1||g9==c2||g9==c3||g9==c4||g9==c5||g9==c6||g9==c7||g9==c2||g9==c9||g9==c10||g9==c11
            ||g9==c12||g9==c13||g9==c14||g9==c15||g9==c16||g9==c17||g9==c18||g9==c19||g9==c20){
        
    }else{
        man=man+1;
    }if(man==0){
        cout<<"  -------"<<endl;
        cout<<"  |     |                   ATTEMPTS:"<<g1<<g2<<g3<<g4<<g5<<g6<<g7<<g8<<g9<<endl; 
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"-----                                                               "<<endl;
        cout<<endl;
        if((c1>=65&&c1<=90)||(c1>=97&&c1<=122)){
            if(c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
                    ||c1==g9||c1==g10){
                cout<<c1<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c2>=65&&c2<=90)||(c2>=97&&c2<=122)){
            if(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
                    ||c2==g9||c2==g10){
                cout<<c2<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c3>=65&&c3<=90)||(c3>=97&&c3<=122)){
            if(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
                    ||c3==g9||c3==g10){
                cout<<c3<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c4>=65&&c4<=90)||(c4>=97&&c4<=122)){
            if(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
                    ||c4==g9||c4==g10){
                cout<<c4<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c5>=65&&c5<=90)||(c5>=97&&c5<=122)){
            if(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
                    ||c5==g9||c5==g10){
                cout<<c5<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c6>=65&&c6<=90)||(c6>=97&&c6<=122)){
            if(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
                    ||c6==g9||c6==g10){
                cout<<c6<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c7>=65&&c7<=90)||(c7>=97&&c7<=122)){
            if(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
                    ||c7==g9||c7==g10){
                cout<<c7<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c8>=65&&c8<=90)||(c8>=97&&c8<=122)){
            if(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
                    ||c8==g9||c8==g10){
                cout<<c8<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c9>=65&&c9<=90)||(c9>=97&&c9<=122)){
            if(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
                    ||c9==g9||c9==g10){
                cout<<c9<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c10>=65&&c10<=90)||(c10>=97&&c10<=122)){
            if(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
                    ||c10==g9||c10==g10){
                cout<<c10<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c11>=65&&c11<=90)||(c11>=97&&c11<=122)){
            if(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
                    ||c11==g9||c11==g10){
                cout<<c11<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c12>=65&&c12<=90)||(c12>=97&&c12<=122)){
            if(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
                    ||c12==g9||c12==g10){
                cout<<c12<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c13>=65&&c13<=90)||(c13>=97&&c13<=122)){
            if(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
                    ||c13==g9||c13==g10){
                cout<<c13<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c14>=65&&c14<=90)||(c14>=97&&c14<=122)){
            if(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
                    ||c14==g9||c14==g10){
                cout<<c14<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c15>=65&&c15<=90)||(c15>=97&&c15<=122)){
            if(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
                    ||c15==g9||c15==g10){
                cout<<c15<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c16>=65&&c16<=90)||(c16>=97&&c16<=122)){
            if(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
                    ||c16==g9||c16==g10){
                cout<<c16<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c17>=65&&c17<=90)||(c17>=97&&c17<=122)){
            if(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
                    ||c17==g9||c17==g10){
                cout<<c17<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c18>=65&&c18<=90)||(c18>=97&&c18<=122)){
            if(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
                    ||c18==g9||c18==g10){
                cout<<c18<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c19>=65&&c19<=90)||(c19>=97&&c19<=122)){
            if(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
                    ||c19==g9||c19==g10){
                cout<<c19<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c20>=65&&c20<=90)||(c20>=97&&c20<=122)){
            if(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
                    ||c20==g9||c20==g10){
                cout<<c20<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }
    }if(man==1){     
        cout<<"  -------"<<endl;
        cout<<"  |     |                   ATTEMPTS:"<<g1<<g2<<g3<<g4<<g5<<g6<<g7<<g8<<g9<<endl; 
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |     @                                                           "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"-----                                                               "<<endl;
        cout<<endl;
        if((c1>=65&&c1<=90)||(c1>=97&&c1<=122)){
            if(c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
                    ||c1==g9||c1==g10){
                cout<<c1<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c2>=65&&c2<=90)||(c2>=97&&c2<=122)){
            if(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
                    ||c2==g9||c2==g10){
                cout<<c2<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c3>=65&&c3<=90)||(c3>=97&&c3<=122)){
            if(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
                    ||c3==g9||c3==g10){
                cout<<c3<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c4>=65&&c4<=90)||(c4>=97&&c4<=122)){
            if(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
                    ||c4==g9||c4==g10){
                cout<<c4<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c5>=65&&c5<=90)||(c5>=97&&c5<=122)){
            if(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
                    ||c5==g9||c5==g10){
                cout<<c5<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c6>=65&&c6<=90)||(c6>=97&&c6<=122)){
            if(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
                    ||c6==g9||c6==g10){
                cout<<c6<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c7>=65&&c7<=90)||(c7>=97&&c7<=122)){
            if(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
                    ||c7==g9||c7==g10){
                cout<<c7<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c8>=65&&c8<=90)||(c8>=97&&c8<=122)){
            if(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
                    ||c8==g9||c8==g10){
                cout<<c8<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c9>=65&&c9<=90)||(c9>=97&&c9<=122)){
            if(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
                    ||c9==g9||c9==g10){
                cout<<c9<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c10>=65&&c10<=90)||(c10>=97&&c10<=122)){
            if(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
                    ||c10==g9||c10==g10){
                cout<<c10<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c11>=65&&c11<=90)||(c11>=97&&c11<=122)){
            if(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
                    ||c11==g9||c11==g10){
                cout<<c11<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c12>=65&&c12<=90)||(c12>=97&&c12<=122)){
            if(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
                    ||c12==g9||c12==g10){
                cout<<c12<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c13>=65&&c13<=90)||(c13>=97&&c13<=122)){
            if(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
                    ||c13==g9||c13==g10){
                cout<<c13<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c14>=65&&c14<=90)||(c14>=97&&c14<=122)){
            if(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
                    ||c14==g9||c14==g10){
                cout<<c14<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c15>=65&&c15<=90)||(c15>=97&&c15<=122)){
            if(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
                    ||c15==g9||c15==g10){
                cout<<c15<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c16>=65&&c16<=90)||(c16>=97&&c16<=122)){
            if(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
                    ||c16==g9||c16==g10){
                cout<<c16<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c17>=65&&c17<=90)||(c17>=97&&c17<=122)){
            if(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
                    ||c17==g9||c17==g10){
                cout<<c17<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c18>=65&&c18<=90)||(c18>=97&&c18<=122)){
            if(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
                    ||c18==g9||c18==g10){
                cout<<c18<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c19>=65&&c19<=90)||(c19>=97&&c19<=122)){
            if(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
                    ||c19==g9||c19==g10){
                cout<<c19<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c20>=65&&c20<=90)||(c20>=97&&c20<=122)){
            if(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
                    ||c20==g9||c20==g10){
                cout<<c20<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }
        cout<<"You only have 4 wrong attempts left"<<endl;
    }if(man==2){     
        cout<<"  -------"<<endl;
        cout<<"  |     |                   ATTEMPTS:"<<g1<<g2<<g3<<g4<<g5<<g6<<g7<<g8<<g9<<endl; 
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |     @                                                           "<<endl;
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"-----                                                               "<<endl;
        cout<<endl;
        if((c1>=65&&c1<=90)||(c1>=97&&c1<=122)){
            if(c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
                    ||c1==g9||c1==g10){
                cout<<c1<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c2>=65&&c2<=90)||(c2>=97&&c2<=122)){
            if(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
                    ||c2==g9||c2==g10){
                cout<<c2<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c3>=65&&c3<=90)||(c3>=97&&c3<=122)){
            if(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
                    ||c3==g9||c3==g10){
                cout<<c3<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c4>=65&&c4<=90)||(c4>=97&&c4<=122)){
            if(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
                    ||c4==g9||c4==g10){
                cout<<c4<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c5>=65&&c5<=90)||(c5>=97&&c5<=122)){
            if(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
                    ||c5==g9||c5==g10){
                cout<<c5<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c6>=65&&c6<=90)||(c6>=97&&c6<=122)){
            if(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
                    ||c6==g9||c6==g10){
                cout<<c6<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c7>=65&&c7<=90)||(c7>=97&&c7<=122)){
            if(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
                    ||c7==g9||c7==g10){
                cout<<c7<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c8>=65&&c8<=90)||(c8>=97&&c8<=122)){
            if(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
                    ||c8==g9||c8==g10){
                cout<<c8<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c9>=65&&c9<=90)||(c9>=97&&c9<=122)){
            if(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
                    ||c9==g9||c9==g10){
                cout<<c9<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c10>=65&&c10<=90)||(c10>=97&&c10<=122)){
            if(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
                    ||c10==g9||c10==g10){
                cout<<c10<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c11>=65&&c11<=90)||(c11>=97&&c11<=122)){
            if(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
                    ||c11==g9||c11==g10){
                cout<<c11<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c12>=65&&c12<=90)||(c12>=97&&c12<=122)){
            if(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
                    ||c12==g9||c12==g10){
                cout<<c12<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c13>=65&&c13<=90)||(c13>=97&&c13<=122)){
            if(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
                    ||c13==g9||c13==g10){
                cout<<c13<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c14>=65&&c14<=90)||(c14>=97&&c14<=122)){
            if(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
                    ||c14==g9||c14==g10){
                cout<<c14<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c15>=65&&c15<=90)||(c15>=97&&c15<=122)){
            if(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
                    ||c15==g9||c15==g10){
                cout<<c15<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c16>=65&&c16<=90)||(c16>=97&&c16<=122)){
            if(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
                    ||c16==g9||c16==g10){
                cout<<c16<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c17>=65&&c17<=90)||(c17>=97&&c17<=122)){
            if(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
                    ||c17==g9||c17==g10){
                cout<<c17<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c18>=65&&c18<=90)||(c18>=97&&c18<=122)){
            if(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
                    ||c18==g9||c18==g10){
                cout<<c18<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c19>=65&&c19<=90)||(c19>=97&&c19<=122)){
            if(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
                    ||c19==g9||c19==g10){
                cout<<c19<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c20>=65&&c20<=90)||(c20>=97&&c20<=122)){
            if(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
                    ||c20==g9||c20==g10){
                cout<<c20<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }
        cout<<"You only have 3 wrong attempts left"<<endl;
    }if(man==3){     
        cout<<"  -------"<<endl;
        cout<<"  |     |                   ATTEMPTS:"<<g1<<g2<<g3<<g4<<g5<<g6<<g7<<g8<<g9<<endl; 
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |     @                                                           "<<endl;
        cout<<"  |     |/                                                          "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"-----                                                               "<<endl;
        cout<<endl;
        if((c1>=65&&c1<=90)||(c1>=97&&c1<=122)){
            if(c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
                    ||c1==g9||c1==g10){
                cout<<c1<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c2>=65&&c2<=90)||(c2>=97&&c2<=122)){
            if(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
                    ||c2==g9||c2==g10){
                cout<<c2<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c3>=65&&c3<=90)||(c3>=97&&c3<=122)){
            if(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
                    ||c3==g9||c3==g10){
                cout<<c3<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c4>=65&&c4<=90)||(c4>=97&&c4<=122)){
            if(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
                    ||c4==g9||c4==g10){
                cout<<c4<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c5>=65&&c5<=90)||(c5>=97&&c5<=122)){
            if(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
                    ||c5==g9||c5==g10){
                cout<<c5<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c6>=65&&c6<=90)||(c6>=97&&c6<=122)){
            if(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
                    ||c6==g9||c6==g10){
                cout<<c6<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c7>=65&&c7<=90)||(c7>=97&&c7<=122)){
            if(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
                    ||c7==g9||c7==g10){
                cout<<c7<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c8>=65&&c8<=90)||(c8>=97&&c8<=122)){
            if(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
                    ||c8==g9||c8==g10){
                cout<<c8<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c9>=65&&c9<=90)||(c9>=97&&c9<=122)){
            if(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
                    ||c9==g9||c9==g10){
                cout<<c9<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c10>=65&&c10<=90)||(c10>=97&&c10<=122)){
            if(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
                    ||c10==g9||c10==g10){
                cout<<c10<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c11>=65&&c11<=90)||(c11>=97&&c11<=122)){
            if(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
                    ||c11==g9||c11==g10){
                cout<<c11<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c12>=65&&c12<=90)||(c12>=97&&c12<=122)){
            if(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
                    ||c12==g9||c12==g10){
                cout<<c12<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c13>=65&&c13<=90)||(c13>=97&&c13<=122)){
            if(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
                    ||c13==g9||c13==g10){
                cout<<c13<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c14>=65&&c14<=90)||(c14>=97&&c14<=122)){
            if(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
                    ||c14==g9||c14==g10){
                cout<<c14<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c15>=65&&c15<=90)||(c15>=97&&c15<=122)){
            if(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
                    ||c15==g9||c15==g10){
                cout<<c15<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c16>=65&&c16<=90)||(c16>=97&&c16<=122)){
            if(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
                    ||c16==g9||c16==g10){
                cout<<c16<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c17>=65&&c17<=90)||(c17>=97&&c17<=122)){
            if(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
                    ||c17==g9||c17==g10){
                cout<<c17<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c18>=65&&c18<=90)||(c18>=97&&c18<=122)){
            if(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
                    ||c18==g9||c18==g10){
                cout<<c18<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c19>=65&&c19<=90)||(c19>=97&&c19<=122)){
            if(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
                    ||c19==g9||c19==g10){
                cout<<c19<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c20>=65&&c20<=90)||(c20>=97&&c20<=122)){
            if(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
                    ||c20==g9||c20==g10){
                cout<<c20<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }
        cout<<"You only have 2 wrong attempts left"<<endl;
    }if(man==4){     
        cout<<"  -------"<<endl;
        cout<<"  |     |                   ATTEMPTS:"<<g1<<g2<<g3<<g4<<g5<<g6<<g7<<g8<<g9<<endl; 
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |     @                                                           "<<endl;
        cout<<"  |    _|/                                                          "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"-----                                                               "<<endl;
        cout<<endl;
        if((c1>=65&&c1<=90)||(c1>=97&&c1<=122)){
            if(c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
                    ||c1==g9||c1==g10){
                cout<<c1<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c2>=65&&c2<=90)||(c2>=97&&c2<=122)){
            if(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
                    ||c2==g9||c2==g10){
                cout<<c2<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c3>=65&&c3<=90)||(c3>=97&&c3<=122)){
            if(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
                    ||c3==g9||c3==g10){
                cout<<c3<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c4>=65&&c4<=90)||(c4>=97&&c4<=122)){
            if(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
                    ||c4==g9||c4==g10){
                cout<<c4<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c5>=65&&c5<=90)||(c5>=97&&c5<=122)){
            if(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
                    ||c5==g9||c5==g10){
                cout<<c5<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c6>=65&&c6<=90)||(c6>=97&&c6<=122)){
            if(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
                    ||c6==g9||c6==g10){
                cout<<c6<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c7>=65&&c7<=90)||(c7>=97&&c7<=122)){
            if(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
                    ||c7==g9||c7==g10){
                cout<<c7<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c8>=65&&c8<=90)||(c8>=97&&c8<=122)){
            if(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
                    ||c8==g9||c8==g10){
                cout<<c8<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c9>=65&&c9<=90)||(c9>=97&&c9<=122)){
            if(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
                    ||c9==g9||c9==g10){
                cout<<c9<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c10>=65&&c10<=90)||(c10>=97&&c10<=122)){
            if(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
                    ||c10==g9||c10==g10){
                cout<<c10<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c11>=65&&c11<=90)||(c11>=97&&c11<=122)){
            if(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
                    ||c11==g9||c11==g10){
                cout<<c11<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c12>=65&&c12<=90)||(c12>=97&&c12<=122)){
            if(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
                    ||c12==g9||c12==g10){
                cout<<c12<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c13>=65&&c13<=90)||(c13>=97&&c13<=122)){
            if(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
                    ||c13==g9||c13==g10){
                cout<<c13<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c14>=65&&c14<=90)||(c14>=97&&c14<=122)){
            if(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
                    ||c14==g9||c14==g10){
                cout<<c14<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c15>=65&&c15<=90)||(c15>=97&&c15<=122)){
            if(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
                    ||c15==g9||c15==g10){
                cout<<c15<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c16>=65&&c16<=90)||(c16>=97&&c16<=122)){
            if(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
                    ||c16==g9||c16==g10){
                cout<<c16<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c17>=65&&c17<=90)||(c17>=97&&c17<=122)){
            if(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
                    ||c17==g9||c17==g10){
                cout<<c17<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c18>=65&&c18<=90)||(c18>=97&&c18<=122)){
            if(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
                    ||c18==g9||c18==g10){
                cout<<c18<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c19>=65&&c19<=90)||(c19>=97&&c19<=122)){
            if(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
                    ||c19==g9||c19==g10){
                cout<<c19<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c20>=65&&c20<=90)||(c20>=97&&c20<=122)){
            if(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
                    ||c20==g9||c20==g10){
                cout<<c20<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }
        cout<<"You only have 1 wrong attempt left"<<endl;
    }if(man==5){     
        cout<<"  -------"<<endl;
        cout<<"  |     |                   ATTEMPTS:"<<g1<<g2<<g3<<g4<<g5<<g6<<g7<<g8<<g9<<endl; 
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |     @                                                           "<<endl;
        cout<<"  |    _|/                                                          "<<endl;
        cout<<"  |    /                                                            "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"-----                                                               "<<endl;
        cout<<endl;
        if((c1>=65&&c1<=90)||(c1>=97&&c1<=122)){
            if(c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
                    ||c1==g9||c1==g10){
                cout<<c1<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c2>=65&&c2<=90)||(c2>=97&&c2<=122)){
            if(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
                    ||c2==g9||c2==g10){
                cout<<c2<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c3>=65&&c3<=90)||(c3>=97&&c3<=122)){
            if(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
                    ||c3==g9||c3==g10){
                cout<<c3<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c4>=65&&c4<=90)||(c4>=97&&c4<=122)){
            if(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
                    ||c4==g9||c4==g10){
                cout<<c4<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c5>=65&&c5<=90)||(c5>=97&&c5<=122)){
            if(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
                    ||c5==g9||c5==g10){
                cout<<c5<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c6>=65&&c6<=90)||(c6>=97&&c6<=122)){
            if(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
                    ||c6==g9||c6==g10){
                cout<<c6<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c7>=65&&c7<=90)||(c7>=97&&c7<=122)){
            if(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
                    ||c7==g9||c7==g10){
                cout<<c7<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c8>=65&&c8<=90)||(c8>=97&&c8<=122)){
            if(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
                    ||c8==g9||c8==g10){
                cout<<c8<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c9>=65&&c9<=90)||(c9>=97&&c9<=122)){
            if(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
                    ||c9==g9||c9==g10){
                cout<<c9<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c10>=65&&c10<=90)||(c10>=97&&c10<=122)){
            if(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
                    ||c10==g9||c10==g10){
                cout<<c10<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c11>=65&&c11<=90)||(c11>=97&&c11<=122)){
            if(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
                    ||c11==g9||c11==g10){
                cout<<c11<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c12>=65&&c12<=90)||(c12>=97&&c12<=122)){
            if(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
                    ||c12==g9||c12==g10){
                cout<<c12<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c13>=65&&c13<=90)||(c13>=97&&c13<=122)){
            if(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
                    ||c13==g9||c13==g10){
                cout<<c13<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c14>=65&&c14<=90)||(c14>=97&&c14<=122)){
            if(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
                    ||c14==g9||c14==g10){
                cout<<c14<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c15>=65&&c15<=90)||(c15>=97&&c15<=122)){
            if(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
                    ||c15==g9||c15==g10){
                cout<<c15<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c16>=65&&c16<=90)||(c16>=97&&c16<=122)){
            if(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
                    ||c16==g9||c16==g10){
                cout<<c16<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c17>=65&&c17<=90)||(c17>=97&&c17<=122)){
            if(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
                    ||c17==g9||c17==g10){
                cout<<c17<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c18>=65&&c18<=90)||(c18>=97&&c18<=122)){
            if(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
                    ||c18==g9||c18==g10){
                cout<<c18<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c19>=65&&c19<=90)||(c19>=97&&c19<=122)){
            if(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
                    ||c19==g9||c19==g10){
                cout<<c19<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c20>=65&&c20<=90)||(c20>=97&&c20<=122)){
            if(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
                    ||c20==g9||c20==g10){
                cout<<c20<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }
        cout<<"You only have 0 wrong attempts left"<<endl;
    }if(man==6){     
        cout<<"  -------"<<endl;
        cout<<"  |     |                   ATTEMPTS:"<<g1<<g2<<g3<<g4<<g5<<g6<<g7<<g8<<g9<<endl; 
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |     @                                                           "<<endl;
        cout<<"  |    _|/                                                          "<<endl;
        cout<<"  |    /|                                                           "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"-----                                                               "<<endl;
        cout<<endl;
        if((c1>=65&&c1<=90)||(c1>=97&&c1<=122)){
            if(c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
                    ||c1==g9||c1==g10){
                cout<<c1<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c2>=65&&c2<=90)||(c2>=97&&c2<=122)){
            if(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
                    ||c2==g9||c2==g10){
                cout<<c2<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c3>=65&&c3<=90)||(c3>=97&&c3<=122)){
            if(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
                    ||c3==g9||c3==g10){
                cout<<c3<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c4>=65&&c4<=90)||(c4>=97&&c4<=122)){
            if(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
                    ||c4==g9||c4==g10){
                cout<<c4<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c5>=65&&c5<=90)||(c5>=97&&c5<=122)){
            if(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
                    ||c5==g9||c5==g10){
                cout<<c5<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c6>=65&&c6<=90)||(c6>=97&&c6<=122)){
            if(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
                    ||c6==g9||c6==g10){
                cout<<c6<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c7>=65&&c7<=90)||(c7>=97&&c7<=122)){
            if(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
                    ||c7==g9||c7==g10){
                cout<<c7<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c8>=65&&c8<=90)||(c8>=97&&c8<=122)){
            if(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
                    ||c8==g9||c8==g10){
                cout<<c8<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c9>=65&&c9<=90)||(c9>=97&&c9<=122)){
            if(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
                    ||c9==g9||c9==g10){
                cout<<c9<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c10>=65&&c10<=90)||(c10>=97&&c10<=122)){
            if(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
                    ||c10==g9||c10==g10){
                cout<<c10<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c11>=65&&c11<=90)||(c11>=97&&c11<=122)){
            if(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
                    ||c11==g9||c11==g10){
                cout<<c11<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c12>=65&&c12<=90)||(c12>=97&&c12<=122)){
            if(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
                    ||c12==g9||c12==g10){
                cout<<c12<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c13>=65&&c13<=90)||(c13>=97&&c13<=122)){
            if(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
                    ||c13==g9||c13==g10){
                cout<<c13<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c14>=65&&c14<=90)||(c14>=97&&c14<=122)){
            if(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
                    ||c14==g9||c14==g10){
                cout<<c14<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c15>=65&&c15<=90)||(c15>=97&&c15<=122)){
            if(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
                    ||c15==g9||c15==g10){
                cout<<c15<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c16>=65&&c16<=90)||(c16>=97&&c16<=122)){
            if(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
                    ||c16==g9||c16==g10){
                cout<<c16<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c17>=65&&c17<=90)||(c17>=97&&c17<=122)){
            if(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
                    ||c17==g9||c17==g10){
                cout<<c17<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c18>=65&&c18<=90)||(c18>=97&&c18<=122)){
            if(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
                    ||c18==g9||c18==g10){
                cout<<c18<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c19>=65&&c19<=90)||(c19>=97&&c19<=122)){
            if(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
                    ||c19==g9||c19==g10){
                cout<<c19<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c20>=65&&c20<=90)||(c20>=97&&c20<=122)){
            if(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
                    ||c20==g9||c20==g10){
                cout<<c20<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }
        cout<<endl;
        for(int i=1;i<=3;i++){
        cout<<"********************************************************************"<<endl;
        }
        cout<<"GAME OVER"<<endl;
        cout<<lose<<endl;
        cout<<"The word or words were ";
        switch(num){
        case 1:cout<<c1;break;
        case 2:cout<<c1<<c2;break;
        case 3:cout<<c1<<c2<<c3;break;
        case 4:cout<<c1<<c2<<c3<<c4;break;
        case 5:cout<<c1<<c2<<c3<<c4<<c5;break;
        case 6:cout<<c1<<c2<<c3<<c4<<c5<<c6;break;
        case 7:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7;break;
        case 8:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8;break;
        case 9:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9;break;
        case 10:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10;break;
        case 11:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11;break;
        case 12:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12;break;
        case 13:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13;break;
        case 14:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14;break;
        case 15:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15;break;
        case 16:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16;break;
        case 17:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16<<c17;break;
        case 18:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16<<c17<<c18;break;
        case 19:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16<<c17<<c18<<c19;break;
        case 20:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16<<c17<<c18<<c19<<c20;break;
        }
        return 0;  
    }
    if((c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
            ||c1==g9||c1==g10||c1==1)&&(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
            ||c2==g9||c2==g10||c2==1)&&(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
            ||c3==g9||c3==g10||c3==1)&&(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
            ||c4==g9||c4==g10||c4==1)&&(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
            ||c5==g9||c5==g10||c5==1)&&(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
            ||c6==g9||c6==g10||c6==1)&&(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
            ||c7==g9||c7==g10||c7==1)&&(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
            ||c8==g9||c8==g10||c8==1)&&(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
            ||c9==g9||c9==g10||c9==1)&&(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
            ||c10==g9||c10==g10||c10==1)&&(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
            ||c11==g9||c11==g10||c11==1)&&(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
            ||c12==g9||c12==g10||c12==1)&&(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
            ||c13==g9||c13==g10||c13==1)&&(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
            ||c14==g9||c14==g10||c14==1)&&(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
            ||c15==g9||c15==g10||c15==1)&&(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
            ||c16==g9||c16==g10||c16==1)&&(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
            ||c17==g9||c17==g10||c17==1)&&(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
            ||c18==g9||c18==g10||c18==1)&&(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
            ||c19==g9||c19==g10||c19==1)&&(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
            ||c20==g9||c20==g10||c20==1)){
        cout<<endl;
        for(int i=1;i<=3;i++){
        cout<<"********************************************************************"<<endl;
        }
        cout<<win<<endl;
        cout<<"The word or words were ";
        switch(num){
        case 1:cout<<c1;break;
        case 2:cout<<c1<<c2;break;
        case 3:cout<<c1<<c2<<c3;break;
        case 4:cout<<c1<<c2<<c3<<c4;break;
        case 5:cout<<c1<<c2<<c3<<c4<<c5;break;
        case 6:cout<<c1<<c2<<c3<<c4<<c5<<c6;break;
        case 7:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7;break;
        case 8:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8;break;
        case 9:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9;break;
        case 10:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10;break;
        case 11:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11;break;
        case 12:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12;break;
        case 13:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13;break;
        case 14:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14;break;
        case 15:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15;break;
        case 16:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16;break;
        case 17:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16<<c17;break;
        case 18:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16<<c17<<c18;break;
        case 19:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16<<c17<<c18<<c19;break;
        case 20:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16<<c17<<c18<<c19<<c20;break;
        }
        return 0;
        
    }
    cout<<endl;
    cout<<"Enter guess number 10!!"<<endl;
    cout<<"Enter only one UPPERCASE letter"<<endl;
    cin>>g10;
    for(int i=1;i<=3;i++){
        cout<<"********************************************************************"<<endl;
    }
    if(g10==c1||g10==c2||g10==c3||g10==c4||g10==c5||g10==c6||g10==c7||g10==c2||g10==c9||g10==c10||g10==c11
            ||g10==c12||g10==c13||g10==c14||g10==c15||g10==c16||g10==c17||g10==c18||g10==c19||g10==c20){
        
    }else{
        man=man+1;
    }if(man==0){
        cout<<"  -------"<<endl;
        cout<<"  |     |                   ATTEMPTS:"<<g1<<g2<<g3<<g4<<g5<<g6<<g7<<g8<<g9<<g10<<endl; 
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"-----                                                               "<<endl;
        cout<<endl;
        if((c1>=65&&c1<=90)||(c1>=97&&c1<=122)){
            if(c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
                    ||c1==g9||c1==g10){
                cout<<c1<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c2>=65&&c2<=90)||(c2>=97&&c2<=122)){
            if(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
                    ||c2==g9||c2==g10){
                cout<<c2<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c3>=65&&c3<=90)||(c3>=97&&c3<=122)){
            if(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
                    ||c3==g9||c3==g10){
                cout<<c3<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c4>=65&&c4<=90)||(c4>=97&&c4<=122)){
            if(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
                    ||c4==g9||c4==g10){
                cout<<c4<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c5>=65&&c5<=90)||(c5>=97&&c5<=122)){
            if(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
                    ||c5==g9||c5==g10){
                cout<<c5<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c6>=65&&c6<=90)||(c6>=97&&c6<=122)){
            if(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
                    ||c6==g9||c6==g10){
                cout<<c6<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c7>=65&&c7<=90)||(c7>=97&&c7<=122)){
            if(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
                    ||c7==g9||c7==g10){
                cout<<c7<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c8>=65&&c8<=90)||(c8>=97&&c8<=122)){
            if(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
                    ||c8==g9||c8==g10){
                cout<<c8<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c9>=65&&c9<=90)||(c9>=97&&c9<=122)){
            if(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
                    ||c9==g9||c9==g10){
                cout<<c9<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c10>=65&&c10<=90)||(c10>=97&&c10<=122)){
            if(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
                    ||c10==g9||c10==g10){
                cout<<c10<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c11>=65&&c11<=90)||(c11>=97&&c11<=122)){
            if(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
                    ||c11==g9||c11==g10){
                cout<<c11<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c12>=65&&c12<=90)||(c12>=97&&c12<=122)){
            if(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
                    ||c12==g9||c12==g10){
                cout<<c12<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c13>=65&&c13<=90)||(c13>=97&&c13<=122)){
            if(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
                    ||c13==g9||c13==g10){
                cout<<c13<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c14>=65&&c14<=90)||(c14>=97&&c14<=122)){
            if(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
                    ||c14==g9||c14==g10){
                cout<<c14<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c15>=65&&c15<=90)||(c15>=97&&c15<=122)){
            if(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
                    ||c15==g9||c15==g10){
                cout<<c15<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c16>=65&&c16<=90)||(c16>=97&&c16<=122)){
            if(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
                    ||c16==g9||c16==g10){
                cout<<c16<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c17>=65&&c17<=90)||(c17>=97&&c17<=122)){
            if(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
                    ||c17==g9||c17==g10){
                cout<<c17<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c18>=65&&c18<=90)||(c18>=97&&c18<=122)){
            if(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
                    ||c18==g9||c18==g10){
                cout<<c18<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c19>=65&&c19<=90)||(c19>=97&&c19<=122)){
            if(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
                    ||c19==g9||c19==g10){
                cout<<c19<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c20>=65&&c20<=90)||(c20>=97&&c20<=122)){
            if(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
                    ||c20==g9||c20==g10){
                cout<<c20<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }
    }if(man==1){     
        cout<<"  -------"<<endl;
        cout<<"  |     |                   ATTEMPTS:"<<g1<<g2<<g3<<g4<<g5<<g6<<g7<<g8<<g9<<g10<<endl; 
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |     @                                                           "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"-----                                                               "<<endl;
        cout<<endl;
        if((c1>=65&&c1<=90)||(c1>=97&&c1<=122)){
            if(c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
                    ||c1==g9||c1==g10){
                cout<<c1<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c2>=65&&c2<=90)||(c2>=97&&c2<=122)){
            if(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
                    ||c2==g9||c2==g10){
                cout<<c2<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c3>=65&&c3<=90)||(c3>=97&&c3<=122)){
            if(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
                    ||c3==g9||c3==g10){
                cout<<c3<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c4>=65&&c4<=90)||(c4>=97&&c4<=122)){
            if(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
                    ||c4==g9||c4==g10){
                cout<<c4<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c5>=65&&c5<=90)||(c5>=97&&c5<=122)){
            if(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
                    ||c5==g9||c5==g10){
                cout<<c5<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c6>=65&&c6<=90)||(c6>=97&&c6<=122)){
            if(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
                    ||c6==g9||c6==g10){
                cout<<c6<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c7>=65&&c7<=90)||(c7>=97&&c7<=122)){
            if(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
                    ||c7==g9||c7==g10){
                cout<<c7<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c8>=65&&c8<=90)||(c8>=97&&c8<=122)){
            if(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
                    ||c8==g9||c8==g10){
                cout<<c8<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c9>=65&&c9<=90)||(c9>=97&&c9<=122)){
            if(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
                    ||c9==g9||c9==g10){
                cout<<c9<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c10>=65&&c10<=90)||(c10>=97&&c10<=122)){
            if(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
                    ||c10==g9||c10==g10){
                cout<<c10<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c11>=65&&c11<=90)||(c11>=97&&c11<=122)){
            if(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
                    ||c11==g9||c11==g10){
                cout<<c11<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c12>=65&&c12<=90)||(c12>=97&&c12<=122)){
            if(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
                    ||c12==g9||c12==g10){
                cout<<c12<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c13>=65&&c13<=90)||(c13>=97&&c13<=122)){
            if(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
                    ||c13==g9||c13==g10){
                cout<<c13<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c14>=65&&c14<=90)||(c14>=97&&c14<=122)){
            if(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
                    ||c14==g9||c14==g10){
                cout<<c14<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c15>=65&&c15<=90)||(c15>=97&&c15<=122)){
            if(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
                    ||c15==g9||c15==g10){
                cout<<c15<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c16>=65&&c16<=90)||(c16>=97&&c16<=122)){
            if(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
                    ||c16==g9||c16==g10){
                cout<<c16<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c17>=65&&c17<=90)||(c17>=97&&c17<=122)){
            if(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
                    ||c17==g9||c17==g10){
                cout<<c17<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c18>=65&&c18<=90)||(c18>=97&&c18<=122)){
            if(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
                    ||c18==g9||c18==g10){
                cout<<c18<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c19>=65&&c19<=90)||(c19>=97&&c19<=122)){
            if(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
                    ||c19==g9||c19==g10){
                cout<<c19<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c20>=65&&c20<=90)||(c20>=97&&c20<=122)){
            if(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
                    ||c20==g9||c20==g10){
                cout<<c20<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }
        cout<<"You only have 4 wrong attempts left"<<endl;
    }if(man==2){     
        cout<<"  -------"<<endl;
        cout<<"  |     |                   ATTEMPTS:"<<g1<<g2<<g3<<g4<<g5<<g6<<g7<<g8<<g9<<g10<<endl; 
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |     @                                                           "<<endl;
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"-----                                                               "<<endl;
        cout<<endl;
        if((c1>=65&&c1<=90)||(c1>=97&&c1<=122)){
            if(c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
                    ||c1==g9||c1==g10){
                cout<<c1<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c2>=65&&c2<=90)||(c2>=97&&c2<=122)){
            if(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
                    ||c2==g9||c2==g10){
                cout<<c2<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c3>=65&&c3<=90)||(c3>=97&&c3<=122)){
            if(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
                    ||c3==g9||c3==g10){
                cout<<c3<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c4>=65&&c4<=90)||(c4>=97&&c4<=122)){
            if(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
                    ||c4==g9||c4==g10){
                cout<<c4<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c5>=65&&c5<=90)||(c5>=97&&c5<=122)){
            if(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
                    ||c5==g9||c5==g10){
                cout<<c5<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c6>=65&&c6<=90)||(c6>=97&&c6<=122)){
            if(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
                    ||c6==g9||c6==g10){
                cout<<c6<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c7>=65&&c7<=90)||(c7>=97&&c7<=122)){
            if(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
                    ||c7==g9||c7==g10){
                cout<<c7<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c8>=65&&c8<=90)||(c8>=97&&c8<=122)){
            if(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
                    ||c8==g9||c8==g10){
                cout<<c8<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c9>=65&&c9<=90)||(c9>=97&&c9<=122)){
            if(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
                    ||c9==g9||c9==g10){
                cout<<c9<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c10>=65&&c10<=90)||(c10>=97&&c10<=122)){
            if(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
                    ||c10==g9||c10==g10){
                cout<<c10<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c11>=65&&c11<=90)||(c11>=97&&c11<=122)){
            if(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
                    ||c11==g9||c11==g10){
                cout<<c11<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c12>=65&&c12<=90)||(c12>=97&&c12<=122)){
            if(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
                    ||c12==g9||c12==g10){
                cout<<c12<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c13>=65&&c13<=90)||(c13>=97&&c13<=122)){
            if(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
                    ||c13==g9||c13==g10){
                cout<<c13<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c14>=65&&c14<=90)||(c14>=97&&c14<=122)){
            if(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
                    ||c14==g9||c14==g10){
                cout<<c14<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c15>=65&&c15<=90)||(c15>=97&&c15<=122)){
            if(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
                    ||c15==g9||c15==g10){
                cout<<c15<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c16>=65&&c16<=90)||(c16>=97&&c16<=122)){
            if(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
                    ||c16==g9||c16==g10){
                cout<<c16<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c17>=65&&c17<=90)||(c17>=97&&c17<=122)){
            if(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
                    ||c17==g9||c17==g10){
                cout<<c17<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c18>=65&&c18<=90)||(c18>=97&&c18<=122)){
            if(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
                    ||c18==g9||c18==g10){
                cout<<c18<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c19>=65&&c19<=90)||(c19>=97&&c19<=122)){
            if(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
                    ||c19==g9||c19==g10){
                cout<<c19<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c20>=65&&c20<=90)||(c20>=97&&c20<=122)){
            if(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
                    ||c20==g9||c20==g10){
                cout<<c20<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }
        cout<<"You only have 3 wrong attempts left"<<endl;
    }if(man==3){     
        cout<<"  -------"<<endl;
        cout<<"  |     |                   ATTEMPTS:"<<g1<<g2<<g3<<g4<<g5<<g6<<g7<<g8<<g9<<g10<<endl; 
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |     @                                                           "<<endl;
        cout<<"  |     |/                                                          "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"-----                                                               "<<endl;
        cout<<endl;
        if((c1>=65&&c1<=90)||(c1>=97&&c1<=122)){
            if(c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
                    ||c1==g9||c1==g10){
                cout<<c1<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c2>=65&&c2<=90)||(c2>=97&&c2<=122)){
            if(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
                    ||c2==g9||c2==g10){
                cout<<c2<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c3>=65&&c3<=90)||(c3>=97&&c3<=122)){
            if(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
                    ||c3==g9||c3==g10){
                cout<<c3<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c4>=65&&c4<=90)||(c4>=97&&c4<=122)){
            if(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
                    ||c4==g9||c4==g10){
                cout<<c4<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c5>=65&&c5<=90)||(c5>=97&&c5<=122)){
            if(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
                    ||c5==g9||c5==g10){
                cout<<c5<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c6>=65&&c6<=90)||(c6>=97&&c6<=122)){
            if(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
                    ||c6==g9||c6==g10){
                cout<<c6<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c7>=65&&c7<=90)||(c7>=97&&c7<=122)){
            if(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
                    ||c7==g9||c7==g10){
                cout<<c7<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c8>=65&&c8<=90)||(c8>=97&&c8<=122)){
            if(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
                    ||c8==g9||c8==g10){
                cout<<c8<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c9>=65&&c9<=90)||(c9>=97&&c9<=122)){
            if(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
                    ||c9==g9||c9==g10){
                cout<<c9<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c10>=65&&c10<=90)||(c10>=97&&c10<=122)){
            if(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
                    ||c10==g9||c10==g10){
                cout<<c10<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c11>=65&&c11<=90)||(c11>=97&&c11<=122)){
            if(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
                    ||c11==g9||c11==g10){
                cout<<c11<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c12>=65&&c12<=90)||(c12>=97&&c12<=122)){
            if(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
                    ||c12==g9||c12==g10){
                cout<<c12<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c13>=65&&c13<=90)||(c13>=97&&c13<=122)){
            if(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
                    ||c13==g9||c13==g10){
                cout<<c13<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c14>=65&&c14<=90)||(c14>=97&&c14<=122)){
            if(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
                    ||c14==g9||c14==g10){
                cout<<c14<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c15>=65&&c15<=90)||(c15>=97&&c15<=122)){
            if(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
                    ||c15==g9||c15==g10){
                cout<<c15<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c16>=65&&c16<=90)||(c16>=97&&c16<=122)){
            if(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
                    ||c16==g9||c16==g10){
                cout<<c16<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c17>=65&&c17<=90)||(c17>=97&&c17<=122)){
            if(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
                    ||c17==g9||c17==g10){
                cout<<c17<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c18>=65&&c18<=90)||(c18>=97&&c18<=122)){
            if(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
                    ||c18==g9||c18==g10){
                cout<<c18<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c19>=65&&c19<=90)||(c19>=97&&c19<=122)){
            if(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
                    ||c19==g9||c19==g10){
                cout<<c19<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c20>=65&&c20<=90)||(c20>=97&&c20<=122)){
            if(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
                    ||c20==g9||c20==g10){
                cout<<c20<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }
        cout<<"You only have 2 wrong attempts left"<<endl;
    }if(man==4){     
        cout<<"  -------"<<endl;
        cout<<"  |     |                   ATTEMPTS:"<<g1<<g2<<g3<<g4<<g5<<g6<<g7<<g8<<g9<<g10<<endl; 
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |     @                                                           "<<endl;
        cout<<"  |    _|/                                                          "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"-----                                                               "<<endl;
        cout<<endl;
        if((c1>=65&&c1<=90)||(c1>=97&&c1<=122)){
            if(c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
                    ||c1==g9||c1==g10){
                cout<<c1<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c2>=65&&c2<=90)||(c2>=97&&c2<=122)){
            if(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
                    ||c2==g9||c2==g10){
                cout<<c2<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c3>=65&&c3<=90)||(c3>=97&&c3<=122)){
            if(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
                    ||c3==g9||c3==g10){
                cout<<c3<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c4>=65&&c4<=90)||(c4>=97&&c4<=122)){
            if(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
                    ||c4==g9||c4==g10){
                cout<<c4<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c5>=65&&c5<=90)||(c5>=97&&c5<=122)){
            if(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
                    ||c5==g9||c5==g10){
                cout<<c5<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c6>=65&&c6<=90)||(c6>=97&&c6<=122)){
            if(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
                    ||c6==g9||c6==g10){
                cout<<c6<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c7>=65&&c7<=90)||(c7>=97&&c7<=122)){
            if(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
                    ||c7==g9||c7==g10){
                cout<<c7<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c8>=65&&c8<=90)||(c8>=97&&c8<=122)){
            if(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
                    ||c8==g9||c8==g10){
                cout<<c8<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c9>=65&&c9<=90)||(c9>=97&&c9<=122)){
            if(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
                    ||c9==g9||c9==g10){
                cout<<c9<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c10>=65&&c10<=90)||(c10>=97&&c10<=122)){
            if(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
                    ||c10==g9||c10==g10){
                cout<<c10<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c11>=65&&c11<=90)||(c11>=97&&c11<=122)){
            if(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
                    ||c11==g9||c11==g10){
                cout<<c11<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c12>=65&&c12<=90)||(c12>=97&&c12<=122)){
            if(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
                    ||c12==g9||c12==g10){
                cout<<c12<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c13>=65&&c13<=90)||(c13>=97&&c13<=122)){
            if(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
                    ||c13==g9||c13==g10){
                cout<<c13<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c14>=65&&c14<=90)||(c14>=97&&c14<=122)){
            if(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
                    ||c14==g9||c14==g10){
                cout<<c14<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c15>=65&&c15<=90)||(c15>=97&&c15<=122)){
            if(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
                    ||c15==g9||c15==g10){
                cout<<c15<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c16>=65&&c16<=90)||(c16>=97&&c16<=122)){
            if(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
                    ||c16==g9||c16==g10){
                cout<<c16<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c17>=65&&c17<=90)||(c17>=97&&c17<=122)){
            if(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
                    ||c17==g9||c17==g10){
                cout<<c17<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c18>=65&&c18<=90)||(c18>=97&&c18<=122)){
            if(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
                    ||c18==g9||c18==g10){
                cout<<c18<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c19>=65&&c19<=90)||(c19>=97&&c19<=122)){
            if(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
                    ||c19==g9||c19==g10){
                cout<<c19<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c20>=65&&c20<=90)||(c20>=97&&c20<=122)){
            if(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
                    ||c20==g9||c20==g10){
                cout<<c20<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }
        cout<<"You only have 1 wrong attempt left"<<endl;
    }if(man==5){     
        cout<<"  -------"<<endl;
        cout<<"  |     |                   ATTEMPTS:"<<g1<<g2<<g3<<g4<<g5<<g6<<g7<<g8<<g9<<g10<<endl; 
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |     @                                                           "<<endl;
        cout<<"  |    _|/                                                          "<<endl;
        cout<<"  |    /                                                            "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"-----                                                               "<<endl;
        cout<<endl;
        if((c1>=65&&c1<=90)||(c1>=97&&c1<=122)){
            if(c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
                    ||c1==g9||c1==g10){
                cout<<c1<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c2>=65&&c2<=90)||(c2>=97&&c2<=122)){
            if(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
                    ||c2==g9||c2==g10){
                cout<<c2<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c3>=65&&c3<=90)||(c3>=97&&c3<=122)){
            if(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
                    ||c3==g9||c3==g10){
                cout<<c3<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c4>=65&&c4<=90)||(c4>=97&&c4<=122)){
            if(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
                    ||c4==g9||c4==g10){
                cout<<c4<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c5>=65&&c5<=90)||(c5>=97&&c5<=122)){
            if(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
                    ||c5==g9||c5==g10){
                cout<<c5<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c6>=65&&c6<=90)||(c6>=97&&c6<=122)){
            if(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
                    ||c6==g9||c6==g10){
                cout<<c6<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c7>=65&&c7<=90)||(c7>=97&&c7<=122)){
            if(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
                    ||c7==g9||c7==g10){
                cout<<c7<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c8>=65&&c8<=90)||(c8>=97&&c8<=122)){
            if(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
                    ||c8==g9||c8==g10){
                cout<<c8<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c9>=65&&c9<=90)||(c9>=97&&c9<=122)){
            if(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
                    ||c9==g9||c9==g10){
                cout<<c9<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c10>=65&&c10<=90)||(c10>=97&&c10<=122)){
            if(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
                    ||c10==g9||c10==g10){
                cout<<c10<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c11>=65&&c11<=90)||(c11>=97&&c11<=122)){
            if(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
                    ||c11==g9||c11==g10){
                cout<<c11<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c12>=65&&c12<=90)||(c12>=97&&c12<=122)){
            if(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
                    ||c12==g9||c12==g10){
                cout<<c12<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c13>=65&&c13<=90)||(c13>=97&&c13<=122)){
            if(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
                    ||c13==g9||c13==g10){
                cout<<c13<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c14>=65&&c14<=90)||(c14>=97&&c14<=122)){
            if(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
                    ||c14==g9||c14==g10){
                cout<<c14<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c15>=65&&c15<=90)||(c15>=97&&c15<=122)){
            if(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
                    ||c15==g9||c15==g10){
                cout<<c15<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c16>=65&&c16<=90)||(c16>=97&&c16<=122)){
            if(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
                    ||c16==g9||c16==g10){
                cout<<c16<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c17>=65&&c17<=90)||(c17>=97&&c17<=122)){
            if(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
                    ||c17==g9||c17==g10){
                cout<<c17<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c18>=65&&c18<=90)||(c18>=97&&c18<=122)){
            if(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
                    ||c18==g9||c18==g10){
                cout<<c18<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c19>=65&&c19<=90)||(c19>=97&&c19<=122)){
            if(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
                    ||c19==g9||c19==g10){
                cout<<c19<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c20>=65&&c20<=90)||(c20>=97&&c20<=122)){
            if(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
                    ||c20==g9||c20==g10){
                cout<<c20<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }
        cout<<"You only have 0 wrong attempts left"<<endl;
    }if(man==6){     
        cout<<"  -------"<<endl;
        cout<<"  |     |                   ATTEMPTS:"<<g1<<g2<<g3<<g4<<g5<<g6<<g7<<g8<<g9<<g10<<endl; 
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |     @                                                           "<<endl;
        cout<<"  |    _|/                                                          "<<endl;
        cout<<"  |    /|                                                           "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"-----                                                               "<<endl;
        cout<<endl;
        if((c1>=65&&c1<=90)||(c1>=97&&c1<=122)){
            if(c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
                    ||c1==g9||c1==g10){
                cout<<c1<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c2>=65&&c2<=90)||(c2>=97&&c2<=122)){
            if(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
                    ||c2==g9||c2==g10){
                cout<<c2<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c3>=65&&c3<=90)||(c3>=97&&c3<=122)){
            if(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
                    ||c3==g9||c3==g10){
                cout<<c3<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c4>=65&&c4<=90)||(c4>=97&&c4<=122)){
            if(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
                    ||c4==g9||c4==g10){
                cout<<c4<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c5>=65&&c5<=90)||(c5>=97&&c5<=122)){
            if(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
                    ||c5==g9||c5==g10){
                cout<<c5<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c6>=65&&c6<=90)||(c6>=97&&c6<=122)){
            if(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
                    ||c6==g9||c6==g10){
                cout<<c6<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c7>=65&&c7<=90)||(c7>=97&&c7<=122)){
            if(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
                    ||c7==g9||c7==g10){
                cout<<c7<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c8>=65&&c8<=90)||(c8>=97&&c8<=122)){
            if(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
                    ||c8==g9||c8==g10){
                cout<<c8<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c9>=65&&c9<=90)||(c9>=97&&c9<=122)){
            if(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
                    ||c9==g9||c9==g10){
                cout<<c9<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c10>=65&&c10<=90)||(c10>=97&&c10<=122)){
            if(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
                    ||c10==g9||c10==g10){
                cout<<c10<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c11>=65&&c11<=90)||(c11>=97&&c11<=122)){
            if(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
                    ||c11==g9||c11==g10){
                cout<<c11<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c12>=65&&c12<=90)||(c12>=97&&c12<=122)){
            if(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
                    ||c12==g9||c12==g10){
                cout<<c12<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c13>=65&&c13<=90)||(c13>=97&&c13<=122)){
            if(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
                    ||c13==g9||c13==g10){
                cout<<c13<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c14>=65&&c14<=90)||(c14>=97&&c14<=122)){
            if(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
                    ||c14==g9||c14==g10){
                cout<<c14<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c15>=65&&c15<=90)||(c15>=97&&c15<=122)){
            if(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
                    ||c15==g9||c15==g10){
                cout<<c15<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c16>=65&&c16<=90)||(c16>=97&&c16<=122)){
            if(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
                    ||c16==g9||c16==g10){
                cout<<c16<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c17>=65&&c17<=90)||(c17>=97&&c17<=122)){
            if(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
                    ||c17==g9||c17==g10){
                cout<<c17<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c18>=65&&c18<=90)||(c18>=97&&c18<=122)){
            if(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
                    ||c18==g9||c18==g10){
                cout<<c18<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c19>=65&&c19<=90)||(c19>=97&&c19<=122)){
            if(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
                    ||c19==g9||c19==g10){
                cout<<c19<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c20>=65&&c20<=90)||(c20>=97&&c20<=122)){
            if(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
                    ||c20==g9||c20==g10){
                cout<<c20<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }
        cout<<endl;
        for(int i=1;i<=3;i++){
        cout<<"********************************************************************"<<endl;
        }
        cout<<"GAME OVER"<<endl;
        cout<<lose<<endl;
        cout<<"The word or words were ";
        switch(num){
        case 1:cout<<c1;break;
        case 2:cout<<c1<<c2;break;
        case 3:cout<<c1<<c2<<c3;break;
        case 4:cout<<c1<<c2<<c3<<c4;break;
        case 5:cout<<c1<<c2<<c3<<c4<<c5;break;
        case 6:cout<<c1<<c2<<c3<<c4<<c5<<c6;break;
        case 7:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7;break;
        case 8:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8;break;
        case 9:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9;break;
        case 10:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10;break;
        case 11:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11;break;
        case 12:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12;break;
        case 13:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13;break;
        case 14:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14;break;
        case 15:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15;break;
        case 16:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16;break;
        case 17:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16<<c17;break;
        case 18:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16<<c17<<c18;break;
        case 19:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16<<c17<<c18<<c19;break;
        case 20:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16<<c17<<c18<<c19<<c20;break;
        }
        return 0;  
    }
    if((c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
            ||c1==g9||c1==g10||c1==1)&&(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
            ||c2==g9||c2==g10||c2==1)&&(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
            ||c3==g9||c3==g10||c3==1)&&(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
            ||c4==g9||c4==g10||c4==1)&&(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
            ||c5==g9||c5==g10||c5==1)&&(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
            ||c6==g9||c6==g10||c6==1)&&(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
            ||c7==g9||c7==g10||c7==1)&&(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
            ||c8==g9||c8==g10||c8==1)&&(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
            ||c9==g9||c9==g10||c9==1)&&(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
            ||c10==g9||c10==g10||c10==1)&&(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
            ||c11==g9||c11==g10||c11==1)&&(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
            ||c12==g9||c12==g10||c12==1)&&(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
            ||c13==g9||c13==g10||c13==1)&&(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
            ||c14==g9||c14==g10||c14==1)&&(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
            ||c15==g9||c15==g10||c15==1)&&(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
            ||c16==g9||c16==g10||c16==1)&&(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
            ||c17==g9||c17==g10||c17==1)&&(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
            ||c18==g9||c18==g10||c18==1)&&(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
            ||c19==g9||c19==g10||c19==1)&&(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
            ||c20==g9||c20==g10||c20==1)){
        cout<<endl;
        for(int i=1;i<=3;i++){
        cout<<"********************************************************************"<<endl;
        }
        cout<<win<<endl;
        cout<<"The word or words were ";
        switch(num){
        case 1:cout<<c1;break;
        case 2:cout<<c1<<c2;break;
        case 3:cout<<c1<<c2<<c3;break;
        case 4:cout<<c1<<c2<<c3<<c4;break;
        case 5:cout<<c1<<c2<<c3<<c4<<c5;break;
        case 6:cout<<c1<<c2<<c3<<c4<<c5<<c6;break;
        case 7:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7;break;
        case 8:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8;break;
        case 9:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9;break;
        case 10:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10;break;
        case 11:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11;break;
        case 12:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12;break;
        case 13:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13;break;
        case 14:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14;break;
        case 15:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15;break;
        case 16:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16;break;
        case 17:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16<<c17;break;
        case 18:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16<<c17<<c18;break;
        case 19:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16<<c17<<c18<<c19;break;
        case 20:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16<<c17<<c18<<c19<<c20;break;
        }
        return 0;
        
    }
    cout<<endl;
    cout<<"Enter guess number 11!!"<<endl;
    cout<<"Enter only one UPPERCASE letter"<<endl;
    cin>>g11;
    for(int i=1;i<=3;i++){
        cout<<"********************************************************************"<<endl;
    }
    if(g11==c1||g11==c2||g11==c3||g11==c4||g11==c5||g11==c6||g11==c7||g11==c2||g11==c9||g11==c10||g11==c11
            ||g11==c12||g11==c13||g11==c14||g11==c15||g11==c16||g11==c17||g11==c18||g11==c19||g11==c20){
        
    }else{
        man=man+1;
    }if(man==0){
        cout<<"  -------"<<endl;
        cout<<"  |     |                   ATTEMPTS:"<<g1<<g2<<g3<<g4<<g5<<g6<<g7<<g8<<g9<<g10<<g11<<endl; 
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"-----                                                               "<<endl;
        cout<<endl;
        if((c1>=65&&c1<=90)||(c1>=97&&c1<=122)){
            if(c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
                    ||c1==g9||c1==g10||c1==g11||c1==g12){
                cout<<c1<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c2>=65&&c2<=90)||(c2>=97&&c2<=122)){
            if(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
                    ||c2==g9||c2==g10||c2==g11||c2==g12){
                cout<<c2<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c3>=65&&c3<=90)||(c3>=97&&c3<=122)){
            if(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
                    ||c3==g9||c3==g10||c3==g11||c3==g12){
                cout<<c3<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c4>=65&&c4<=90)||(c4>=97&&c4<=122)){
            if(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
                    ||c4==g9||c4==g10||c4==g11||c4==g12){
                cout<<c4<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c5>=65&&c5<=90)||(c5>=97&&c5<=122)){
            if(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
                    ||c5==g9||c5==g10||c5==g11||c5==g12){
                cout<<c5<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c6>=65&&c6<=90)||(c6>=97&&c6<=122)){
            if(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
                    ||c6==g9||c6==g10||c6==g11||c6==g12){
                cout<<c6<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c7>=65&&c7<=90)||(c7>=97&&c7<=122)){
            if(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
                    ||c7==g9||c7==g10||c7==g11||c7==g12){
                cout<<c7<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c8>=65&&c8<=90)||(c8>=97&&c8<=122)){
            if(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
                    ||c8==g9||c8==g10||c8==g11||c8==g12){
                cout<<c8<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c9>=65&&c9<=90)||(c9>=97&&c9<=122)){
            if(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
                    ||c9==g9||c9==g10||c9==g11||c9==g12){
                cout<<c9<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c10>=65&&c10<=90)||(c10>=97&&c10<=122)){
            if(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
                    ||c10==g9||c10==g10||c10==g11||c10==g12){
                cout<<c10<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c11>=65&&c11<=90)||(c11>=97&&c11<=122)){
            if(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
                    ||c11==g9||c11==g10||c11==g11||c11==g12){
                cout<<c11<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c12>=65&&c12<=90)||(c12>=97&&c12<=122)){
            if(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
                    ||c12==g9||c12==g10||c12==g11||c12==g12){
                cout<<c12<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c13>=65&&c13<=90)||(c13>=97&&c13<=122)){
            if(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
                    ||c13==g9||c13==g10||c13==g11||c13==g12){
                cout<<c13<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c14>=65&&c14<=90)||(c14>=97&&c14<=122)){
            if(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
                    ||c14==g9||c14==g10||c14==g11||c14==g12){
                cout<<c14<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c15>=65&&c15<=90)||(c15>=97&&c15<=122)){
            if(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
                    ||c15==g9||c15==g10||c15==g11||c15==g12){
                cout<<c15<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c16>=65&&c16<=90)||(c16>=97&&c16<=122)){
            if(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
                    ||c16==g9||c16==g10||c16==g11||c16==g12){
                cout<<c16<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c17>=65&&c17<=90)||(c17>=97&&c17<=122)){
            if(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
                    ||c17==g9||c17==g10||c17==g11||c17==g12){
                cout<<c17<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c18>=65&&c18<=90)||(c18>=97&&c18<=122)){
            if(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
                    ||c18==g9||c18==g10||c18==g11||c18==g12){
                cout<<c18<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c19>=65&&c19<=90)||(c19>=97&&c19<=122)){
            if(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
                    ||c19==g9||c19==g10||c19==g11||c19==g12){
                cout<<c19<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c20>=65&&c20<=90)||(c20>=97&&c20<=122)){
            if(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
                    ||c20==g9||c20==g10||c20==g11||c20==g12){
                cout<<c20<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }
    }if(man==1){     
        cout<<"  -------"<<endl;
        cout<<"  |     |                   ATTEMPTS:"<<g1<<g2<<g3<<g4<<g5<<g6<<g7<<g8<<g9<<g10<<g11<<endl; 
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |     @                                                           "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"-----                                                               "<<endl;
       cout<<endl;
        if((c1>=65&&c1<=90)||(c1>=97&&c1<=122)){
            if(c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
                    ||c1==g9||c1==g10||c1==g11||c1==g12){
                cout<<c1<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c2>=65&&c2<=90)||(c2>=97&&c2<=122)){
            if(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
                    ||c2==g9||c2==g10||c2==g11||c2==g12){
                cout<<c2<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c3>=65&&c3<=90)||(c3>=97&&c3<=122)){
            if(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
                    ||c3==g9||c3==g10||c3==g11||c3==g12){
                cout<<c3<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c4>=65&&c4<=90)||(c4>=97&&c4<=122)){
            if(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
                    ||c4==g9||c4==g10||c4==g11||c4==g12){
                cout<<c4<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c5>=65&&c5<=90)||(c5>=97&&c5<=122)){
            if(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
                    ||c5==g9||c5==g10||c5==g11||c5==g12){
                cout<<c5<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c6>=65&&c6<=90)||(c6>=97&&c6<=122)){
            if(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
                    ||c6==g9||c6==g10||c6==g11||c6==g12){
                cout<<c6<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c7>=65&&c7<=90)||(c7>=97&&c7<=122)){
            if(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
                    ||c7==g9||c7==g10||c7==g11||c7==g12){
                cout<<c7<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c8>=65&&c8<=90)||(c8>=97&&c8<=122)){
            if(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
                    ||c8==g9||c8==g10||c8==g11||c8==g12){
                cout<<c8<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c9>=65&&c9<=90)||(c9>=97&&c9<=122)){
            if(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
                    ||c9==g9||c9==g10||c9==g11||c9==g12){
                cout<<c9<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c10>=65&&c10<=90)||(c10>=97&&c10<=122)){
            if(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
                    ||c10==g9||c10==g10||c10==g11||c10==g12){
                cout<<c10<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c11>=65&&c11<=90)||(c11>=97&&c11<=122)){
            if(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
                    ||c11==g9||c11==g10||c11==g11||c11==g12){
                cout<<c11<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c12>=65&&c12<=90)||(c12>=97&&c12<=122)){
            if(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
                    ||c12==g9||c12==g10||c12==g11||c12==g12){
                cout<<c12<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c13>=65&&c13<=90)||(c13>=97&&c13<=122)){
            if(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
                    ||c13==g9||c13==g10||c13==g11||c13==g12){
                cout<<c13<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c14>=65&&c14<=90)||(c14>=97&&c14<=122)){
            if(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
                    ||c14==g9||c14==g10||c14==g11||c14==g12){
                cout<<c14<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c15>=65&&c15<=90)||(c15>=97&&c15<=122)){
            if(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
                    ||c15==g9||c15==g10||c15==g11||c15==g12){
                cout<<c15<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c16>=65&&c16<=90)||(c16>=97&&c16<=122)){
            if(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
                    ||c16==g9||c16==g10||c16==g11||c16==g12){
                cout<<c16<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c17>=65&&c17<=90)||(c17>=97&&c17<=122)){
            if(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
                    ||c17==g9||c17==g10||c17==g11||c17==g12){
                cout<<c17<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c18>=65&&c18<=90)||(c18>=97&&c18<=122)){
            if(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
                    ||c18==g9||c18==g10||c18==g11||c18==g12){
                cout<<c18<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c19>=65&&c19<=90)||(c19>=97&&c19<=122)){
            if(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
                    ||c19==g9||c19==g10||c19==g11||c19==g12){
                cout<<c19<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c20>=65&&c20<=90)||(c20>=97&&c20<=122)){
            if(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
                    ||c20==g9||c20==g10||c20==g11||c20==g12){
                cout<<c20<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }
        cout<<"You only have 4 wrong attempts left"<<endl;
    }if(man==2){     
        cout<<"  -------"<<endl;
        cout<<"  |     |                   ATTEMPTS:"<<g1<<g2<<g3<<g4<<g5<<g6<<g7<<g8<<g9<<g10<<g11<<endl; 
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |     @                                                           "<<endl;
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"-----                                                               "<<endl;
        cout<<endl;
        if((c1>=65&&c1<=90)||(c1>=97&&c1<=122)){
            if(c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
                    ||c1==g9||c1==g10||c1==g11||c1==g12){
                cout<<c1<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c2>=65&&c2<=90)||(c2>=97&&c2<=122)){
            if(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
                    ||c2==g9||c2==g10||c2==g11||c2==g12){
                cout<<c2<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c3>=65&&c3<=90)||(c3>=97&&c3<=122)){
            if(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
                    ||c3==g9||c3==g10||c3==g11||c3==g12){
                cout<<c3<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c4>=65&&c4<=90)||(c4>=97&&c4<=122)){
            if(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
                    ||c4==g9||c4==g10||c4==g11||c4==g12){
                cout<<c4<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c5>=65&&c5<=90)||(c5>=97&&c5<=122)){
            if(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
                    ||c5==g9||c5==g10||c5==g11||c5==g12){
                cout<<c5<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c6>=65&&c6<=90)||(c6>=97&&c6<=122)){
            if(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
                    ||c6==g9||c6==g10||c6==g11||c6==g12){
                cout<<c6<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c7>=65&&c7<=90)||(c7>=97&&c7<=122)){
            if(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
                    ||c7==g9||c7==g10||c7==g11||c7==g12){
                cout<<c7<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c8>=65&&c8<=90)||(c8>=97&&c8<=122)){
            if(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
                    ||c8==g9||c8==g10||c8==g11||c8==g12){
                cout<<c8<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c9>=65&&c9<=90)||(c9>=97&&c9<=122)){
            if(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
                    ||c9==g9||c9==g10||c9==g11||c9==g12){
                cout<<c9<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c10>=65&&c10<=90)||(c10>=97&&c10<=122)){
            if(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
                    ||c10==g9||c10==g10||c10==g11||c10==g12){
                cout<<c10<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c11>=65&&c11<=90)||(c11>=97&&c11<=122)){
            if(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
                    ||c11==g9||c11==g10||c11==g11||c11==g12){
                cout<<c11<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c12>=65&&c12<=90)||(c12>=97&&c12<=122)){
            if(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
                    ||c12==g9||c12==g10||c12==g11||c12==g12){
                cout<<c12<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c13>=65&&c13<=90)||(c13>=97&&c13<=122)){
            if(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
                    ||c13==g9||c13==g10||c13==g11||c13==g12){
                cout<<c13<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c14>=65&&c14<=90)||(c14>=97&&c14<=122)){
            if(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
                    ||c14==g9||c14==g10||c14==g11||c14==g12){
                cout<<c14<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c15>=65&&c15<=90)||(c15>=97&&c15<=122)){
            if(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
                    ||c15==g9||c15==g10||c15==g11||c15==g12){
                cout<<c15<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c16>=65&&c16<=90)||(c16>=97&&c16<=122)){
            if(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
                    ||c16==g9||c16==g10||c16==g11||c16==g12){
                cout<<c16<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c17>=65&&c17<=90)||(c17>=97&&c17<=122)){
            if(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
                    ||c17==g9||c17==g10||c17==g11||c17==g12){
                cout<<c17<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c18>=65&&c18<=90)||(c18>=97&&c18<=122)){
            if(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
                    ||c18==g9||c18==g10||c18==g11||c18==g12){
                cout<<c18<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c19>=65&&c19<=90)||(c19>=97&&c19<=122)){
            if(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
                    ||c19==g9||c19==g10||c19==g11||c19==g12){
                cout<<c19<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c20>=65&&c20<=90)||(c20>=97&&c20<=122)){
            if(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
                    ||c20==g9||c20==g10||c20==g11||c20==g12){
                cout<<c20<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }
        cout<<"You only have 3 wrong attempts left"<<endl;
    }if(man==3){     
        cout<<"  -------"<<endl;
        cout<<"  |     |                   ATTEMPTS:"<<g1<<g2<<g3<<g4<<g5<<g6<<g7<<g8<<g9<<g10<<g11<<endl; 
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |     @                                                           "<<endl;
        cout<<"  |     |/                                                          "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"-----                                                               "<<endl;
        cout<<endl;
        if((c1>=65&&c1<=90)||(c1>=97&&c1<=122)){
            if(c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
                    ||c1==g9||c1==g10||c1==g11||c1==g12){
                cout<<c1<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c2>=65&&c2<=90)||(c2>=97&&c2<=122)){
            if(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
                    ||c2==g9||c2==g10||c2==g11||c2==g12){
                cout<<c2<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c3>=65&&c3<=90)||(c3>=97&&c3<=122)){
            if(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
                    ||c3==g9||c3==g10||c3==g11||c3==g12){
                cout<<c3<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c4>=65&&c4<=90)||(c4>=97&&c4<=122)){
            if(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
                    ||c4==g9||c4==g10||c4==g11||c4==g12){
                cout<<c4<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c5>=65&&c5<=90)||(c5>=97&&c5<=122)){
            if(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
                    ||c5==g9||c5==g10||c5==g11||c5==g12){
                cout<<c5<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c6>=65&&c6<=90)||(c6>=97&&c6<=122)){
            if(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
                    ||c6==g9||c6==g10||c6==g11||c6==g12){
                cout<<c6<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c7>=65&&c7<=90)||(c7>=97&&c7<=122)){
            if(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
                    ||c7==g9||c7==g10||c7==g11||c7==g12){
                cout<<c7<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c8>=65&&c8<=90)||(c8>=97&&c8<=122)){
            if(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
                    ||c8==g9||c8==g10||c8==g11||c8==g12){
                cout<<c8<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c9>=65&&c9<=90)||(c9>=97&&c9<=122)){
            if(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
                    ||c9==g9||c9==g10||c9==g11||c9==g12){
                cout<<c9<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c10>=65&&c10<=90)||(c10>=97&&c10<=122)){
            if(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
                    ||c10==g9||c10==g10||c10==g11||c10==g12){
                cout<<c10<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c11>=65&&c11<=90)||(c11>=97&&c11<=122)){
            if(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
                    ||c11==g9||c11==g10||c11==g11||c11==g12){
                cout<<c11<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c12>=65&&c12<=90)||(c12>=97&&c12<=122)){
            if(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
                    ||c12==g9||c12==g10||c12==g11||c12==g12){
                cout<<c12<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c13>=65&&c13<=90)||(c13>=97&&c13<=122)){
            if(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
                    ||c13==g9||c13==g10||c13==g11||c13==g12){
                cout<<c13<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c14>=65&&c14<=90)||(c14>=97&&c14<=122)){
            if(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
                    ||c14==g9||c14==g10||c14==g11||c14==g12){
                cout<<c14<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c15>=65&&c15<=90)||(c15>=97&&c15<=122)){
            if(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
                    ||c15==g9||c15==g10||c15==g11||c15==g12){
                cout<<c15<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c16>=65&&c16<=90)||(c16>=97&&c16<=122)){
            if(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
                    ||c16==g9||c16==g10||c16==g11||c16==g12){
                cout<<c16<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c17>=65&&c17<=90)||(c17>=97&&c17<=122)){
            if(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
                    ||c17==g9||c17==g10||c17==g11||c17==g12){
                cout<<c17<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c18>=65&&c18<=90)||(c18>=97&&c18<=122)){
            if(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
                    ||c18==g9||c18==g10||c18==g11||c18==g12){
                cout<<c18<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c19>=65&&c19<=90)||(c19>=97&&c19<=122)){
            if(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
                    ||c19==g9||c19==g10||c19==g11||c19==g12){
                cout<<c19<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c20>=65&&c20<=90)||(c20>=97&&c20<=122)){
            if(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
                    ||c20==g9||c20==g10||c20==g11||c20==g12){
                cout<<c20<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }
        cout<<"You only have 2 wrong attempts left"<<endl;
    }if(man==4){     
        cout<<"  -------"<<endl;
        cout<<"  |     |                   ATTEMPTS:"<<g1<<g2<<g3<<g4<<g5<<g6<<g7<<g8<<g9<<g10<<g11<<endl; 
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |     @                                                           "<<endl;
        cout<<"  |    _|/                                                          "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"-----                                                               "<<endl;
        cout<<endl;
        if((c1>=65&&c1<=90)||(c1>=97&&c1<=122)){
            if(c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
                    ||c1==g9||c1==g10||c1==g11||c1==g12){
                cout<<c1<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c2>=65&&c2<=90)||(c2>=97&&c2<=122)){
            if(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
                    ||c2==g9||c2==g10||c2==g11||c2==g12){
                cout<<c2<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c3>=65&&c3<=90)||(c3>=97&&c3<=122)){
            if(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
                    ||c3==g9||c3==g10||c3==g11||c3==g12){
                cout<<c3<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c4>=65&&c4<=90)||(c4>=97&&c4<=122)){
            if(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
                    ||c4==g9||c4==g10||c4==g11||c4==g12){
                cout<<c4<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c5>=65&&c5<=90)||(c5>=97&&c5<=122)){
            if(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
                    ||c5==g9||c5==g10||c5==g11||c5==g12){
                cout<<c5<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c6>=65&&c6<=90)||(c6>=97&&c6<=122)){
            if(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
                    ||c6==g9||c6==g10||c6==g11||c6==g12){
                cout<<c6<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c7>=65&&c7<=90)||(c7>=97&&c7<=122)){
            if(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
                    ||c7==g9||c7==g10||c7==g11||c7==g12){
                cout<<c7<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c8>=65&&c8<=90)||(c8>=97&&c8<=122)){
            if(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
                    ||c8==g9||c8==g10||c8==g11||c8==g12){
                cout<<c8<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c9>=65&&c9<=90)||(c9>=97&&c9<=122)){
            if(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
                    ||c9==g9||c9==g10||c9==g11||c9==g12){
                cout<<c9<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c10>=65&&c10<=90)||(c10>=97&&c10<=122)){
            if(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
                    ||c10==g9||c10==g10||c10==g11||c10==g12){
                cout<<c10<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c11>=65&&c11<=90)||(c11>=97&&c11<=122)){
            if(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
                    ||c11==g9||c11==g10||c11==g11||c11==g12){
                cout<<c11<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c12>=65&&c12<=90)||(c12>=97&&c12<=122)){
            if(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
                    ||c12==g9||c12==g10||c12==g11||c12==g12){
                cout<<c12<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c13>=65&&c13<=90)||(c13>=97&&c13<=122)){
            if(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
                    ||c13==g9||c13==g10||c13==g11||c13==g12){
                cout<<c13<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c14>=65&&c14<=90)||(c14>=97&&c14<=122)){
            if(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
                    ||c14==g9||c14==g10||c14==g11||c14==g12){
                cout<<c14<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c15>=65&&c15<=90)||(c15>=97&&c15<=122)){
            if(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
                    ||c15==g9||c15==g10||c15==g11||c15==g12){
                cout<<c15<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c16>=65&&c16<=90)||(c16>=97&&c16<=122)){
            if(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
                    ||c16==g9||c16==g10||c16==g11||c16==g12){
                cout<<c16<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c17>=65&&c17<=90)||(c17>=97&&c17<=122)){
            if(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
                    ||c17==g9||c17==g10||c17==g11||c17==g12){
                cout<<c17<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c18>=65&&c18<=90)||(c18>=97&&c18<=122)){
            if(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
                    ||c18==g9||c18==g10||c18==g11||c18==g12){
                cout<<c18<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c19>=65&&c19<=90)||(c19>=97&&c19<=122)){
            if(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
                    ||c19==g9||c19==g10||c19==g11||c19==g12){
                cout<<c19<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c20>=65&&c20<=90)||(c20>=97&&c20<=122)){
            if(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
                    ||c20==g9||c20==g10||c20==g11||c20==g12){
                cout<<c20<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }
        cout<<"You only have 1 wrong attempt left"<<endl;
    }if(man==5){     
        cout<<"  -------"<<endl;
        cout<<"  |     |                   ATTEMPTS:"<<g1<<g2<<g3<<g4<<g5<<g6<<g7<<g8<<g9<<g10<<g11<<endl; 
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |     @                                                           "<<endl;
        cout<<"  |    _|/                                                          "<<endl;
        cout<<"  |    /                                                            "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"-----                                                               "<<endl;
        cout<<endl;
        if((c1>=65&&c1<=90)||(c1>=97&&c1<=122)){
            if(c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
                    ||c1==g9||c1==g10||c1==g11||c1==g12){
                cout<<c1<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c2>=65&&c2<=90)||(c2>=97&&c2<=122)){
            if(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
                    ||c2==g9||c2==g10||c2==g11||c2==g12){
                cout<<c2<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c3>=65&&c3<=90)||(c3>=97&&c3<=122)){
            if(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
                    ||c3==g9||c3==g10||c3==g11||c3==g12){
                cout<<c3<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c4>=65&&c4<=90)||(c4>=97&&c4<=122)){
            if(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
                    ||c4==g9||c4==g10||c4==g11||c4==g12){
                cout<<c4<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c5>=65&&c5<=90)||(c5>=97&&c5<=122)){
            if(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
                    ||c5==g9||c5==g10||c5==g11||c5==g12){
                cout<<c5<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c6>=65&&c6<=90)||(c6>=97&&c6<=122)){
            if(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
                    ||c6==g9||c6==g10||c6==g11||c6==g12){
                cout<<c6<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c7>=65&&c7<=90)||(c7>=97&&c7<=122)){
            if(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
                    ||c7==g9||c7==g10||c7==g11||c7==g12){
                cout<<c7<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c8>=65&&c8<=90)||(c8>=97&&c8<=122)){
            if(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
                    ||c8==g9||c8==g10||c8==g11||c8==g12){
                cout<<c8<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c9>=65&&c9<=90)||(c9>=97&&c9<=122)){
            if(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
                    ||c9==g9||c9==g10||c9==g11||c9==g12){
                cout<<c9<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c10>=65&&c10<=90)||(c10>=97&&c10<=122)){
            if(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
                    ||c10==g9||c10==g10||c10==g11||c10==g12){
                cout<<c10<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c11>=65&&c11<=90)||(c11>=97&&c11<=122)){
            if(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
                    ||c11==g9||c11==g10||c11==g11||c11==g12){
                cout<<c11<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c12>=65&&c12<=90)||(c12>=97&&c12<=122)){
            if(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
                    ||c12==g9||c12==g10||c12==g11||c12==g12){
                cout<<c12<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c13>=65&&c13<=90)||(c13>=97&&c13<=122)){
            if(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
                    ||c13==g9||c13==g10||c13==g11||c13==g12){
                cout<<c13<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c14>=65&&c14<=90)||(c14>=97&&c14<=122)){
            if(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
                    ||c14==g9||c14==g10||c14==g11||c14==g12){
                cout<<c14<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c15>=65&&c15<=90)||(c15>=97&&c15<=122)){
            if(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
                    ||c15==g9||c15==g10||c15==g11||c15==g12){
                cout<<c15<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c16>=65&&c16<=90)||(c16>=97&&c16<=122)){
            if(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
                    ||c16==g9||c16==g10||c16==g11||c16==g12){
                cout<<c16<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c17>=65&&c17<=90)||(c17>=97&&c17<=122)){
            if(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
                    ||c17==g9||c17==g10||c17==g11||c17==g12){
                cout<<c17<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c18>=65&&c18<=90)||(c18>=97&&c18<=122)){
            if(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
                    ||c18==g9||c18==g10||c18==g11||c18==g12){
                cout<<c18<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c19>=65&&c19<=90)||(c19>=97&&c19<=122)){
            if(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
                    ||c19==g9||c19==g10||c19==g11||c19==g12){
                cout<<c19<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c20>=65&&c20<=90)||(c20>=97&&c20<=122)){
            if(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
                    ||c20==g9||c20==g10||c20==g11||c20==g12){
                cout<<c20<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }
        cout<<"You only have 0 wrong attempts left"<<endl;
    }if(man==6){     
        cout<<"  -------"<<endl;
        cout<<"  |     |                   ATTEMPTS:"<<g1<<g2<<g3<<g4<<g5<<g6<<g7<<g8<<g9<<g10<<g11<<endl; 
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |     @                                                           "<<endl;
        cout<<"  |    _|/                                                          "<<endl;
        cout<<"  |    /|                                                           "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"-----                                                               "<<endl;
        cout<<endl;
        if((c1>=65&&c1<=90)||(c1>=97&&c1<=122)){
            if(c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
                    ||c1==g9||c1==g10||c1==g11||c1==g12){
                cout<<c1<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c2>=65&&c2<=90)||(c2>=97&&c2<=122)){
            if(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
                    ||c2==g9||c2==g10||c2==g11||c2==g12){
                cout<<c2<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c3>=65&&c3<=90)||(c3>=97&&c3<=122)){
            if(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
                    ||c3==g9||c3==g10||c3==g11||c3==g12){
                cout<<c3<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c4>=65&&c4<=90)||(c4>=97&&c4<=122)){
            if(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
                    ||c4==g9||c4==g10||c4==g11||c4==g12){
                cout<<c4<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c5>=65&&c5<=90)||(c5>=97&&c5<=122)){
            if(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
                    ||c5==g9||c5==g10||c5==g11||c5==g12){
                cout<<c5<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c6>=65&&c6<=90)||(c6>=97&&c6<=122)){
            if(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
                    ||c6==g9||c6==g10||c6==g11||c6==g12){
                cout<<c6<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c7>=65&&c7<=90)||(c7>=97&&c7<=122)){
            if(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
                    ||c7==g9||c7==g10||c7==g11||c7==g12){
                cout<<c7<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c8>=65&&c8<=90)||(c8>=97&&c8<=122)){
            if(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
                    ||c8==g9||c8==g10||c8==g11||c8==g12){
                cout<<c8<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c9>=65&&c9<=90)||(c9>=97&&c9<=122)){
            if(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
                    ||c9==g9||c9==g10||c9==g11||c9==g12){
                cout<<c9<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c10>=65&&c10<=90)||(c10>=97&&c10<=122)){
            if(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
                    ||c10==g9||c10==g10||c10==g11||c10==g12){
                cout<<c10<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c11>=65&&c11<=90)||(c11>=97&&c11<=122)){
            if(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
                    ||c11==g9||c11==g10||c11==g11||c11==g12){
                cout<<c11<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c12>=65&&c12<=90)||(c12>=97&&c12<=122)){
            if(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
                    ||c12==g9||c12==g10||c12==g11||c12==g12){
                cout<<c12<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c13>=65&&c13<=90)||(c13>=97&&c13<=122)){
            if(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
                    ||c13==g9||c13==g10||c13==g11||c13==g12){
                cout<<c13<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c14>=65&&c14<=90)||(c14>=97&&c14<=122)){
            if(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
                    ||c14==g9||c14==g10||c14==g11||c14==g12){
                cout<<c14<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c15>=65&&c15<=90)||(c15>=97&&c15<=122)){
            if(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
                    ||c15==g9||c15==g10||c15==g11||c15==g12){
                cout<<c15<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c16>=65&&c16<=90)||(c16>=97&&c16<=122)){
            if(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
                    ||c16==g9||c16==g10||c16==g11||c16==g12){
                cout<<c16<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c17>=65&&c17<=90)||(c17>=97&&c17<=122)){
            if(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
                    ||c17==g9||c17==g10||c17==g11||c17==g12){
                cout<<c17<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c18>=65&&c18<=90)||(c18>=97&&c18<=122)){
            if(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
                    ||c18==g9||c18==g10||c18==g11||c18==g12){
                cout<<c18<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c19>=65&&c19<=90)||(c19>=97&&c19<=122)){
            if(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
                    ||c19==g9||c19==g10||c19==g11||c19==g12){
                cout<<c19<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c20>=65&&c20<=90)||(c20>=97&&c20<=122)){
            if(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
                    ||c20==g9||c20==g10||c20==g11||c20==g12){
                cout<<c20<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }
        cout<<endl;
        for(int i=1;i<=3;i++){
        cout<<"********************************************************************"<<endl;
        }
        cout<<"GAME OVER"<<endl;
        cout<<lose<<endl;
        cout<<"The word or words were ";
        switch(num){
        case 1:cout<<c1;break;
        case 2:cout<<c1<<c2;break;
        case 3:cout<<c1<<c2<<c3;break;
        case 4:cout<<c1<<c2<<c3<<c4;break;
        case 5:cout<<c1<<c2<<c3<<c4<<c5;break;
        case 6:cout<<c1<<c2<<c3<<c4<<c5<<c6;break;
        case 7:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7;break;
        case 8:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8;break;
        case 9:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9;break;
        case 10:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10;break;
        case 11:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11;break;
        case 12:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12;break;
        case 13:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13;break;
        case 14:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14;break;
        case 15:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15;break;
        case 16:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16;break;
        case 17:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16<<c17;break;
        case 18:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16<<c17<<c18;break;
        case 19:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16<<c17<<c18<<c19;break;
        case 20:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16<<c17<<c18<<c19<<c20;break;
        }
        return 0;  
    }
    if((c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
            ||c1==g9||c1==g10||c1==1)&&(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
            ||c2==g9||c2==g10||c2==1)&&(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
            ||c3==g9||c3==g10||c3==1)&&(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
            ||c4==g9||c4==g10||c4==1)&&(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
            ||c5==g9||c5==g10||c5==1)&&(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
            ||c6==g9||c6==g10||c6==1)&&(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
            ||c7==g9||c7==g10||c7==1)&&(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
            ||c8==g9||c8==g10||c8==1)&&(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
            ||c9==g9||c9==g10||c9==1)&&(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
            ||c10==g9||c10==g10||c10==1)&&(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
            ||c11==g9||c11==g10||c11==1)&&(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
            ||c12==g9||c12==g10||c12==1)&&(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
            ||c13==g9||c13==g10||c13==1)&&(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
            ||c14==g9||c14==g10||c14==1)&&(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
            ||c15==g9||c15==g10||c15==1)&&(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
            ||c16==g9||c16==g10||c16==1)&&(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
            ||c17==g9||c17==g10||c17==1)&&(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
            ||c18==g9||c18==g10||c18==1)&&(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
            ||c19==g9||c19==g10||c19==1)&&(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
            ||c20==g9||c20==g10||c20==1)){
        cout<<endl;
        for(int i=1;i<=3;i++){
        cout<<"********************************************************************"<<endl;
        }
        cout<<win<<endl;
        cout<<"The word or words were ";
        switch(num){
        case 1:cout<<c1;break;
        case 2:cout<<c1<<c2;break;
        case 3:cout<<c1<<c2<<c3;break;
        case 4:cout<<c1<<c2<<c3<<c4;break;
        case 5:cout<<c1<<c2<<c3<<c4<<c5;break;
        case 6:cout<<c1<<c2<<c3<<c4<<c5<<c6;break;
        case 7:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7;break;
        case 8:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8;break;
        case 9:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9;break;
        case 10:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10;break;
        case 11:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11;break;
        case 12:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12;break;
        case 13:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13;break;
        case 14:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14;break;
        case 15:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15;break;
        case 16:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16;break;
        case 17:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16<<c17;break;
        case 18:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16<<c17<<c18;break;
        case 19:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16<<c17<<c18<<c19;break;
        case 20:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16<<c17<<c18<<c19<<c20;break;
        }
        return 0;
        
    }    
    cout<<endl;
    cout<<"Enter guess number 12 your final guess!!"<<endl;
    cout<<"Enter only one UPPERCASE letter"<<endl;
    cin>>g12;
    for(int i=1;i<=3;i++){
        cout<<"********************************************************************"<<endl;
    }
    if(g12==c1||g12==c2||g12==c3||g12==c4||g12==c5||g12==c6||g12==c7||g12==c2||g12==c9||g12==c10||g12==c11
            ||g12==c12||g12==c13||g12==c14||g12==c15||g12==c16||g12==c17||g12==c18||g12==c19||g12==c20){
        
    }else{
        man=man+1;
    }if(man==0){
        cout<<"  -------"<<endl;
        cout<<"  |     |                   ATTEMPTS:"<<g1<<g2<<g3<<g4<<g5<<g6<<g7<<g8<<g9<<g10<<g11<<g12<<endl; 
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"-----                                                               "<<endl;
        cout<<endl;
        if((c1>=65&&c1<=90)||(c1>=97&&c1<=122)){
            if(c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
                    ||c1==g9||c1==g10||c1==g11||c1==g12){
                cout<<c1<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c2>=65&&c2<=90)||(c2>=97&&c2<=122)){
            if(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
                    ||c2==g9||c2==g10||c2==g11||c2==g12){
                cout<<c2<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c3>=65&&c3<=90)||(c3>=97&&c3<=122)){
            if(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
                    ||c3==g9||c3==g10||c3==g11||c3==g12){
                cout<<c3<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c4>=65&&c4<=90)||(c4>=97&&c4<=122)){
            if(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
                    ||c4==g9||c4==g10||c4==g11||c4==g12){
                cout<<c4<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c5>=65&&c5<=90)||(c5>=97&&c5<=122)){
            if(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
                    ||c5==g9||c5==g10||c5==g11||c5==g12){
                cout<<c5<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c6>=65&&c6<=90)||(c6>=97&&c6<=122)){
            if(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
                    ||c6==g9||c6==g10||c6==g11||c6==g12){
                cout<<c6<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c7>=65&&c7<=90)||(c7>=97&&c7<=122)){
            if(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
                    ||c7==g9||c7==g10||c7==g11||c7==g12){
                cout<<c7<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c8>=65&&c8<=90)||(c8>=97&&c8<=122)){
            if(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
                    ||c8==g9||c8==g10||c8==g11||c8==g12){
                cout<<c8<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c9>=65&&c9<=90)||(c9>=97&&c9<=122)){
            if(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
                    ||c9==g9||c9==g10||c9==g11||c9==g12){
                cout<<c9<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c10>=65&&c10<=90)||(c10>=97&&c10<=122)){
            if(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
                    ||c10==g9||c10==g10||c10==g11||c10==g12){
                cout<<c10<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c11>=65&&c11<=90)||(c11>=97&&c11<=122)){
            if(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
                    ||c11==g9||c11==g10||c11==g11||c11==g12){
                cout<<c11<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c12>=65&&c12<=90)||(c12>=97&&c12<=122)){
            if(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
                    ||c12==g9||c12==g10||c12==g11||c12==g12){
                cout<<c12<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c13>=65&&c13<=90)||(c13>=97&&c13<=122)){
            if(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
                    ||c13==g9||c13==g10||c13==g11||c13==g12){
                cout<<c13<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c14>=65&&c14<=90)||(c14>=97&&c14<=122)){
            if(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
                    ||c14==g9||c14==g10||c14==g11||c14==g12){
                cout<<c14<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c15>=65&&c15<=90)||(c15>=97&&c15<=122)){
            if(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
                    ||c15==g9||c15==g10||c15==g11||c15==g12){
                cout<<c15<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c16>=65&&c16<=90)||(c16>=97&&c16<=122)){
            if(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
                    ||c16==g9||c16==g10||c16==g11||c16==g12){
                cout<<c16<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c17>=65&&c17<=90)||(c17>=97&&c17<=122)){
            if(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
                    ||c17==g9||c17==g10||c17==g11||c17==g12){
                cout<<c17<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c18>=65&&c18<=90)||(c18>=97&&c18<=122)){
            if(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
                    ||c18==g9||c18==g10||c18==g11||c18==g12){
                cout<<c18<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c19>=65&&c19<=90)||(c19>=97&&c19<=122)){
            if(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
                    ||c19==g9||c19==g10||c19==g11||c19==g12){
                cout<<c19<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c20>=65&&c20<=90)||(c20>=97&&c20<=122)){
            if(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
                    ||c20==g9||c20==g10||c20==g11||c20==g12){
                cout<<c20<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }
    }if(man==1){     
        cout<<"  -------"<<endl;
        cout<<"  |     |                   ATTEMPTS:"<<g1<<g2<<g3<<g4<<g5<<g6<<g7<<g8<<g9<<g10<<g11<<g12<<endl; 
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |     @                                                           "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"-----                                                               "<<endl;
       cout<<endl;
        if((c1>=65&&c1<=90)||(c1>=97&&c1<=122)){
            if(c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
                    ||c1==g9||c1==g10||c1==g11||c1==g12){
                cout<<c1<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c2>=65&&c2<=90)||(c2>=97&&c2<=122)){
            if(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
                    ||c2==g9||c2==g10||c2==g11||c2==g12){
                cout<<c2<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c3>=65&&c3<=90)||(c3>=97&&c3<=122)){
            if(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
                    ||c3==g9||c3==g10||c3==g11||c3==g12){
                cout<<c3<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c4>=65&&c4<=90)||(c4>=97&&c4<=122)){
            if(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
                    ||c4==g9||c4==g10||c4==g11||c4==g12){
                cout<<c4<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c5>=65&&c5<=90)||(c5>=97&&c5<=122)){
            if(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
                    ||c5==g9||c5==g10||c5==g11||c5==g12){
                cout<<c5<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c6>=65&&c6<=90)||(c6>=97&&c6<=122)){
            if(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
                    ||c6==g9||c6==g10||c6==g11||c6==g12){
                cout<<c6<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c7>=65&&c7<=90)||(c7>=97&&c7<=122)){
            if(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
                    ||c7==g9||c7==g10||c7==g11||c7==g12){
                cout<<c7<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c8>=65&&c8<=90)||(c8>=97&&c8<=122)){
            if(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
                    ||c8==g9||c8==g10||c8==g11||c8==g12){
                cout<<c8<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c9>=65&&c9<=90)||(c9>=97&&c9<=122)){
            if(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
                    ||c9==g9||c9==g10||c9==g11||c9==g12){
                cout<<c9<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c10>=65&&c10<=90)||(c10>=97&&c10<=122)){
            if(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
                    ||c10==g9||c10==g10||c10==g11||c10==g12){
                cout<<c10<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c11>=65&&c11<=90)||(c11>=97&&c11<=122)){
            if(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
                    ||c11==g9||c11==g10||c11==g11||c11==g12){
                cout<<c11<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c12>=65&&c12<=90)||(c12>=97&&c12<=122)){
            if(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
                    ||c12==g9||c12==g10||c12==g11||c12==g12){
                cout<<c12<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c13>=65&&c13<=90)||(c13>=97&&c13<=122)){
            if(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
                    ||c13==g9||c13==g10||c13==g11||c13==g12){
                cout<<c13<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c14>=65&&c14<=90)||(c14>=97&&c14<=122)){
            if(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
                    ||c14==g9||c14==g10||c14==g11||c14==g12){
                cout<<c14<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c15>=65&&c15<=90)||(c15>=97&&c15<=122)){
            if(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
                    ||c15==g9||c15==g10||c15==g11||c15==g12){
                cout<<c15<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c16>=65&&c16<=90)||(c16>=97&&c16<=122)){
            if(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
                    ||c16==g9||c16==g10||c16==g11||c16==g12){
                cout<<c16<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c17>=65&&c17<=90)||(c17>=97&&c17<=122)){
            if(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
                    ||c17==g9||c17==g10||c17==g11||c17==g12){
                cout<<c17<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c18>=65&&c18<=90)||(c18>=97&&c18<=122)){
            if(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
                    ||c18==g9||c18==g10||c18==g11||c18==g12){
                cout<<c18<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c19>=65&&c19<=90)||(c19>=97&&c19<=122)){
            if(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
                    ||c19==g9||c19==g10||c19==g11||c19==g12){
                cout<<c19<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c20>=65&&c20<=90)||(c20>=97&&c20<=122)){
            if(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
                    ||c20==g9||c20==g10||c20==g11||c20==g12){
                cout<<c20<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }
        cout<<"You only have 4 wrong attempts left"<<endl;
    }if(man==2){     
        cout<<"  -------"<<endl;
        cout<<"  |     |                   ATTEMPTS:"<<g1<<g2<<g3<<g4<<g5<<g6<<g7<<g8<<g9<<g10<<g11<<g12<<endl; 
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |     @                                                           "<<endl;
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"-----                                                               "<<endl;
        cout<<endl;
        if((c1>=65&&c1<=90)||(c1>=97&&c1<=122)){
            if(c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
                    ||c1==g9||c1==g10||c1==g11||c1==g12){
                cout<<c1<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c2>=65&&c2<=90)||(c2>=97&&c2<=122)){
            if(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
                    ||c2==g9||c2==g10||c2==g11||c2==g12){
                cout<<c2<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c3>=65&&c3<=90)||(c3>=97&&c3<=122)){
            if(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
                    ||c3==g9||c3==g10||c3==g11||c3==g12){
                cout<<c3<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c4>=65&&c4<=90)||(c4>=97&&c4<=122)){
            if(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
                    ||c4==g9||c4==g10||c4==g11||c4==g12){
                cout<<c4<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c5>=65&&c5<=90)||(c5>=97&&c5<=122)){
            if(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
                    ||c5==g9||c5==g10||c5==g11||c5==g12){
                cout<<c5<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c6>=65&&c6<=90)||(c6>=97&&c6<=122)){
            if(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
                    ||c6==g9||c6==g10||c6==g11||c6==g12){
                cout<<c6<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c7>=65&&c7<=90)||(c7>=97&&c7<=122)){
            if(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
                    ||c7==g9||c7==g10||c7==g11||c7==g12){
                cout<<c7<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c8>=65&&c8<=90)||(c8>=97&&c8<=122)){
            if(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
                    ||c8==g9||c8==g10||c8==g11||c8==g12){
                cout<<c8<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c9>=65&&c9<=90)||(c9>=97&&c9<=122)){
            if(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
                    ||c9==g9||c9==g10||c9==g11||c9==g12){
                cout<<c9<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c10>=65&&c10<=90)||(c10>=97&&c10<=122)){
            if(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
                    ||c10==g9||c10==g10||c10==g11||c10==g12){
                cout<<c10<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c11>=65&&c11<=90)||(c11>=97&&c11<=122)){
            if(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
                    ||c11==g9||c11==g10||c11==g11||c11==g12){
                cout<<c11<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c12>=65&&c12<=90)||(c12>=97&&c12<=122)){
            if(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
                    ||c12==g9||c12==g10||c12==g11||c12==g12){
                cout<<c12<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c13>=65&&c13<=90)||(c13>=97&&c13<=122)){
            if(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
                    ||c13==g9||c13==g10||c13==g11||c13==g12){
                cout<<c13<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c14>=65&&c14<=90)||(c14>=97&&c14<=122)){
            if(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
                    ||c14==g9||c14==g10||c14==g11||c14==g12){
                cout<<c14<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c15>=65&&c15<=90)||(c15>=97&&c15<=122)){
            if(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
                    ||c15==g9||c15==g10||c15==g11||c15==g12){
                cout<<c15<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c16>=65&&c16<=90)||(c16>=97&&c16<=122)){
            if(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
                    ||c16==g9||c16==g10||c16==g11||c16==g12){
                cout<<c16<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c17>=65&&c17<=90)||(c17>=97&&c17<=122)){
            if(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
                    ||c17==g9||c17==g10||c17==g11||c17==g12){
                cout<<c17<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c18>=65&&c18<=90)||(c18>=97&&c18<=122)){
            if(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
                    ||c18==g9||c18==g10||c18==g11||c18==g12){
                cout<<c18<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c19>=65&&c19<=90)||(c19>=97&&c19<=122)){
            if(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
                    ||c19==g9||c19==g10||c19==g11||c19==g12){
                cout<<c19<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c20>=65&&c20<=90)||(c20>=97&&c20<=122)){
            if(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
                    ||c20==g9||c20==g10||c20==g11||c20==g12){
                cout<<c20<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }
        cout<<"You only have 3 wrong attempts left"<<endl;
    }if(man==3){     
        cout<<"  -------"<<endl;
        cout<<"  |     |                   ATTEMPTS:"<<g1<<g2<<g3<<g4<<g5<<g6<<g7<<g8<<g9<<g10<<g11<<g12<<endl; 
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |     @                                                           "<<endl;
        cout<<"  |     |/                                                          "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"-----                                                               "<<endl;
        cout<<endl;
        if((c1>=65&&c1<=90)||(c1>=97&&c1<=122)){
            if(c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
                    ||c1==g9||c1==g10||c1==g11||c1==g12){
                cout<<c1<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c2>=65&&c2<=90)||(c2>=97&&c2<=122)){
            if(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
                    ||c2==g9||c2==g10||c2==g11||c2==g12){
                cout<<c2<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c3>=65&&c3<=90)||(c3>=97&&c3<=122)){
            if(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
                    ||c3==g9||c3==g10||c3==g11||c3==g12){
                cout<<c3<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c4>=65&&c4<=90)||(c4>=97&&c4<=122)){
            if(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
                    ||c4==g9||c4==g10||c4==g11||c4==g12){
                cout<<c4<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c5>=65&&c5<=90)||(c5>=97&&c5<=122)){
            if(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
                    ||c5==g9||c5==g10||c5==g11||c5==g12){
                cout<<c5<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c6>=65&&c6<=90)||(c6>=97&&c6<=122)){
            if(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
                    ||c6==g9||c6==g10||c6==g11||c6==g12){
                cout<<c6<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c7>=65&&c7<=90)||(c7>=97&&c7<=122)){
            if(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
                    ||c7==g9||c7==g10||c7==g11||c7==g12){
                cout<<c7<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c8>=65&&c8<=90)||(c8>=97&&c8<=122)){
            if(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
                    ||c8==g9||c8==g10||c8==g11||c8==g12){
                cout<<c8<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c9>=65&&c9<=90)||(c9>=97&&c9<=122)){
            if(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
                    ||c9==g9||c9==g10||c9==g11||c9==g12){
                cout<<c9<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c10>=65&&c10<=90)||(c10>=97&&c10<=122)){
            if(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
                    ||c10==g9||c10==g10||c10==g11||c10==g12){
                cout<<c10<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c11>=65&&c11<=90)||(c11>=97&&c11<=122)){
            if(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
                    ||c11==g9||c11==g10||c11==g11||c11==g12){
                cout<<c11<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c12>=65&&c12<=90)||(c12>=97&&c12<=122)){
            if(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
                    ||c12==g9||c12==g10||c12==g11||c12==g12){
                cout<<c12<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c13>=65&&c13<=90)||(c13>=97&&c13<=122)){
            if(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
                    ||c13==g9||c13==g10||c13==g11||c13==g12){
                cout<<c13<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c14>=65&&c14<=90)||(c14>=97&&c14<=122)){
            if(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
                    ||c14==g9||c14==g10||c14==g11||c14==g12){
                cout<<c14<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c15>=65&&c15<=90)||(c15>=97&&c15<=122)){
            if(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
                    ||c15==g9||c15==g10||c15==g11||c15==g12){
                cout<<c15<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c16>=65&&c16<=90)||(c16>=97&&c16<=122)){
            if(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
                    ||c16==g9||c16==g10||c16==g11||c16==g12){
                cout<<c16<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c17>=65&&c17<=90)||(c17>=97&&c17<=122)){
            if(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
                    ||c17==g9||c17==g10||c17==g11||c17==g12){
                cout<<c17<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c18>=65&&c18<=90)||(c18>=97&&c18<=122)){
            if(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
                    ||c18==g9||c18==g10||c18==g11||c18==g12){
                cout<<c18<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c19>=65&&c19<=90)||(c19>=97&&c19<=122)){
            if(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
                    ||c19==g9||c19==g10||c19==g11||c19==g12){
                cout<<c19<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c20>=65&&c20<=90)||(c20>=97&&c20<=122)){
            if(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
                    ||c20==g9||c20==g10||c20==g11||c20==g12){
                cout<<c20<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }
        cout<<"You only have 2 wrong attempts left"<<endl;
    }if(man==4){     
        cout<<"  -------"<<endl;
        cout<<"  |     |                   ATTEMPTS:"<<g1<<g2<<g3<<g4<<g5<<g6<<g7<<g8<<g9<<g10<<g11<<g12<<endl; 
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |     @                                                           "<<endl;
        cout<<"  |    _|/                                                          "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"-----                                                               "<<endl;
        cout<<endl;
        if((c1>=65&&c1<=90)||(c1>=97&&c1<=122)){
            if(c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
                    ||c1==g9||c1==g10||c1==g11||c1==g12){
                cout<<c1<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c2>=65&&c2<=90)||(c2>=97&&c2<=122)){
            if(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
                    ||c2==g9||c2==g10||c2==g11||c2==g12){
                cout<<c2<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c3>=65&&c3<=90)||(c3>=97&&c3<=122)){
            if(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
                    ||c3==g9||c3==g10||c3==g11||c3==g12){
                cout<<c3<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c4>=65&&c4<=90)||(c4>=97&&c4<=122)){
            if(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
                    ||c4==g9||c4==g10||c4==g11||c4==g12){
                cout<<c4<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c5>=65&&c5<=90)||(c5>=97&&c5<=122)){
            if(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
                    ||c5==g9||c5==g10||c5==g11||c5==g12){
                cout<<c5<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c6>=65&&c6<=90)||(c6>=97&&c6<=122)){
            if(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
                    ||c6==g9||c6==g10||c6==g11||c6==g12){
                cout<<c6<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c7>=65&&c7<=90)||(c7>=97&&c7<=122)){
            if(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
                    ||c7==g9||c7==g10||c7==g11||c7==g12){
                cout<<c7<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c8>=65&&c8<=90)||(c8>=97&&c8<=122)){
            if(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
                    ||c8==g9||c8==g10||c8==g11||c8==g12){
                cout<<c8<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c9>=65&&c9<=90)||(c9>=97&&c9<=122)){
            if(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
                    ||c9==g9||c9==g10||c9==g11||c9==g12){
                cout<<c9<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c10>=65&&c10<=90)||(c10>=97&&c10<=122)){
            if(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
                    ||c10==g9||c10==g10||c10==g11||c10==g12){
                cout<<c10<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c11>=65&&c11<=90)||(c11>=97&&c11<=122)){
            if(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
                    ||c11==g9||c11==g10||c11==g11||c11==g12){
                cout<<c11<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c12>=65&&c12<=90)||(c12>=97&&c12<=122)){
            if(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
                    ||c12==g9||c12==g10||c12==g11||c12==g12){
                cout<<c12<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c13>=65&&c13<=90)||(c13>=97&&c13<=122)){
            if(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
                    ||c13==g9||c13==g10||c13==g11||c13==g12){
                cout<<c13<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c14>=65&&c14<=90)||(c14>=97&&c14<=122)){
            if(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
                    ||c14==g9||c14==g10||c14==g11||c14==g12){
                cout<<c14<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c15>=65&&c15<=90)||(c15>=97&&c15<=122)){
            if(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
                    ||c15==g9||c15==g10||c15==g11||c15==g12){
                cout<<c15<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c16>=65&&c16<=90)||(c16>=97&&c16<=122)){
            if(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
                    ||c16==g9||c16==g10||c16==g11||c16==g12){
                cout<<c16<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c17>=65&&c17<=90)||(c17>=97&&c17<=122)){
            if(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
                    ||c17==g9||c17==g10||c17==g11||c17==g12){
                cout<<c17<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c18>=65&&c18<=90)||(c18>=97&&c18<=122)){
            if(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
                    ||c18==g9||c18==g10||c18==g11||c18==g12){
                cout<<c18<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c19>=65&&c19<=90)||(c19>=97&&c19<=122)){
            if(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
                    ||c19==g9||c19==g10||c19==g11||c19==g12){
                cout<<c19<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c20>=65&&c20<=90)||(c20>=97&&c20<=122)){
            if(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
                    ||c20==g9||c20==g10||c20==g11||c20==g12){
                cout<<c20<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }
        cout<<"You only have 1 wrong attempt left"<<endl;
    }if(man==5){     
        cout<<"  -------"<<endl;
        cout<<"  |     |                   ATTEMPTS:"<<g1<<g2<<g3<<g4<<g5<<g6<<g7<<g8<<g9<<g10<<g11<<g12<<endl; 
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |     @                                                           "<<endl;
        cout<<"  |    _|/                                                          "<<endl;
        cout<<"  |    /                                                            "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"-----                                                               "<<endl;
        cout<<endl;
        if((c1>=65&&c1<=90)||(c1>=97&&c1<=122)){
            if(c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
                    ||c1==g9||c1==g10||c1==g11||c1==g12){
                cout<<c1<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c2>=65&&c2<=90)||(c2>=97&&c2<=122)){
            if(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
                    ||c2==g9||c2==g10||c2==g11||c2==g12){
                cout<<c2<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c3>=65&&c3<=90)||(c3>=97&&c3<=122)){
            if(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
                    ||c3==g9||c3==g10||c3==g11||c3==g12){
                cout<<c3<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c4>=65&&c4<=90)||(c4>=97&&c4<=122)){
            if(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
                    ||c4==g9||c4==g10||c4==g11||c4==g12){
                cout<<c4<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c5>=65&&c5<=90)||(c5>=97&&c5<=122)){
            if(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
                    ||c5==g9||c5==g10||c5==g11||c5==g12){
                cout<<c5<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c6>=65&&c6<=90)||(c6>=97&&c6<=122)){
            if(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
                    ||c6==g9||c6==g10||c6==g11||c6==g12){
                cout<<c6<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c7>=65&&c7<=90)||(c7>=97&&c7<=122)){
            if(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
                    ||c7==g9||c7==g10||c7==g11||c7==g12){
                cout<<c7<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c8>=65&&c8<=90)||(c8>=97&&c8<=122)){
            if(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
                    ||c8==g9||c8==g10||c8==g11||c8==g12){
                cout<<c8<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c9>=65&&c9<=90)||(c9>=97&&c9<=122)){
            if(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
                    ||c9==g9||c9==g10||c9==g11||c9==g12){
                cout<<c9<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c10>=65&&c10<=90)||(c10>=97&&c10<=122)){
            if(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
                    ||c10==g9||c10==g10||c10==g11||c10==g12){
                cout<<c10<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c11>=65&&c11<=90)||(c11>=97&&c11<=122)){
            if(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
                    ||c11==g9||c11==g10||c11==g11||c11==g12){
                cout<<c11<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c12>=65&&c12<=90)||(c12>=97&&c12<=122)){
            if(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
                    ||c12==g9||c12==g10||c12==g11||c12==g12){
                cout<<c12<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c13>=65&&c13<=90)||(c13>=97&&c13<=122)){
            if(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
                    ||c13==g9||c13==g10||c13==g11||c13==g12){
                cout<<c13<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c14>=65&&c14<=90)||(c14>=97&&c14<=122)){
            if(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
                    ||c14==g9||c14==g10||c14==g11||c14==g12){
                cout<<c14<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c15>=65&&c15<=90)||(c15>=97&&c15<=122)){
            if(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
                    ||c15==g9||c15==g10||c15==g11||c15==g12){
                cout<<c15<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c16>=65&&c16<=90)||(c16>=97&&c16<=122)){
            if(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
                    ||c16==g9||c16==g10||c16==g11||c16==g12){
                cout<<c16<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c17>=65&&c17<=90)||(c17>=97&&c17<=122)){
            if(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
                    ||c17==g9||c17==g10||c17==g11||c17==g12){
                cout<<c17<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c18>=65&&c18<=90)||(c18>=97&&c18<=122)){
            if(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
                    ||c18==g9||c18==g10||c18==g11||c18==g12){
                cout<<c18<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c19>=65&&c19<=90)||(c19>=97&&c19<=122)){
            if(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
                    ||c19==g9||c19==g10||c19==g11||c19==g12){
                cout<<c19<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c20>=65&&c20<=90)||(c20>=97&&c20<=122)){
            if(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
                    ||c20==g9||c20==g10||c20==g11||c20==g12){
                cout<<c20<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }
        cout<<"You only have 0 wrong attempts left"<<endl;
    }if(man==6){     
        cout<<"  -------"<<endl;
        cout<<"  |     |                   ATTEMPTS:"<<g1<<g2<<g3<<g4<<g5<<g6<<g7<<g8<<g9<<g10<<g11<<g12<<endl; 
        cout<<"  |     |                                                           "<<endl;
        cout<<"  |     @                                                           "<<endl;
        cout<<"  |    _|/                                                          "<<endl;
        cout<<"  |    /|                                                           "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"  |                                                                 "<<endl;
        cout<<"-----                                                               "<<endl;
        cout<<endl;
        if((c1>=65&&c1<=90)||(c1>=97&&c1<=122)){
            if(c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
                    ||c1==g9||c1==g10||c1==g11||c1==g12){
                cout<<c1<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c2>=65&&c2<=90)||(c2>=97&&c2<=122)){
            if(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
                    ||c2==g9||c2==g10||c2==g11||c2==g12){
                cout<<c2<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c3>=65&&c3<=90)||(c3>=97&&c3<=122)){
            if(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
                    ||c3==g9||c3==g10||c3==g11||c3==g12){
                cout<<c3<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c4>=65&&c4<=90)||(c4>=97&&c4<=122)){
            if(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
                    ||c4==g9||c4==g10||c4==g11||c4==g12){
                cout<<c4<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c5>=65&&c5<=90)||(c5>=97&&c5<=122)){
            if(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
                    ||c5==g9||c5==g10||c5==g11||c5==g12){
                cout<<c5<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c6>=65&&c6<=90)||(c6>=97&&c6<=122)){
            if(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
                    ||c6==g9||c6==g10||c6==g11||c6==g12){
                cout<<c6<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c7>=65&&c7<=90)||(c7>=97&&c7<=122)){
            if(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
                    ||c7==g9||c7==g10||c7==g11||c7==g12){
                cout<<c7<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c8>=65&&c8<=90)||(c8>=97&&c8<=122)){
            if(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
                    ||c8==g9||c8==g10||c8==g11||c8==g12){
                cout<<c8<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c9>=65&&c9<=90)||(c9>=97&&c9<=122)){
            if(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
                    ||c9==g9||c9==g10||c9==g11||c9==g12){
                cout<<c9<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c10>=65&&c10<=90)||(c10>=97&&c10<=122)){
            if(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
                    ||c10==g9||c10==g10||c10==g11||c10==g12){
                cout<<c10<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c11>=65&&c11<=90)||(c11>=97&&c11<=122)){
            if(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
                    ||c11==g9||c11==g10||c11==g11||c11==g12){
                cout<<c11<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c12>=65&&c12<=90)||(c12>=97&&c12<=122)){
            if(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
                    ||c12==g9||c12==g10||c12==g11||c12==g12){
                cout<<c12<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c13>=65&&c13<=90)||(c13>=97&&c13<=122)){
            if(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
                    ||c13==g9||c13==g10||c13==g11||c13==g12){
                cout<<c13<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c14>=65&&c14<=90)||(c14>=97&&c14<=122)){
            if(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
                    ||c14==g9||c14==g10||c14==g11||c14==g12){
                cout<<c14<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c15>=65&&c15<=90)||(c15>=97&&c15<=122)){
            if(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
                    ||c15==g9||c15==g10||c15==g11||c15==g12){
                cout<<c15<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c16>=65&&c16<=90)||(c16>=97&&c16<=122)){
            if(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
                    ||c16==g9||c16==g10||c16==g11||c16==g12){
                cout<<c16<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c17>=65&&c17<=90)||(c17>=97&&c17<=122)){
            if(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
                    ||c17==g9||c17==g10||c17==g11||c17==g12){
                cout<<c17<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c18>=65&&c18<=90)||(c18>=97&&c18<=122)){
            if(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
                    ||c18==g9||c18==g10||c18==g11||c18==g12){
                cout<<c18<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c19>=65&&c19<=90)||(c19>=97&&c19<=122)){
            if(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
                    ||c19==g9||c19==g10||c19==g11||c19==g12){
                cout<<c19<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }if((c20>=65&&c20<=90)||(c20>=97&&c20<=122)){
            if(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
                    ||c20==g9||c20==g10||c20==g11||c20==g12){
                cout<<c20<<" ";
            }else
                cout<<"_ ";
        }else{
            cout<<"  ";
        }
        cout<<endl;
        for(int i=1;i<=3;i++){
        cout<<"********************************************************************"<<endl;
        }
        cout<<"GAME OVER"<<endl;
        cout<<lose<<endl;
        cout<<"The word or words were ";
        switch(num){
        case 1:cout<<c1;break;
        case 2:cout<<c1<<c2;break;
        case 3:cout<<c1<<c2<<c3;break;
        case 4:cout<<c1<<c2<<c3<<c4;break;
        case 5:cout<<c1<<c2<<c3<<c4<<c5;break;
        case 6:cout<<c1<<c2<<c3<<c4<<c5<<c6;break;
        case 7:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7;break;
        case 8:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8;break;
        case 9:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9;break;
        case 10:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10;break;
        case 11:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11;break;
        case 12:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12;break;
        case 13:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13;break;
        case 14:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14;break;
        case 15:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15;break;
        case 16:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16;break;
        case 17:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16<<c17;break;
        case 18:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16<<c17<<c18;break;
        case 19:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16<<c17<<c18<<c19;break;
        case 20:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16<<c17<<c18<<c19<<c20;break;
        }
        return 0;  
    }
    if((c1==g1||c1==g2||c1==g3||c1==g4||c1==g5||c1==g6||c1==g7||c1==g8
            ||c1==g9||c1==g10||c1==1)&&(c2==g1||c2==g2||c2==g3||c2==g4||c2==g5||c2==g6||c2==g7||c2==g8
            ||c2==g9||c2==g10||c2==1)&&(c3==g1||c3==g2||c3==g3||c3==g4||c3==g5||c3==g6||c3==g7||c3==g8
            ||c3==g9||c3==g10||c3==1)&&(c4==g1||c4==g2||c4==g3||c4==g4||c4==g5||c4==g6||c4==g7||c4==g8
            ||c4==g9||c4==g10||c4==1)&&(c5==g1||c5==g2||c5==g3||c5==g4||c5==g5||c5==g6||c5==g7||c5==g8
            ||c5==g9||c5==g10||c5==1)&&(c6==g1||c6==g2||c6==g3||c6==g4||c6==g5||c6==g6||c6==g7||c6==g8
            ||c6==g9||c6==g10||c6==1)&&(c7==g1||c7==g2||c7==g3||c7==g4||c7==g5||c7==g6||c7==g7||c7==g8
            ||c7==g9||c7==g10||c7==1)&&(c8==g1||c8==g2||c8==g3||c8==g4||c8==g5||c8==g6||c8==g7||c8==g8
            ||c8==g9||c8==g10||c8==1)&&(c9==g1||c9==g2||c9==g3||c9==g4||c9==g5||c9==g6||c9==g7||c9==g8
            ||c9==g9||c9==g10||c9==1)&&(c10==g1||c10==g2||c10==g3||c10==g4||c10==g5||c10==g6||c10==g7||c10==g8
            ||c10==g9||c10==g10||c10==1)&&(c11==g1||c11==g2||c11==g3||c11==g4||c11==g5||c11==g6||c11==g7||c11==g8
            ||c11==g9||c11==g10||c11==1)&&(c12==g1||c12==g2||c12==g3||c12==g4||c12==g5||c12==g6||c12==g7||c12==g8
            ||c12==g9||c12==g10||c12==1)&&(c13==g1||c13==g2||c13==g3||c13==g4||c13==g5||c13==g6||c13==g7||c1==g8
            ||c13==g9||c13==g10||c13==1)&&(c14==g1||c14==g2||c14==g3||c14==g4||c14==g5||c14==g6||c14==g7||c14==g8
            ||c14==g9||c14==g10||c14==1)&&(c15==g1||c15==g2||c15==g3||c15==g4||c15==g5||c15==g6||c15==g7||c15==g8
            ||c15==g9||c15==g10||c15==1)&&(c16==g1||c16==g2||c16==g3||c16==g4||c16==g5||c16==g6||c16==g7||c16==g8
            ||c16==g9||c16==g10||c16==1)&&(c17==g1||c17==g2||c17==g3||c17==g4||c17==g5||c17==g6||c17==g7||c17==g8
            ||c17==g9||c17==g10||c17==1)&&(c18==g1||c18==g2||c18==g3||c18==g4||c18==g5||c18==g6||c18==g7||c18==g8
            ||c18==g9||c18==g10||c18==1)&&(c19==g1||c19==g2||c19==g3||c19==g4||c19==g5||c19==g6||c19==g7||c19==g8
            ||c19==g9||c19==g10||c19==1)&&(c20==g1||c20==g2||c20==g3||c20==g4||c20==g5||c20==g6||c20==g7||c20==g8
            ||c20==g9||c20==g10||c20==1)){
        cout<<endl;
        for(int i=1;i<=3;i++){
        cout<<"********************************************************************"<<endl;
        }
        cout<<win<<endl;
        cout<<"The word or words were ";
        switch(num){
        case 1:cout<<c1;break;
        case 2:cout<<c1<<c2;break;
        case 3:cout<<c1<<c2<<c3;break;
        case 4:cout<<c1<<c2<<c3<<c4;break;
        case 5:cout<<c1<<c2<<c3<<c4<<c5;break;
        case 6:cout<<c1<<c2<<c3<<c4<<c5<<c6;break;
        case 7:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7;break;
        case 8:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8;break;
        case 9:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9;break;
        case 10:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10;break;
        case 11:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11;break;
        case 12:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12;break;
        case 13:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13;break;
        case 14:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14;break;
        case 15:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15;break;
        case 16:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16;break;
        case 17:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16<<c17;break;
        case 18:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16<<c17<<c18;break;
        case 19:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16<<c17<<c18<<c19;break;
        case 20:cout<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<c10<<c11<<c12<<c13<<c14<<c15<<c16<<c17<<c18<<c19<<c20;break;
        }
        return 0;
        
    }
    
    
    //Output the processed Data

    //Exit Stage Right!
    return 0;
}

