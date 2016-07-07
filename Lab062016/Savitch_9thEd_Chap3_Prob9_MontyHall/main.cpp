/* 
 * File:   main.cpp
 * Author: Abel S. Esqueda
 * Created on June 20, 2016, 6:51 PM
 * Purpose: Template
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <cstdlib>  //Random number and seed
#include <ctime>    //Time function
#include <iomanip>
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int nPlays,nWins=0,nLose=0;
    
    //Input Data
    cout<<"How many Price is Right games to play?"<<endl;
    cin>>nPlays;
   
    //Process Data
    for(int game=1;game<=nPlays;game++){
        int przDoor=rand()%3+1; //[1,2,3]
        int ourDoor=rand()%3+1;//[1,2,3]
        int opnDoor;
        do{
            opnDoor=rand()%3+1;//[1,2,3]
        }while(opnDoor==przDoor||opnDoor==ourDoor);
        if(przDoor==ourDoor)nWins++;
        else nLose++;
       
    }
    //Output the processed Data
    cout<<"By Staying  I win  "<<100.0f*nWins/nPlays<<"%"<<endl;
    cout<<"By Changing I win "<<100.0f*nLose/nPlays<<"%"<<endl;
    //Exit Stage Right!
    return 0;
}

