// substract the product and sum of the digits of an integers
#include<iostream>
#include<string.h>
using namespace std;
class solution{
    public:
     void fun(int n){
        int product=1, sum=0;         //n%10 is used to get last digit if n=125 then it return 5
        while(n){
            product=product*(n%10);
            sum=sum+(n%10);
            n=n/10;                  //to get digit without last digit if n=125 then it return 12
        }cout<< product-sum<<endl;
     }
};

int main(){
    int n;
    cout<<" Enter the number";
    cin>>n;
    solution s;
    s.fun(n);
    return 0;
    
}