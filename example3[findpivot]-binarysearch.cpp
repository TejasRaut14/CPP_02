 #include<iostream>
using namespace std;
int pivotvalue(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }return s;
    
}
int main(){
    int arr[5]={3,8,1,10,17};
    cout<<"peak is at index="<<pivotvalue(arr,5)<<endl;
}
//or for printing both index and value of peak
#include<iostream>
using namespace std;
int pivotvalue(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }cout<<"pivot value"<<arr[s]<<endl;
     cout<<"pivot is at index"<<s<<endl;
    return 0;
}
int main(){
    int arr[5]={3,8,1,10,17};
    pivotvalue(arr,5);
}