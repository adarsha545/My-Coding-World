#include <iostream>
#include <queue>
using namespace std;
template <typename T>
class Btree
{
public:
    T data;
    Btree *left;
    Btree *right;
    Btree(T item)
    {
        data = item;
    }
    ~Btree()
    {
        delete left;
        delete right;
    }
};

// creating Binary tree by taking level-wise input
Btree<int> *create_levelwise()
{
    int rootdata;
    cout << "Enter the data : " << endl;
    cin >> rootdata;
    Btree<int> *root = new Btree<int>(rootdata);
    queue<Btree<int>*> q;
    q.push(root);
    while (!q.empty())
    {
        Btree<int>* f = q.front();
        q.pop();
        cout << "Enter the left child of " << f->data << endl;
        int ldata;
        cin >> ldata;
        if (ldata != 0)
        {
            Btree<int> *lchild = new Btree<int>(ldata);
            q.push(lchild);
            f->left = lchild;
        }
        cout << "Enter the right child of " << f->data << endl;
        int rdata;
        cin >> rdata;
        if (rdata != 0)
        {
            Btree<int> *rchild = new Btree<int>(rdata);
            q.push(rchild);
            f->right = rchild;
        }
    }
    return root;
}
// print the tree levelwise
/*void print_levelwise(Btree<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << ": ";
    queue<Btree<int> *> q;
    q.push(root);
    while (!q.empty())
    {
        Btree<int> *f = q.front();
        q.pop();

        if (f->left->data != -1)
        {
            cout << "L" << f->left->data << ",";
            q.push(f->left);
        }
        else if (f->left->data == -1)
        {
            cout << "L(-1)"<< ",";
        }
        if (f->right->data != -1)
        {
            cout << "R" << f->right->data << ",";
            q.push(f->right);
        }
        else if (f->right->data == -1)
        {
            cout << "R(-1)"<< ",";

        }
        cout << endl;
    }
}*/

// createing tree recursively
Btree<int> *create_recursively()
{
    int rootdata;
    cout << "Enter the data :" << endl;
    cin >> rootdata;
    if (rootdata == 0)
    {
        return NULL;
    }
    Btree<int> *root = new Btree<int>(rootdata);
    root->left = create_recursively();
    root->right = create_recursively();
    return root;
}

// print the tree recursively
void print_recursively(Btree<int> *root)
{
    if (root == 0)
    {
        return;
    }
    cout << root->data << ": ";
    if (root->left)
    {
        cout << "L" << root->left->data;
    }
    if (root->right)
    {
        cout << "R" << root->right->data;
    }
    cout << endl;
    print_recursively(root->left);
    print_recursively(root->right);
}

int main()
{
    Btree<int> *root = create_recursively();
    // print_levelwise(root);

    print_recursively(root);

    return 0;
} // 1 2 3 4 5 7 6 0 0 0 0 0 0 0 0
