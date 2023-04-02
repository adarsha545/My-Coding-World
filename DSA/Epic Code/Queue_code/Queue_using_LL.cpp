#include <iostream>
using namespace std;

class List
{
public:
    int item;
    List *next;
    // constructor
    List(int data)
    {
        this->item = data;
        this->next = NULL;
    }
};

List *front = NULL;
List *rear = NULL;

List *enqueue(List *front, List *rear, int data)
{
    List *p = new List(data);
    if (front == NULL)
    {
        front = p;
        rear = p;
    }
    else
    {
        rear->next = p;
        rear = p;
    }
    return rear;
}

List *dequeue(List *front)
{
    if (front == NULL)
    {
        cout << "Queue is Empty" << endl;
    }
    else
    {
        List *ptr = front;
        front = front->next;
        ptr->next = NULL;
        delete (ptr);
    }
    return front;
}

void display(List *front)
{
    if (front == NULL)
    {
        cout << "Queue is Empty" << endl;
        return;
    }

    else
    {
        List *temp = front;
        cout << "The Elements are : " << endl;
        while (temp != NULL)
        {
            cout << temp->item << " ";
            temp = temp->next;
        }
    }
}

bool isEmpty(List *front)
{
    if (front == NULL)
    {
        return 1;
    }
    else
        return 0;
}

void front_ele(List *front)
{
    if (front == NULL)
    {
        cout << "Queue is Empty" << endl;
        return;
    }
    else
    {
        cout << "Front element is : " << front->item << endl;
    }
}

int main()
{
    while (1)
    {
        cout << endl;
        cout << "****** Queue Using Linked List*******" << endl;
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
            if (front == NULL)
                front = rear = enqueue(front, rear, data);
            else
                rear = enqueue(front, rear, data);
            break;

        case 2:
            front = dequeue(front);
            break;
        case 3:
            front_ele(front);
            break;
        case 4:
            display(front);
            break;
        case 5:
            if (isEmpty(front))
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