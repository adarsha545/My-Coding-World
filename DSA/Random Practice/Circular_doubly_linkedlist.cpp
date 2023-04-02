#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;
    Node(int x)
    {
        this->data = x;
        this->prev = NULL;
        this->next = NULL;
    }
};

void insert_beg(Node *&head, int item)
{
    if (head == NULL)
    {
        Node *newnode = new Node(item);
        head = newnode;
        head->next = head;
        head->prev = head->next;
        return;
    }
    Node *newnode = new Node(item);
    Node *add = head;
    while (add->next != NULL)
    {
        add = add->next;
    }
    add->next = newnode;
    newnode->prev = add;
    head->prev = newnode;
    newnode->next = head;
    head = newnode;
}

void display(Node*head){
    if(head==NULL){
        cout<<"List is Empty"<<endl;
    }
    Node* temp=head;
    while(temp->next!=head){
        cout<<temp->data<<"->";
    }
    cout<<temp->data<<"NULL";
}

int main(){
    Node*head=NULL;
        
        while (1)
    {   cout<<"******Doubly LL******"<<endl;
        cout << "Enter 1 : To insert from Beginning" << endl;
        cout << "Enter 2 : To display the list" << endl;
        cout << "Enter 3 : To insert from Ending" << endl;
        cout << "Enter 4 : To insert at any position" << endl;
        cout << "Enter 5 : To delete from beginning" << endl;
        cout << "Enter 6 : To delete from Ending" << endl;
        cout << "Enter 7 : To delete at any position" << endl;
        cout << "Enter 8 : To reverse the list" << endl;
        cout << "Enter 9 : To search any element" << endl;
        cout << "Enter 10 : To get the length of the list" << endl;
        cout << "Enter 0 : For Exit" << endl;
        int ch;
        cin >> ch;
        switch (ch)
        {
        case 1:
            int z;
            cout << "Enter the data :" << endl;
            cin >> z;
            insert_beg(head,z );
            break;
        case 2:
            display(head);
            break;
        case 3:
            int l;
            cout << "Enter the data :" << endl;
            cin >> l;
            //insert_End(head, l, tail);
            break;
            return 0;
        }
    }
    
}