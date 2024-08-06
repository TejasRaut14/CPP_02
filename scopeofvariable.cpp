#include<iostream>
using namespace std;
int main(){
    // a is accesible throughout the main function
    int a=3; //global variable
    cout<<a<<" ";
    if(true){
        cout<<a<<endl;
    }
    if(true){
        //local variable
        int b=5;
        cout<<b<<endl;   //it is only accesible for if function
    }
    
    //cout<<b<<endl; //error will generate due to it is not accessible in if
    int i=8;
    for( ;i<8;i++){
        cout<<"hi";  //program run tar honar but output nahi yenar error pan nahi yenar 
        //because there is no starting condition for for loop then they doesn't start
    }

}