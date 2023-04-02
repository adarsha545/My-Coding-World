#include <iostream>
#include <queue>
using namespace std;
class Queue
{
public:
    int *arr;
    int front;
    int rear;
    int size;
    // constructor
    Queue(int x)
    {
        this->size = x;
        arr = new int[size];
        rear = -1;
        front = -1;
    }
    
    void enqeue(int a)
    {
        if (rear == size)
        {
            cout << "Queue is full" << endl;
        }
        else if(front==-1 && rear ==-1){
            front++;
            rear++;
            arr[rear] = a;
        }
       else
        {
            rear++;
            arr[rear] = a;
        }
    }

    void dequeue()
    {

        if (front == rear)
        {
            cout << "Queue is Empty" << endl;
        }
        else
        {

            arr[front] = -1;
            front++;

            if (front == rear)
            {
                front = -1;
                rear = -1;
            }
        }
    }

    void front_element()
    {
        if (front == rear)
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            cout << "Front element is: " << arr[front] << endl;
        }
    }

    void isEmpty()
    {
        if (front == rear)
        {
            cout << "queue is empty !!" << endl;
        }
        else
        {
            cout << "Not Empty !!" << endl;
        }
    }
    
    void isFull()
    {
        if (rear == size)
        {
            cout << "queue is Full !!" << endl;
        }
        else
        {
            cout << "Not Full  !!" << endl;
        }
    }
};

int main()
{
    Queue q(5);
    q.front_element();
    q.isEmpty();
    q.isFull();
    q.enqeue(5);
    q.enqeue(6);
    q.enqeue(7);
    q.enqeue(8);
    q.enqeue(9);
    q.dequeue();
    q.front_element();
    q.dequeue();
    q.front_element();
    q.isEmpty();
    q.isFull();

//Using STL
   
    queue<int> q2;
    q2.push(100);
    q2.push(200);
    q2.pop();
    cout << q2.front() << endl;
    if (q2.empty())
    {
        cout << "Empty" << endl;
    }
    else
    {
        cout << "**** Not empty ****" << endl;
    }
    return 0;
}