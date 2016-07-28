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
float getSales1(float,int);
float getSales2(float,int);
float getSales3(float,int);
float getSales4(float,int);
float findHighest(float,float,float,float);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int choice=4;
    float sale1,sale2,sale3,sale4;
    float s1,s2,s3,s4;

    //Input Data
    cout<<"Welcome to the Winning Division program!!"<<endl;
    cout<<"1. Northeast Division"<<endl;
    cout<<"2. Southeast Division"<<endl;
    cout<<"3. Northwest Division"<<endl;
    cout<<"4. Southwest Division"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    s1=getSales1(sale1,choice);
    s2=getSales2(sale2,choice);
    s3=getSales3(sale3,choice);
    s4=getSales4(sale4,choice);
    findHighest(s1,s2,s3,s4);
  
    //Process Data
    
    
    //Output the processed Data

    //Exit Stage Right!
    return 0;
}
float getSales1(float s1,int c){
    cout<<"Enter the sales for the Northeast Division"<<endl;
    cout<<"$";cin>>s1;
    if (s1<0){
        cout<<"Enter a positive number for sales!"<<endl;
        cout<<"$";cin>>s1;
        
    }
    return s1;
}
float getSales2(float s2,int c){
    cout<<"Enter the sales for the Southeast Division"<<endl;
    cout<<"$";cin>>s2;
    if (s2<0){
        cout<<"Enter a positive number for sales!"<<endl;
        cout<<"$";cin>>s2;  
    }
    return s2;
}
float getSales3(float s3,int c){
    cout<<"Enter the sales for the Northwest Division"<<endl;
    cout<<"$";cin>>s3;
    if (s3<0){
        cout<<"Enter a positive number for sales!"<<endl;
        cout<<"$";cin>>s3;
        
    }
    return s3;
}
float getSales4(float s4,int c){
    cout<<"Enter the sales for the Southwest Division"<<endl;
    cout<<"$";cin>>s4;
    if (s4<0){
        cout<<"Enter a positive number for sales!"<<endl;
        cout<<"$";cin>>s4;
        
    }
    return s4;
}
float findHighest(float s1,float s2,float s3,float s4){
    if((s1>s2)&&(s1>s3)&&(s1>s4)){
        cout<<"Congratulations Northeast Division you are the #1 Division this quarter"<<endl;
        cout<<" Your sales were $"<<s1<<endl;
    }else if (s2>s1&&s2>s3&&s2>s4){
        cout<<"Congratulations Southeast Division you are the #1 Division this quarter"<<endl;
        cout<<" Your sales were $"<<s2<<endl;
    }else if(s3>s1&&s3>s2&&s3>s4){
        cout<<"Congratulations Northwest Division you are the #1 Division this quarter"<<endl;
        cout<<" Your sales were $"<<s3<<endl;
    }else{
        cout<<"Congratulations Southwest Division you are the #1 Division this quarter"<<endl;
        cout<<" Your sales were $"<<s4<<endl;
    }
    
}