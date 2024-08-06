//algorithm
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);
    cout<<"finding 6 "<<binary_search(v.begin,v.end(),6)<<endl; //1
    cout<<"finding 4 "<<binary_search(v.begin,v.end(),4)<<endl; //0
    //lower bound
    cout<<"lower bound"<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl; //2
     cout<<"upper bound"<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl; //2
     int a=2;
     int b=3;
     cout<<"max"<<max(a,b);
     cout<<"min"<<min(a,b);

    swap(a,b);
    cout<<endl<<"a->"<<a<<endl; 

     string abcd="abcd";
    reverse(abcd.begin(),abcd.end());
    cout<<"string ->"<<abcd<<endl;
    
    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"after rotate<"<<endl;
    for(int i:v){
        cout<<i<<" "; //3 6 7 1
    }

    sort(v.begin(),v.end());
    for(int i:v){
        cout<<i<<" "; //1 3 6 7 
    }
}
