#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    // char ch[5] = "abcde"; will give error as the character arrays end with a null character

    char ch[6] = "abcde";

    cout << arr << endl;

    cout << ch << endl;

    char *c = &ch[0];
    cout<<"c : "<<c<<endl; // entire string
    cout<<"*c : "<<*c<<endl; // ch[0] print krega...

    char temp = 'z';
    char *t = &temp;
    cout<<"t : "<<t<<endl;
    
    return 0;
}