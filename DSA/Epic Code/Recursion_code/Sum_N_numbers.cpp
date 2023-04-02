#include <iostream>
using namespace std;

// This is done by recursion (Functional Approach)
// here T.C = O(n)
// S.C= O(n)
int sum(int i)
{
    if (i == 0)
    {

        return 0;
    }
    return i + sum(i - 1);
}

int main()
{
    cout << "Enter the number :" << endl;
    int n;
    cin >> n;
    int a = sum(n);
    cout << a << endl;
    return 0;
}