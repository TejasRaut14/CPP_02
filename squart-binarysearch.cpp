#include<iostream>
using namespace std;
long long int sqrtinteger(int n){
    int s=0;
    int e=n;
    long long int mid=s+(e-s)/2;
    long long int ans=-1;
    while(s<=e){1
    
        long long int square=mid*mid;
        if(square==n){
            return mid;
        }
        if(square<n){
            ans=mid;
            s=mid+1;
    }else{
        e=mid-1;
    }mid=s+(e-s)/2;
} return ans;
}
int main(){
    int n;
    cin>>n;
    int result=sqrtinteger(n);
    cout<<result;
}