#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the values of a & b";
    cin>>a>>b;
    char op;
    cout<<"Enter the operation you want to performance";
    cin>>op;
    switch(op){
        case(+): cout<<(a+b);
         break;
        case(-): cout<<(a-b);
         break;
        case(*): cout<<(a*b);
         break;
        case(/): cout<<(a/b);
         break;
        case(%): cout<<(a%b);
        break;
        default: cout<<"operation is not valide";
    }
    //default: cout<<"operation is not valide";
}