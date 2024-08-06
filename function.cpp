//find power of a to b using function
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

//to check number even or odd
#include<iostream>
using namespace std;
bool evenodd(int a){
    //odd
    if(a&1){
        return 0;
    }
    else{//even
    return 1;
    }
}
int main(){
    int num;
    cin>>num;
    if(evenodd(num)){
        cout<<"number is even"<<endl;
    }
    else{
        cout<<"number is odd"<<endl;
    }
}
//to find ncr= n!/r!*(n-r)!
#include<iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*1;
    }
    return fact;
}
int ncr(int n,int r){
    int num=factorial(n);
    int demo=factorial(r)*factorial(n-r);
    return num/demo;
}
int main(){
    int n,r;
    cin>>n>>r;
    cout<<ncr(n,r)<<endl;
}
//counting
#include<iostream>
using namespace std;
void counting(int n){
    //function body
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }cout<<endl;
}
int main(){
    int n;
    cin>>n;
    //function call
    counting(n);
    return 0;
}
// finding AP hint- 3*n+7
#include<iostream>
using namespace std;
void ap(int n){
    int ans=(3*n+7)
    cout<<"AP"<<ans;
}
int main(){
    int n;
    cin>>n;
    ap(n);
    return 0;
}
// finding fibonacci series upto nth term
#include<iostream>
using namespace std;
void fibonacci(int n){
    int t1=0,t2=1,nextterm=0;
    cout<<"fibonacci series:"<<endl;
    cout<<t1<<endl;
     cout<<t2<<endl;
    for(int i=1;i<=n;i++){
        //printing first and second numbers
       // cout<<t1<<endl; here is worng
       // cout<<t2<<endl;  here is wrong
        nextterm=t1+t2;
        cout<<nextterm<<endl;
        t1=t2;
        t2=nextterm;
    }

}
int main(){
    int n;
    cin>>n;
    fibonacci(n);
    return 0;
}