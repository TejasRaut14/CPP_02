#include<iostream>
#include<math.h>
using namespace std;

int fun(int a, int b){
    int ans=1;
    for(int i=1;i<=b;i++){
        ans=ans*a;
    }
    return ans;
}
int main(){
    int a,b;
    cin>>a>>b;  // value is taken inside the main
    int result=fun(a,b); //function call
     cout<<result;
    return 0;
}
//or
#include<iostream>
#include<math.h>
using namespace std;

int fun(){
    int a,b;  //values are taken outside the main
    cin>>a>>b;
    int ans=1;
    for(int i=1;i<=b;i++){
        ans=ans*a;
    }
    return ans;
}
int main(){
    int result=fun(); //function call
     cout<<result;
    return 0;
}