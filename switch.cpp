#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter number 1 or 2";
    cin>>num;
    switch(num){
        case 1:cout<<"first";
        break;
        case 2:cout<<"second";
        break;
        default:cout<<"it is default case"<<endl;
    }
}
//exmple-1
//(calculator)

#include<iostream>
using namespace std;
int main(){
    int a,b;
    char op;
    cout<<"enter two number";
    cin>>a>>b;
    cout<<"enter the operation";
    cin>>op;
    switch(op){
        case '+':
                 cout<<(a+b);
                 break;
        case '-':
                 cout<<(a-b);
                 break;
        case '*':
                 cout<<(a*b);
                 break;
        case '/':
                 cout<<(a/b);
                 break;
        case '%':
                 cout<<(a%b);
                 break;
        default:cout<<"operation is not valide"<<endl;
        
    }
}
