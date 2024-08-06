//example 1- binry search
//finding first and last position of the given element in an sorted array
#include<iostream>
using namespace std;
int firstposition(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;         //due to finding first position so interation flows goes to left from mid
        }
        if(key>arr[mid]){
            s=mid+1;
        }
        if(key<arr[mid]){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;

}
int lastposition(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;         //due to finding first position so interation flows goes to left from mid
        }
        if(key>arr[mid]){
            s=mid+1;
        }
        if(key<arr[mid]){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;

}
int main(){
    int even[11]={1,2,3,3,3,3,3,3,3,3,5};
    cout<<"first occurance of 3 is at index"<<firstposition(even,11,3)<<endl;
    cout<<"last occurance of 3 is at index"<<lastposition(even,11,3);
    return 0;
}

