//book allocation problem
//int main() nahi ye
#include<iostream>
#include<vector>
using namespace std;
bool possible(vector<int>v,int n,int m,int mid){
    int studentcount=1;
    int pagesum=0;
    //checking for mid
    for(int i=0;i<n;i++){
        if(pagesum+v[i]<=mid){
            pagesum+=v[i];
        }
        else{
            studentcount++;
            if(studentcount>m||v[i]>mid){
                return false;
            } 
            pagesum=v[i];
        }
        }return true;
}
int allocatebooks(vector<int>v,int n,int m){
    int s=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=v[i];
    }
    int e=sum;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(possible(v,n,m,mid)){
            ans=mid;
            e=mid-1;
        }else{
            s=mid+1;
        }mid=s+(e-s)/2;
    }return ans;
}