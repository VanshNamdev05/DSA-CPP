#include <iostream>
using namespace std;

class Hero
{
private:
    int health;

public:
    char level;

    Hero(){
        cout<<"Constructor called"<<endl;
    }

    // parameterised constructor

    Hero(int health){
        this->health = health;
    }
    // copy constructor
    // Hero(Hero& temp){
    //     cout<<"Copy constructor called"<<endl;
    //     this->health = temp.health;
    // }

    void print()
    {
        cout << level << endl;
    }

    int getHealth()
    {
        return health;
    }

    char getLevel()
    {
        return level;
    }

    void setHealth(int h, char name)
    {

        if (name == 'a')
        {
            health = h;
        }
    }

    void setLevel(char ch)
    {
        level = ch;
    }
};

int main()
{

    Hero Vansh(10);

    Hero Namdev(Vansh);

    cout << "Vansh health is : " << Vansh.getHealth() << endl;
    cout << "Namdev health is : " << Namdev.getHealth() << endl;

    // Vansh.setHealth(100, 'b');
    Vansh.setHealth(100, 'a');

    cout << "Vansh health is : " << Vansh.getHealth() << endl;
    cout << "Namdev health is : " << Namdev.getHealth() << endl;
}