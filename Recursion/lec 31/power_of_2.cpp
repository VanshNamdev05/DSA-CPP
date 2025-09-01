#include <iostream>
using namespace std;

int power(int n)
{
    // base condition
    if (n == 0)
    {
        return 1;
    }

    // recursive relation
    return 2 * power(n - 1);
}

int main()
{
    int n;
    cin >> n;

    int ans = power(n);

    cout << "2 to the power " << n << " is " << ans << endl;
}