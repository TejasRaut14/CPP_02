#include<iostream>
using namespace std;
bool ispossible(int stalls[],int n,int mid,int m){
    int cowcount=1;
    int ans=stall[0];
    for(int i=0;i<n;i++){
        if(stalls[i]-ans>=mid){
            cowcount++;
            if(cowcount==n){
                return true;
            }
            ans=stalls[i];
        }
    }return false;
}
int main(){
    sort(stalls.begin(),stalls.end());
    int s=0;
    int n=stalls.size();
    int e=stalls[n-1];
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(ispossible(stalls,n,mid,m)){
            ans=mid;
            s=mid+1;
        }else{
            e=mid-1;
        }mid=s+(e-s)/2;
    }return ans;
}