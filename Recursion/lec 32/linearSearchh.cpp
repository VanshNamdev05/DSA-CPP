#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key)
{
    if(size==0){
        return 0;
    }

    if(arr[0] == key){
        return arr[0];
    }
    
    else{
        bool ans = linearSearch(arr+1, size-1, key);
        return ans;
    }

}

int main()
{
    int arr[5] = {3, 5, 1, 2, 6};
    int size = 5;

    int key;
    cout << "Enter the element you want to search : ";
    cin >> key;

    int ans = linearSearch(arr, size, key);

    if (ans)
    {
        cout << "Found";
    }
    else
    {
        cout << "Not found";
    }
}