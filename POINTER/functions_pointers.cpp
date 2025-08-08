#include <iostream>
using namespace std;

void print(int *p)
{
    cout << "ADDRESS : " << p << endl;
    cout << "VALUE : " << *p << endl;
}

void update(int *p)
{
    // cout << "Inside BEFORE " << p << endl;
    // p = p + 1;
    // cout << "Inside AFTER " << p << endl;
    *p = *p+1;
}

// int getSum(int arr[], int n){
int getSum(int *arr, int n){

    cout<<endl<<"Size : "<< sizeof(arr) << endl;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum+=i[arr];
    }
    return sum;
    
}

int main()
{
    // int value = 5;

    // int *p = &value;

    // // print(p);

    // cout << "ADDRESS BEFORE " << p << endl;
    // update(p);
    // cout << "ADDRESS AFTER " << p << endl;

    // cout << "VALUE BEFORE " << *p << endl;
    // update(p);
    // cout << "VALUE AFTER " << *p << endl;

    int arr[5] = {1,2,3,4,5};

    cout<<"sum is : " << getSum(arr,5) << endl;

    return 0;
}