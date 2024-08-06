#include <iostream>
using namespace std;
int main() {
    int a=1,b=2;
    if(a-->0 && ++b>2){
        cout<<"stage 1- inside if";
    }
    else{
        cout<<"stage 2-inside else";
    }
    cout<<a<<" "<<endl;
    cout<<b<<endl;


    return 0;
}

