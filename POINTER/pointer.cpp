#include <iostream>
using namespace std;

int main()
{
    int num = 5;
    cout << "The address of the number is " << &num << endl;
    cout << "The value of number is : " << num << endl;

    // address of operator ---> & ---> used to access the address of the variable

    int *ptr = &num;

    cout << "The value inside of ptr is " << ptr << endl;

    cout << "The value of the address inside of ptr is " << *ptr << endl;

    cout << "The address of ptr is " << &ptr << endl;

    // in 64 bit compiler and 64bit system the size of pointer is 8 byte 

    
    return 0;
}