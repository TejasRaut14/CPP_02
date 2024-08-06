#include<iostream>
using namespace std;
int peakvalue(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }return s;
    
}
int main(){
    int arr[5]={3,8,10,17,1};
    cout<<"peak is at index="<<peakvalue(arr,5)<<endl;
}
//or for printing both index and value of peak
#include<iostream>
using namespace std;
int peakvalue(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }cout<<"peak value"<<arr[s]<<endl;
     cout<<"peak is at index"<<s<<endl;
    return 0;
}
int main(){
    int arr[5]={3,8,10,17,1};
    peakvalue(arr,5);
}