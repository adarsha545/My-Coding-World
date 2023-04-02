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
// Though you take top as global,but if you change top in any function, you must return changed top 
List *top = NULL;
List *head = NULL;

List *push(int data, List *top)
{
    List *p = new List(data);
    // Checking stack is full or not
    if (p == NULL)
    {
        cout << "Stack is Full !!" << endl;
        return top;
    }
    else if (top == NULL)
    {
        top = p;
        head = p;
    }
    else
    {
        top->next = p;
        top = p;
    }
    return top;
}

List *pop(List *top, List *head)
{
    if (top == NULL)
    {
        cout << "Stack is Empty" << endl;
        return top;
    }
    List *temp;
    temp = head;
    List *ptr;
    if (temp->next != NULL)
    {
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
    }
    else
    {
        top = NULL;
        return top;
    }
    ptr = top;
    cout << "The Deleted item is: " << ptr->item << endl;
    top = temp;
    top->next = NULL;
    delete (ptr);
    return top;
}

void peek(List *top)
{
    if (top == NULL)
    {
        cout << "Stack is Empty" << endl;
        return;
    }
    else
    {
        cout << "Top of the element is : " << top->item << endl;
    }
}

void display(List *top, List *head)
{
    if (top == NULL)
    {
        cout << "Stack is Empty" << endl;
        return;
    }
    List *temp = head;
    cout << "The elements from bottom to top are : " << endl;
    while (temp != NULL)
    {
        cout << temp->item << " ";
        temp = temp->next;
    }
}

bool isEmpty(List *top)
{
    if (top == NULL)
    {
        return 1;
    }
    else
        return 0;
}

int main()
{
    while (1)
    {
        cout << endl;
        cout << "****** Stack Using Linked List*******" << endl;
        cout << "Enter 1 for Push" << endl;
        cout << "Enter 2 for Pop" << endl;
        cout << "Enter 3 for Peek" << endl;
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
            top = push(data, top);
            break;

        case 2:
            top = pop(top, head);
            break;
        case 3:
            peek(top);
            break;
        case 4:
            display(top, head);
            break;
        case 5:
            if (isEmpty(top))
            {
                cout << "Stack is Empty" << endl;
            }
            else
            {
                cout << "Stack is not Empty" << endl;
            }
            break;
        case 6:
            exit(0);
        }
    }

    return 0;
}