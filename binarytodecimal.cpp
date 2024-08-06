#include<iostream>
using namesapce std;
int main(){
    int num=1010001
    int dec-value=0;
    int base=1;
    int temp=num;
    while(temp){
        int last-digit=temp%10;
        temp=temp/10;
        dec-value+=last-digit*base;
        base=base*2;
    }cout<<dec-value<<endl;
}