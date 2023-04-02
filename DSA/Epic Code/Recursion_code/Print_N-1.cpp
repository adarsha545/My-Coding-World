#include <iostream>
using namespace std;
//Using Backtracking
// here T.C = O(n)
// S.C= O(n)
void print(int i,int n)
{
    if (i >n)
    {
        return ;
    }
   print(i+1,n);
   cout<<i<<" ";
}

int main()
{
    cout << "Enter the number :" << endl;
    int n;
    cin >> n;
    print(1,n);
    return 0;
}