#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        char ch='A'+i-1;
        for(int j=1;j<=i;j++){
            cout<<ch<<" ";
            ch=ch+1;
        }cout<<endl;
    }
}
//or
#include <iostream>
using namespace std;
int main() {
  int n;
    cin>>n;
    char ch='A';
    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=i;j++){
            cout<<ch<<" ";
            ch++;
            
        } ch='A'+i;
        cout<<endl;
    }
        
        return 0;
}
//or
#include <iostream>
using namespace std;
int main() {
  int n;
    cin>>n;
    for(int i=1;i<=n;i++){
         for(int j=1;j<=i;j++){
            char ch='A'+i+j-2;
            cout<<ch<<" ";
             } cout<<endl;
        }
        
        return 0;
}