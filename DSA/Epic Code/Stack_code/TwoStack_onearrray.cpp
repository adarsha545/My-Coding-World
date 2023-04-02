#include <iostream>
using namespace std;
class Stack
{
public:
    int *arr;
    int top1;
    int top2;
    int size;
    // Consructor
    Stack(int s)
    {
        this->size = s;
        arr = new int[s];
        top1 = -1;
        top2 = size;
    }
    void push1(int x)
    {
        if (top2 - top1 > 1)
        {
            top1++;
            arr[top1] = x;
        }
        else
        {
            cout << "Stack Overflow" << endl;
        }
    }
    void push2(int x)
    {
        if (top2 - top1 > 1)
        {
            top2--;
            arr[top2] = x;
        }
        else
        {
            cout << "Stack Overflow" << endl;
        }
    }
    void pop1()
    {
        if (top1 >= 0)
        {
            top1--;
        }
        else
        {
            cout << "Stack Underflow" << endl;
        }
    }
    void pop2()
    {
        if (top2 < size)
        {
            top2++;
        }
        else
        {
            cout << "Stack Underflow" << endl;
        }
    }

    void peek1()
    {
        if (top1 >= 0)
        {
            cout << "The top1 element " << arr[top1] << endl;
        }
        else
        {
            cout << "stack is empty !!" << endl;
        }
    }
    void peek2()
    {
        if (top2 < size)
        {
            cout << "The top2 element " << arr[top2] << endl;
        }
        else
        {
            cout << "stack is empty !!" << endl;
        }
    }

    void isEmpty1()
    {
        if (top1 == -1)
        {
            cout << "Stack is empty" << endl;
        }
        else
        {
            cout << "stack is not empty" << endl;
        }
    }
    void isEmpty2()
    {
        if (top2 >= size)
        {
            cout << "Stack is empty" << endl;
        }
        else
        {
            cout << "stack is not empty" << endl;
        }
    }
};
int main()
{
    Stack st(8);
    st.isEmpty1();
    st.isEmpty2();
    st.push1(10);
    st.push2(80);
    st.push1(20);
    st.push2(70);
    st.peek1();
    st.peek2();
    st.isEmpty2();
    st.push1(30);
    st.isEmpty1();
    st.push2(60);
    st.isEmpty1();
    st.isEmpty2();
    st.push1(40);
    st.isEmpty1();
    st.push2(50);
    st.peek1();
    st.peek2();
    st.push1(110);
    st.push2(120);
    st.pop1();
    st.pop2();
    st.pop1();
    st.pop2();
    st.pop1();
    st.pop2();
    st.pop1();
    st.pop2();
    st.pop1();
    st.pop2();
    return 0;
}
// 10 20 30 40 50 60 70 80