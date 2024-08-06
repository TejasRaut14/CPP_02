#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
           int reverse(int x){
            int ans=0;
            while(x){
                int digit=x%10;
                if((ans>INT_MAX/10)||(ans<INT_MIN/10)){
                    return 0;
                }
                ans=ans*10+digit;
                x=x/10;
            }
             cout<<"answer is="<<ans;
             return ans;
           }
          
};
int main(){
    int n;
    cin>>n;
    solution s;
    s.reverse(n);


}