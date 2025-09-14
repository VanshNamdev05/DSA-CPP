#include <iostream>
using namespace std;

class A {
    public:
    void speak(){
        cout<<"Speaking 1"<<endl;
    }
};

class B{
    public:
    void speak(){
        cout<<"Speaking 2"<<endl;
    }
};

class C : public A, public B{

};

int main(){
    
    C obj;

    obj.A::speak();
    obj.B::speak();

    
}