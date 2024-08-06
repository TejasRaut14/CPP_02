#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter one numbers"<<endl;
    cin>>a;
    if(a>0){
         cout<<a<<"  is positive"<<endl;
    }
    else if (a<0)
    {
        cout<<a<<"  is negative"<<endl;
    }
    else if (a=0)
    {
        cout<<a<<"  is zero"<<endl;
    }
    
    else
      cout<<"invalid number"<<endl;
}