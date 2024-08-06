//search an element in rotatedd sorted array
//logic -1]find pivot 
//       2]if key is between pivot and end then search in second line 
//       3]if key is between start ans pivot then search in first line 
#include<iostream>
using namespace std;
//finding pivot
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
//binary search
int fun(int arr[],int size,int start,int end,int key){
    int s=start;
    int e=end;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==key){
            return mid;
        }
        //go to right wala part
        if(key>arr[mid]){
            s=mid+1;
        }
        else{
            //key<arr[mid]
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return mid;
}
//find position
int findposition(int arr[],int n,int key){
    int pivot= pivotvalue(arr,n);
    if(key>=arr[pivot] && key<=arr[n-1]){
        return fun(arr,n,pivot,n-1,key);
        
    }
    else{
        return fun(arr,n,0,pivot-1,key);
         
         
    }
}
int main(){
    int key; 
    cout<<"enter a number"<<endl;
    cin>>key;
    int arr[5]={7,9,1,2,3};
   int result= findposition(arr,5,key);
   cout<<"index of key is"<<result<<endl;
}