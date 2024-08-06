#include<iostream>
using nmaespace std;
int amin(){
    //declare
    int number[15];
    //accessing an array
    cout<<"value at 14th index"<<number[14]<<endl;
    cout<<"value at 20th index"<<number[20]<<endl;
    //initialsing an array
    int second[3]={5,7,11};
    //accessing an elements
    cout<<"value at 2th index"<<second[2]<<endl;
    int third[15]={2,7};
    int n=15;
    cout<<"printing an array"<<endl;
    for (int i=1;i<=n;i++){
        COUT<<third[i]<<" ";
    }
    // intializaing all location with 0
    int fourth[10]={0};
    n=10;
    cout<<"printing an array"<<endl;
    for (int i=1;i<=n;i++){
        COUT<<fourth[i]<<" ";
    }
    // intializaing all location with 1 is not possible with below line
    int fifth[10]={1};
    n=10;
    cout<<"printing an array"<<endl;
    for (int i=1;i<=n;i++){
        COUT<<fifth[i]<<" ";
    }
    //using function
    //3rd array
    printarray(third,15);
    //4th array
    printarray(fourth,10);
    //5th array
    printarray(fifth,10);

    // to find size
    int fifthsize= sizeof(fifth)/sizeof(int);
    cout<<"size of fifth is"<<fifthsize<<endl;
    }

    void printarray(int arr[],int sizr){
        cout<<"printing an array"<<endl;
        for (int i=0;i<=size;i++){
        COUT<<[i]<<" ";
        cout<<"printig done"<<endl;
    }  }