#include <iostream>
using namespace std;

class A{
    public:
    void operator() (){
        cout<<"Brackett";
    }
};

int main(){
    A a;
    a();
}