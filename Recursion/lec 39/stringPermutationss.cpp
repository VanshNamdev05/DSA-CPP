#include <iostream>
using namespace std;

void solve(string s, int index){

    if(index >= s.size()){
        cout<<s<<endl;
        return;
    }

    for(int j = index; j < s.size(); j++){
        swap(s[index], s[j]);
        solve(s,index+1);
        swap(s[index], s[j]);
    }

}

int main(){
    string s;
    cin>>s;
    int index = 0;
    solve(s,index);
}