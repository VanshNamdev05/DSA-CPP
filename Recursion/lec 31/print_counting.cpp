#include <iostream>
using namespace std;

void printTail(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    printTail(n-1);
}

void printHead(int n){
    if(n==0){
        return;
    }
    printHead(n-1);
    cout<<n<<" ";
}

int main(){
    int n ;
    cin >> n;

    printTail(n);
    printHead(n);
}