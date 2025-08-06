#include<iostream>
using namespace std;

int main(){
    // int *p;
    // pointer pp is created and pointing to some garbage address...

    // cout<<*p<<endl;



    // int i = 5;

    // int *q =&i;
    // cout<<q<<endl;
    // cout<<*q<<endl;

    // int *p =0;
    // p = &i;
    // cout<<p<<endl;
    // cout<<*p<<endl;



    int num = 5;
    int *p = &num;

    cout<<"BEFORE : "<<num<<endl;
    (*p)++;
    cout<<"AFTER : "<<num<<endl;

    // COPYING A POINTER : 
    int *q = p;
    cout<<"p : "<<p<<endl;
    cout<<"q : "<<q<<endl;
    cout<<"*p : "<<*p<<endl;
    cout<<"*q : "<<*q<<endl;
    
    

    cout<<p<<endl;
    p = p+1;
    cout<<p<<endl;
    p = p+1;
    cout<<p<<endl;
    p = p+1;
    cout<<p<<endl;
    p = p+1;
    cout<<p<<endl;
    p = p+1;
    cout<<p<<endl;
    p = p+1;
    cout<<p<<endl;
    
    return 0;
}