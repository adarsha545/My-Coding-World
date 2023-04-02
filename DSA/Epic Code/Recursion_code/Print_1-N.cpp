#include <iostream>
using namespace std;
//Using Backtracking
// here T.C = O(n)
// S.C= O(n)
void print(int i)
{
    if (i <1)
    {
        return ;
    }
   print(i-1);
   cout<<i<<" ";
}

int main()
{
    cout << "Enter the number :" << endl;
    int n;
    cin >> n;
    print(n);
    return 0;
}