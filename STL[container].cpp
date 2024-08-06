// stl in c++[container]
//arrays

#include<iostream>
#includ<array>
using namespace std;
int main(){
    //initialzation of array
    int basic[3]={1,2,3};  //normal arrays
    array<int,4>a={1,2,3,4};  //stl array
    //size of array
    int size=a.size();
    //taking input in array
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    //printing output an array
    for(int i=0;i<size;i++){
        cout<<a[i];
    }
    //bulding functions about array
    cout<<"element at index 2"<<a.at(2)<<end;
    cout<<"empty or not"<<a.empty()<<end;
    cout<<"1st element"<<a.front()<<end;
    cout<<"last element"<<a.back()<<end;
}

//vectors
#include<iostream>
#includ<vector>
using namespace std;
int main(){
    //initialzation of vector
    vector<int> v;   //v is name of vector
    vector<int> a(5,1);   //here 5 is size of vector and all elements get intialzed by 1
     //print of output
   cout<<"printing of vector"<<endl;
    for(int i:a){
        cout<<i<<" ";   //output=1 1 1 1 1 
    }cout<<endl;
    //copy another in already vector
    vector<int>b(a);   //here b is new vector and a is existing vector
    //a vector get copied into b vector
     cout<<"printing of vector"<<endl;
    for(int i:b){
        cout<<i<<" ";   //output=1 1 1 1 1 
    }cout<<endl;
    //capacity of vector -memory used in vector
    cout<<"capacity[memory assiged]"<<v.capacity()<<endl;   //output =0
    v.push_back(1);
    cout<<"capacity[memory assiged]"<<v.capacity()<<endl;   //output =1
    v.push_back(2);
    cout<<"capacity[memory assiged]"<<v.capacity()<<endl;   //output =2
    v.push_back(3);
    cout<<"capacity[memory assiged]"<<v.capacity()<<endl;   //output =4,here vector can change te sizeit is dynamics
    //size of vector- no. of element in vector
    cout<<"size[no. of elements]"<<v.size()<<endl;  //output =3
    //bulding functions
    cout<<"element at index 2"<<v.at(2)<<end;
    cout<<"1st element"<<v.front()<<end; //1
    cout<<"last element"<<v.back()<<end;  //3
      //pop back
    cout<<"before pop"<<endl;
    for(int i:v){
        cout<<i<<" ";  //output =1 2 3
    }cout<<endl;
    v.popback();
    cout<<"after pop"<<endl;
    for(int i:v){
        cout<<i<<" ";   //output=1 2
    }cout<<endl;
      //clear- which make size zero but capacity remains same
      cout<<"before clear"<<v.size()<<endl;  //2
      v.clear();
      cout<<"after clear"<<v.size()<<endl;  //0
       }

     //deque
#include<iostream>
#includ<deque>
 using namespace std;
int main(){
    //create an deque
    deque<int>d; //d is name of deque
    d.push_back(1);   
    d.push_front(2);
    //  printing elements in it
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<"print 1st index element"<<d.at(1); //2
    cout<<"1st element"<<d.front()<<end; //2
    cout<<"last element"<<d.back()<<end;  //1
    cout<<"empty or not"<<d.empty()<<end;
    //earse is used to delete the range --size become zero ut capacity cannot change
    cout<<"before earse"<<d.size()<<endl;
     d.erase(d.begin(),d.begin()+1);
    cout<<"after earse"<<d.size()<<endl;
    //pop is to delete element
    d.pop_back();
     for(int i:d){
        cout<<i<<" "; //2
    }
}
    
    //list
#include<iostream>
#includ<deque>
 using namespace std;
int main(){
    //create a list l;
    list<int>l;
    l.push_back(1);
    l.push_front(2);
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;
    l.earse(l.begin());
    cout<<"after earse"<<endl;
    fot(int i:l){
        cout<<i<<" ";
    }cout<<endl;
    cout<<"size of list"<<l.size()<<endl;
     //another list
     list<int> p(5;100);
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;
    //copy of list
    list<int> w(p);
}

//stack [last in first out]
#include<iostream>
#includ<stack>
 using namespace std;
int main(){
    //create a stack s;
    stack<string> s;
    s.push("i");
    s.push("am");
    s.push("happy");
    cout<<"top element"<<s.top()<<endl; //happy
    //pop
    s.pop()
     cout<<"top element"<<s.top()<<endl; //am
     //buliding function
     cout<<"size of stack"<<s.size()<<endl;  //2
     cout<<"empty or not"<<s.empty()<<endl;  //0
}

//quene [first in first out]
#include<iostream>
#includ<quene>
 using namespace std;
int main(){
    //create a quene;
    quene<string> q;
    q.push("i");
    q.push("am");
    q.push("happy");
    cout<<"top element"<<q.top()<<endl; //i
    //pop
    q.pop()
     cout<<"top element"<<q.top()<<endl; //am
     //buliding function
     cout<<"size of stack"<<q.size()<<endl;  //2
     cout<<"empty or not"<<q.empty()<<endl;  //0
}
//priority quene
#include<iostream>
#includ<quene>
 using namespace std;
int main(){
    //create a priority quene;
    //max heap
    priority_quene<int> maxi;
    //min heap
    priority_quene<int,vector<int>,greater<int>>mini;
    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);
    cout<<"size of maxi"<<maxi.size()<<endl; //4
    int n=maxi.size();
    for(int i=0;i<n;i++){
        cout<<maxi.top()<<" "; // 3 2 1 0
    }cout<<endl;
    maxi.pop();
   cout<<"size of maxi"<<maxi.size()<<endl; //0
  
   mini.push(5);
   mini.push(1);
   mini.push(0);
   mini.push(4);
   mini.push(3);
   int m=mini.size();
   for(int i=0;i<m;i++){
    cout<<mini.top()<<" "; //0 1 2 3 4 5
   }cout<<endl;
   cout<<"empty"<<mini.empty()<<endl; //0
}

//set
#include<iostream>
#includ<quene>
 using namespace std;
int main(){
    //create an set
    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(5);
    s.insert(6);
    s.insert(0);
    s.insert(0);

    for(auto i:s){
        cout<<i<<" ";   //0 1 5 6
    }
    s.earse(s.begin());
    for(auto i:s){
        cout<<i<<" ";   // 1 5 6
    }
    set<int>::iterator it=s.begin();
    it++;
    s.erase(it);
    for(auto i:s){
        cout<<i<<" ";   // 5 6
    }
    cout<<"5 is present in the set or not"<<s.count(5)<<endl;   //1
     cout<<"5 is present in the set or not"<<s.count(-5)<<endl;   //0
}


//mapp[key-value]
#include<iostream>
#includ<quene>
 using namespace std;
int main(){
    //create a mapp
    map<int,string>m;
    m[1]="i";
    m[2]="am";
    m[13]="happy";
    m.insert(5,"very");
    for(string i:m){
        cout<<i.first<<endl;  //1 2 5 13
    }

     for(string i:m){
        cout<<i.first<<i.second<<endl;  //1 i  2 am  5 very  13 happy
    }
    cout<<"finding 13[13 is present or not] ->"<<m.count(13)<<endl;  //1
  //erase
   m.erase(13);
   cout<<"after erase"<<endl;
   for(string i:m){
        cout<<i.first<<endl;  //1 2 5 
    }
   auto it=.find(1)
   for(auto i=it;i!=m.end();i++){
    cout<<(*i).first<<endl;    //2 5
     }
}


