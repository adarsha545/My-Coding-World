#include <iostream>
#include <stack>
using namespace std;

//Reversing a string using stack

void Reverse_string(string str)
{
    stack<char> s;
    for (int i = 0; i < str.length(); i++)
    {
        s.push(str[i]);
    }
    cout << "After Reverse :" << endl;
    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }
}

int main()
{
    string str = "Academy";
    Reverse_string(str);
    return 0;
}