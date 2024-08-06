//reverse integer 
#include<iostream>
using namespace std;
class solution{
    public:
    int n;
    int fun(int n){
        int rev=0;
        while(n!=0){
            int pop=n%10
            n=n/10;
            if(rev>int_max/10||(rev==int_max/10 && pop>7))
               return 0;
            if(rev>int_min/10||(rev==int_min/10 && pop<=8))
            return 0;
            rev=(rev*10)+pop;
        }
        cout<<rev;
    }
}
 int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    solution s1;
    s1.fun(n);
     return 0;
  }