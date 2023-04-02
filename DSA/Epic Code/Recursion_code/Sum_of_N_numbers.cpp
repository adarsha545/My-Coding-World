#include <iostream>
using namespace std;

//This is done by recursion (Parameterised Approach)
//here T.C = O(n) 
//S.C= O(n)
void sum(int i, int s)
{
    if (i < 1)
    {
        cout << s << endl;
        return;
    }
    sum(i - 1, s + i);
}

int main()
{
    cout << "Enter the number :" << endl;
    int n;
    cin >> n;
    sum(n, 0);
    return 0;
}