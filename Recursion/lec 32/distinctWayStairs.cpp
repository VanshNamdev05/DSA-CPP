#include <iostream>
using namespace std;

int distinctWay(int n){
    if(n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }

    int ans = distinctWay(n-1) + distinctWay(n-2);
    return ans;
}

int main(){
    int n;
    cin>>n;

    int ans = distinctWay(n);
    cout<<ans;

}