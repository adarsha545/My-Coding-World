#include <bits/stdc++.h>
using namespace std;
class Stack
{   public:
    int arr[50];
    int top = -1;
    bool isEmpty()
    {
        return top == -1;
    }

    void push(int x)
    {
        if (top == 50)
        {
            cout << "Overflow" << endl;
        }
        else
        {
            arr[++top] = x;
        }
    }
    int pop()
    {
        if (isEmpty())
        {
            cout << "Underflow" << endl;
            return INT_MIN;
        }
        else
        {
            int item = arr[top];
            top--;
            return item;
        }
    }
};
