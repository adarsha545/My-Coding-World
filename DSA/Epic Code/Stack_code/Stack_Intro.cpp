#include <iostream>
#include <stack>
using namespace std;
class Stack
{
public:
    int *arr;
    int top;
    int size;

    // constructor
    Stack(int n)
    {
        this->size = n;
        top = -1;
        arr = new int[n];
    }
    void push(int x)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = x;
        }
        else
        {
            cout << "Stack Overflow !!" << endl;
        }
    }

    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack Underflow !!" << endl;
        }
    }

    void peek()
    {
        if (top >= 0)
        {
            cout << "The top most element is :" << arr[top] << endl;
        }
        else
        {
            cout << "Stack is Empty !!" << endl;
        }
    }

    bool isEmpty()
    {
        if (top >= 0)
        { // top==-1,  return true
            return false;
        }
        else
        {
            return true;
        }
    }
};

int main()
{
    Stack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    // s.push(60);
    s.peek();
    s.pop();
    s.peek();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.peek();
    if (s.isEmpty())
    {
        cout << "Stack is Empty !!" << endl;
    }
    else
    {
        cout << "Stack is Non Empty !!" << endl;
    }

    // Using STL
    stack<int> st;
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    if (st.empty())
    {
        cout << "Empty" << endl;
    }
    else
    {
        cout << "Not Empty" << endl;
    }
    cout << "Top " << st.top() << endl;
    st.pop();
    cout << "Top " << st.top() << endl;
    st.pop();
    cout << "Top " << st.top() << endl;
    st.pop();
    cout << "Top " << st.top() << endl;
    if (st.empty())
    {
        cout << "Empty" << endl;
    }
    else
    {
        cout << "Not Empty" << endl;
    }
    st.pop();
    if (st.empty())
    {
        cout << "Empty" << endl;
    }
    else
    {
        cout << "Not Empty" << endl;
    }
    st.pop();
    if (st.empty())
    {
        cout << "Empty" << endl;
    }
    else
    {
        cout << "Not Empty" << endl;
    }

    return 0;
}