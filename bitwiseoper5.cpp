#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter a number "<<endl;
    cin>>n;
    int a=0;
    int b=1;
    cout<<a<<endl<<b;
    for(int i=1;i<=n;i++){
       int c=a+b;
        cout<<c<<endl;
        a=b;
        b=c;
    }


    return 0;
}