//complement of base-10 integer
#include<iostream>
using namespace std;
class solution{
    public:
         int fun(int n){
            if(n==0){
                return 0;
            }
            int x=1;
            while(x<=n){
                n=n^x;
                x=x<<1;
            }return n;
         }
    int main(){
        int n;
        cin>>n;
        solution s;
       cout<< s.fun(n);

    }
}
    
    //or
    #include<iostream>
    using namespace std;
    class sloution{
        public:
               int fun(int n){
                int m=n;
                int mask=0;
                if(n==0){
                    return 1;
                }
                while (m!=0){
                    mask=(mask<<1)\1;
                    m=m>>1;
                }
                int ans=(~n)&mask;
                return ans;
                
               }
    }
    int main(){
        int n;
        cin>>n;
        int result=fun(n);
        cout<<result;
    }return 0;