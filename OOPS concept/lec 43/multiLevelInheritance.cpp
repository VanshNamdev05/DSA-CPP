#include <iostream>
using namespace std;

class A {
    public:
    void speak(){
        cout<<"Speaking "<<endl;
    }
};

class B : public A{
    
};

class C : public B{

};

int main(){
    C c;
    c.speak();
}