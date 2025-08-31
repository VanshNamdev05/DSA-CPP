#include <iostream>
using namespace std;

int score = 15;

void a()
{
    cout << score << " in a " << endl;
    score++;
}

int main()
{
    a();
    cout << score << " in main " << endl;
}
