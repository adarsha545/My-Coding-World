#include <iostream>
using namespace std;
// This is done by recursion (Functional Approach)
// here T.C = O(n)
// S.C= O(n)
int fact(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * fact(n - 1);
}

int main()
{
    cout << "Enter the number :" << endl;
    int n;
    cin >> n;
    int a = fact(n);
    cout << "The factorial is :" << a << endl;

    return 0;
}