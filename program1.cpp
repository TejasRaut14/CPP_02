#include<iostream>
using namespace std;
int main(){
char a;
cin>>a;
//A is 65
//a is 97
//0 is 48
if(a>='A'&& a<='Z'){
    cout<<"this is upper case"<<endl;
}
else if (a>='a' && a<='z')
{
   cout<<"this is lower case"<<endl;  
}
else if (a>='0' && a<='9')
{
 cout<<"this is a digit"<<endl;  
}
}