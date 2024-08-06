#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        //part1 : numbers form 1 to n-i+1
        for(int j=1;j<=n-i+1;j++){
            cout<<j<<" ";
        }
        //part2: stars (i-1)*2 times
        for(int j=1;j<=(i-1)*2;j++){
            cout<<"*"<<" ";
        }
        //part3: number from n-i+1 to 1
        for(int j=n-i+1;j>=1;j--){
            cout<<j<<" ";
        } 
        cout<<endl;
    }
}