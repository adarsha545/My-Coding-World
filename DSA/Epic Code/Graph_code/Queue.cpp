#include <iostream>
#include <climits>
using namespace std;

class Queue
{
public:
    int arr[20];
    int rear = -1, front = -1;

    int isEmpty()
    {
        return (rear == -1) ? 1 : 0;
    }

    int isFull()
    {
        return (rear == -20) ? 1 : 0;
    }

    int Peek()
    {
        if (!isEmpty())
        {

            return arr[front];
        }
        return INT_MIN;
    }

    void Display()
    {
        if (!isEmpty())
        {
            for (int i = front; i <= rear; i++)
            {
                cout << arr[i] << " ";
            }
        }
        else
            cout << "Underflow" << endl;
    }

    void Enqueue(int x)
    {
        if (!isFull())
        {
            if (front == -1)
                front++;
            arr[++rear] = x;
        }
        else
        {
            cout << "Overflow" << endl;
        }
    }

    int Dequeue()
    {
        int item;
        if (!isEmpty())
        {
            int item;
            if (front == rear)
            {
                item = arr[front];
                rear = front = -1;
                return item;
            }
            item = arr[front++];
            return item;
        }
        else
        {
            cout << "Underflow" << endl;
            return INT_MIN;
        }
    }
};
