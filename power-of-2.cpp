#include<iostream>
#include<math.h>
using namespace std;
class solution{
    public:
       bool fun(int n){
           for(int i=0;i<=30;i++){
               int ans=pow(2,i);
               if(ans==n){
                   return true;
               }
           }
           return false;
       }
};
int main(){
    int n;
    cin>>n;
    solution s;
    cout<<s.fun(n)<<endl;
}
//or
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
       bool fun(int n){
           int temp=1;
           while(n!=temp && temp<INT_MAX/2){
            temp*=2;
           
           }
            return n==temp;
       } 
};
int main(){
    int n;
    cin>>n;
    solution s;
   cout<< s.fun(n)<<endl;
}
//or
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
       bool fun(int n){
           int ans=1;
           for(int i=0;i<=30;i++){
               if(ans==n){
                   return true;
               }
               if(ans<INT_MAX/2){
                   ans=ans*2;
               }
               
           }
           return false;
       } 
};
int main(){
    int n;
    cin>>n;
    solution s;
   cout<< s.fun(n)<<endl;
}
//or
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
       bool fun(int n){
           if(n<=0){
               return false;
           }
           return (n&(n-1))==0;
       }
};
int main(){
    int n;
    cin>>n;
    solution s;
   cout<< s.fun(n)<<endl;
}