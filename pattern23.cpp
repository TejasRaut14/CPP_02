#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=1;
    for(int i=1;i<=n;i++){
        //loop for space
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        } 
        //loop for print
        for(int j=1;j<=i;j++){
            cout<<count;
            count++;
        }
        cout<<endl;

    }
}