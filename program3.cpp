//count number of 1 bits
#include<iostream>
using namespace std;
 class solution{
    public:
    int n;
    int fun(int n){
        int ans=0;
        while(n){
            if(n&1){  //n&1 - if 1 then bit is 1
                ans++; //    -if 0 then bit is 0
            } n=n>>1;
        } 
        cout<<ans;                        //ex- if n=5 then 0101 is binary then count number of 1 bit is 2=> output is 2

    } 
    
 };
  int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    solution s1;
    s1.fun(n);
     return 0;
  }