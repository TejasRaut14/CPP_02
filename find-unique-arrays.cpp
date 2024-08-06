//find the unique elemnet in an given array
#include<iostream>
using namespace std;
int find(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    return ans;
}
int main(){
    int arr[7]={2,3,4,1,2,3,4};
    int result= find(arr,7);
    cout<<result;
    return 0;
    
}