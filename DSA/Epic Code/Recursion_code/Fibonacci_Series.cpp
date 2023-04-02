#include <iostream>
using namespace std;
int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n;
    cout << "Enter number :" << endl;
    cin >> n;
    int ans = fibonacci(n);
    cout << "The number is :" << ans << endl;

    return 0;
}
// T.C = (2^n)