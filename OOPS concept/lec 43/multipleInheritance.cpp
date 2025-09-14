#include <iostream>
using namespace std;

class Animal {
    public:
    void bark(){
        cout<<"Animal barking"<<endl;
    }
};

class Human{
    public:
    void speakHuman(){
        cout<<"Human Speaking"<<endl;
    }
};

class Hybrid : public Animal, public Human{

};

int main(){
    Hybrid h;
    h.bark();
    h.speakHuman();
}