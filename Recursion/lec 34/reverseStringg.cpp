#include <iostream>
using namespace std;

void reverseString(string &s, int i, int j){
    if(i>j){
        return;
    }
    swap(s[i++],s[j--]);
    reverseString(s,i,j);
}

int main(){
    string s = "VANSH";
    reverseString(s,0,s.length()-1);
    cout<<s;
}