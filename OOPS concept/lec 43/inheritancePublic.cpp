#include <iostream>
using namespace std;

class Human
{
public:
    int height;
    int weight;
    int age;

    int getAge(){
        return this->age;
    }

    void setWeight(int w){
        this->weight = w;
    }
};

class Male : public Human{
    public:
    string color;

    void sleep(){
        cout << "Sleeping..."<<endl;
    }
};

int main()
{
    Male obj1;
    cout << obj1.age<<endl;
    cout << obj1.weight<<endl;
    cout << obj1.height<<endl;
    
    obj1.setWeight(70);
    
    cout << obj1.weight<<endl;
    cout << obj1.color<<endl;
    obj1.sleep();
}