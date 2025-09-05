#include <iostream>
using namespace std;

bool palindromeString(string &s, int i, int j){
    if(i>j){
        return true;
    }
    if(s[i++] == s[j--]){
        palindromeString(s,i,j);
    }
    else{
        return false;
    }
}

int main(){
    string s = "abbccbba";
    bool isPalindrome = palindromeString(s,0,s.length()-1);
    if(isPalindrome){
        cout<<"It is a palindrome";
    }
    else{
        cout<<"Not a palindrome";
    }
}