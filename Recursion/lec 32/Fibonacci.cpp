#include <iostream>
using namespace std;

int fibNum(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }

    int ans = fibNum(n-1) + fibNum(n-2);
    return ans;
}

int main(){
    int n;
    cin>>n;

    int answer = fibNum(n);
    cout<<answer;
}