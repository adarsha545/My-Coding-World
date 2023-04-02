#include <iostream>
#include <vector>
#include <queue>
using namespace std;

template <typename T>
class Gtree
{
public:
    T data;
    vector<Gtree<T> *> children;
    // constructor
    Gtree(int item)
    {
        this->data = item;
    }
    // Destructor
    ~Gtree()
    {
        for (int i = 0; i < children.size(); i++)
        {
            delete children[i];
        }
    }
};

// Creating Generic tree by taking level-wise input
Gtree<int> *create_Gtree()
{
    int rootdata;
    cout << "Enter root : " << endl;
    cin >> rootdata;
    // creating root node
    Gtree<int> *root = new Gtree<int>(rootdata);
    // creating Queue
    queue<Gtree<int> *> q;
    // pushing the root node into the queue
    q.push(root);

    while (!q.empty())
    {
        // create f pointer to store 1st node's address, present in the queue
        Gtree<int> *f = q.front();
        // popping 1st node
        q.pop();
        cout << "Enter the number of child of " << f->data << endl;
        int c;
        cin >> c;
        for (int i = 1; i <= c; i++)
        {
            int childdata;
            cout << "Enter the " << i << " th child :" << endl;
            cin >> childdata;
            /* Rule is : 1) create the node, 2) push the node into the queue, 3)connect the node with it's parent*/
            // create the node
            Gtree<int> *child = new Gtree<int>(childdata);
            // pushing the node into the queue
            q.push(child);
            // connecting with its parent
            f->children.push_back(child);
        }
    }
    return root;
}

// print the tree level-wise

void print_levelwise(Gtree<int> *root)
{
    // Edge Case
    if (root == NULL)
    {
        return;
    }
    // create a queue
    queue<Gtree<int> *> q;
    // pushing the root into the queue
    q.push(root);
    while (!q.empty())
    {
        Gtree<int> *f = q.front();
        q.pop();
        cout << f->data << " : ";
        for (int i = 0; i < f->children.size(); i++)
        {
            cout << f->children[i]->data << ",";
        }
        cout << endl;
        for (int i = 0; i < f->children.size(); i++)
        {
            q.push(f->children[i]);
        }
    }
}

// create the Generic Tree recursively
Gtree<int> *create_GT_recursively()
{
    int rootdata;
    cout << "Enter the number :" << endl;
    cin >> rootdata;
    // create the root node
    Gtree<int> *root = new Gtree<int>(rootdata);
    int c;
    cout << "Enter the no of child of " << rootdata << endl;
    cin >> c;
    for (int i = 1; i <= c; i++)
    {
        // creating child node
        Gtree<int> *child = create_GT_recursively();
        // connecting the childnode with its parent
        root->children.push_back(child);
    }
    return root;
}

// print the tree recursively
void print_recursively(Gtree<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " : ";
    for (int i = 0; i < root->children.size(); i++)
    {
        cout << root->children[i]->data << ",";
    }
    cout << endl;
    for (int i = 0; i < root->children.size(); i++)
    {
        print_recursively(root->children[i]);
    }
}

// count the total nodes
int count_nodes(Gtree<int> *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int ans = 1;
    for (int i = 0; i < root->children.size(); i++)
    {
        ans += count_nodes(root->children[i]);
    }
    return ans;
}

// calculate the height of the tree
int height_tree(Gtree<int> *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int maxh = 0;
    for (int i = 0; i < root->children.size(); i++)
    {
        int ch = height_tree(root->children[i]);
        if (ch > maxh)
        {
            maxh = ch;
        } // maxh=max(maxh,root->children[i]);
    }
    return maxh + 1;
}

// count the leaf nodes
int count_leafnodes(Gtree<int> *root)
{
    if (root == NULL)
    {
        return 0;
    }
    if (root->children.size() == 0)
    {
        return 1;
    }
    int ans = 0;
    for (int i = 0; i < root->children.size(); i++)
    {
        ans += count_leafnodes(root->children[i]);
    }
    return ans;
}

// print at k level nodes
void print_klevel_nodes(Gtree<int> *root, int k, int c = 0)
{
    if (root == NULL)
    {
        return;
    }
    if (k == c)
    {
        cout << "The nodes are : " << root->data << endl;
        return;
    }
    for (int i = 0; i < root->children.size(); i++)
    {
        print_klevel_nodes(root->children[i], k, c + 1);
    }
}

// preorder Traversal
void preorder(Gtree<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << ",";
    for (int i = 0; i < root->children.size(); i++)
    {
        preorder(root->children[i]);
    }
}
// post-order traversal
void postorder(Gtree<int> *root)
{
    if (root == NULL)
    {
        return;
    }

    for (int i = 0; i < root->children.size(); i++)
    {
        postorder(root->children[i]);
    }
    cout << root->data << ",";
}
// Function for delete tree
void delete_tree(Gtree<int> *root)
{
    if (root == NULL)
    {
        return;
    }

    for (int i = 0; i < root->children.size(); i++)
    {
        delete_tree(root->children[i]);
    }

    delete root;
}

int main()
{
    Gtree<int> *root = create_Gtree();
    print_levelwise(root);
    // Gtree<int> *root = create_GT_recursively();
    // print_recursively(root);
    int p;
    p = count_nodes(root);
    cout << "The no of total nodes :" << p << endl;
    int h;
    h = height_tree(root);
    cout << "The height of the tree is : " << h << endl;
    int l;
    l = count_leafnodes(root);
    cout << "The no of leaf nodes :" << l << endl;
    print_klevel_nodes(root, 2);
    cout << "The preorder traversal is : " << endl;
    preorder(root);
    cout << endl;
    cout << "The postorder traversal is : " << endl;
    postorder(root);
    cout << endl;
    // Deleting tree using delete function
    // delete_tree(root);
    // Deleting tree using destructor
    cout << "Now deleting tree...:)" << endl;
    delete root;
    cout << "Deletion complete" << endl;
    return 0;
}
// 1 2 5 6 3 4 7 9 8
// 1 3 2 3 4 2 5 6 2 7 8 0 0 0 0 1 9 0