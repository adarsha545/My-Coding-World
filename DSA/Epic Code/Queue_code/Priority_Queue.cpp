#include <iostream>
using namespace std;

int rear = -1;
int front = -1;
int arr[15];

void Enqueue(int x)
{
    if (rear == 14)
    {
        cout << "Queue is Full" << endl;
        return;
    }

    else if (front == -1)
        front = rear = 0;

    else
        rear++;

    arr[rear] = x;
    int temp;
    for (int i = front; i < rear; i++)
    {
        for (int j = i + 1; j <= rear; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void Dequeue()
{
    if (front == -1)
    {
        cout << "Queue is Empty" << endl;
        return;
    }
    cout << "Deletd Element is : " << arr[front] << endl;
    if (front == rear)
        front = rear = -1;
    else
        front++;
}

void display()
{
    if (front == -1)
    {
        cout << "Queue is Empty" << endl;
        return;
    }

    else
    {
        cout << "The Elements of the Priority Queue are : ";
        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }
    }
}

bool isEmpty()
{
    if (front == -1)
    {
        return 1;
    }
    else
        return 0;
}

void front_ele()
{
    if (front == -1)
    {
        cout << "Queue is Empty" << endl;
        return;
    }
    else
    {
        cout << "Front element is : " << arr[front] << endl;
    }
}

int main()
{
    while (1)
    {
        cout << endl;
        cout << "****** Priority Queue Using Array*******" << endl;
        cout << "Enter 1 for Insert Element" << endl;
        cout << "Enter 2 for Delete Element" << endl;
        cout << "Enter 3 for Front Element" << endl;
        cout << "Enter 4 for Display" << endl;
        cout << "Enter 5 for Empty or not" << endl;
        cout << "Enter 6 for Exit" << endl;

        int ch;
        cout << "Enter chioce:" << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            int data;
            cout << "Enter the data :" << endl;
            cin >> data;
            Enqueue(data);
            break;

        case 2:
            Dequeue();
            break;
        case 3:
            front_ele();
            break;
        case 4:
            display();
            break;
        case 5:
            if (isEmpty())
            {
                cout << "Queue is Empty" << endl;
            }
            else
            {
                cout << "Queue is not Empty" << endl;
            }
            break;
        case 6:
            exit(0);
        }
    }

    return 0;
}