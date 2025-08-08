#include<iostream>
using namespace std;

int main(){
    int arr[10] = {1,22,33,44,55,55,44,33,22,11};
    cout<<"Address of first memory block is : "<< arr << endl;
    
    cout<<"Address of first memory block is : "<< &arr[0] << endl;
    cout<<"Address of second memory block is : "<< &arr[1] << endl;

    cout<<"*arr : "<<*arr<<endl;
    (*arr)++;
    cout<<"*arr : "<<*arr<<endl;

    cout<<"Value at 7th location of arr is : "<<*(arr+6)<<endl;

    // int arr[10] = {1,2,2,1,2,1,1,2,2,1};
    // int *p = &arr[0];
    // cout<<sizeof(arr)<<endl; // 40
    // cout<<sizeof(p)<<endl; // 8
    // cout<<sizeof(*p)<<endl; // 4
    // cout<<sizeof(&p)<<endl; // 8

    int i = 3;
    cout<<i[arr];
    return 0;
}