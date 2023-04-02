#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    // Constructor
    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

// Creating Tree using Recursion
Node *create_recursively(Node *root)
{
    int rdata;
    cout << "Enter the data : " << endl;
    cin >> rdata;
    // Base Case
    if (rdata == -1)
    {
        return NULL;
    }
    root = new Node(rdata);
    cout << "Enter data for left child of " << rdata << endl;
    root->left = create_recursively(root->left);
    cout << "Enter data for right child of " << rdata << endl;
    root->right = create_recursively(root->right);
    return root;
}

// Inorder Traversal
void inorder(Node *root)
{
    // Base Case
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Preorder Traversal
void preorder(Node *root)
{
    // Base Case
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

// Postorder Traversal
void postorder(Node *root)
{
    // Base Case
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

// Take input level-wise
Node *create_levelwise(Node *root)
{
    queue<Node *> q;
    cout << "Enter data: " << endl;
    int data;
    cin >> data;
    root = new Node(data);
    q.push(root);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        cout << "Enter the left child of " << temp->data << endl;
        int ldata;
        cin >> ldata;
        if (ldata != -1)
        {
            temp->left = new Node(ldata);
            q.push(temp->left);
        }
        cout << "Enter the right child of " << temp->data << endl;
        int rdata;
        cin >> rdata;
        if (rdata != -1)
        {
            temp->right = new Node(rdata);
            q.push(temp->right);
        }
    }

    return root;
}

// Print tree level-wise
void print_levelwise(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node *temp = q.front();

        q.pop();
        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

// Height of the tree
int height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int h1, h2;
    h1 = height(root->left);
    h2 = height(root->right);
    int ans = max(h1, h2) + 1;
    return ans;
}

// Diameter of the tree
pair<int, int> diameter(Node *root)
{
    // Base Case
    if (root == NULL)
    {
        pair<int, int> p = make_pair(0, 0);
        return p;
    }
    // First int for diameter and second int for height
    pair<int, int> left = diameter(root->left);
    pair<int, int> right = diameter(root->right);

    int op1 = left.first;
    int op2 = right.first;
    int op3 = left.second + right.second + 1;
    pair<int, int> ans;
    ans.first = max(op1, max(op2, op3));
    ans.second = max(left.second, right.second) + 1;
    return ans;
    // Time Complexcity of this function => O(n)
}

// Tree is Balanced or not
pair<bool, int> isBalanced(Node *root)
{
    if (root == NULL)
    {
        pair<bool, int> p = make_pair(true, 0);
        return p;
    }
    // First bool for balanced or not and second int for height
    pair<bool, int> left = isBalanced(root->left);
    pair<bool, int> right = isBalanced(root->right);
    bool leftans = left.first;
    bool rightans = right.first;
    bool diff = abs(left.second - right.second) <= 1;
    pair<bool, int> ans;
    ans.second = max(left.second, right.second) + 1;
    if (leftans && rightans && diff)
    {
        ans.first = true;
    }
    else
    {
        ans.second = false;
    }
    return ans;
    // Time Complexcity of this function => O(n)
}

// Two trees are identical or not
bool isIdentical(Node *r1, Node *r2)
{
    if (r1 == NULL && r2 == NULL)
    {
        return true;
    }
    if (r1 == NULL && r2 != NULL)
    {
        return false;
    }
    if (r1 != NULL && r2 == NULL)
    {
        return false;
    }
    bool left = isIdentical(r1->left, r2->left);
    bool right = isIdentical(r1->right, r2->right);
    bool value = r1->data == r2->data;
    if (left && right && value)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// Is sumtree or not
pair<bool, int> isSumtree(Node *root)
{
    if (root == NULL)
    {
        pair<bool, int> p = make_pair(true, 0);
        return p;
    }

    if (root->left == NULL && root->right == NULL)
    {
        pair<bool, int> p = make_pair(true, root->data);
        return p;
    }
    // First bool for sumtree or not and second int for sum
    pair<bool, int> left = isSumtree(root->left);
    pair<bool, int> right = isSumtree(root->right);
    bool lans = left.first;
    bool rans = right.first;
    bool cond = root->data == (left.second + right.second);
    pair<bool, int> ans;
    if (lans && rans && cond)
    {
        ans.first = true;
        ans.second = left.second + right.second + root->data;
    }
    else
    {
        ans.first = false;
    }

    return ans;
    // Time Complexcity of this function => O(n)
}

int main()
{
    Node *root = NULL;
    Node *root1 = NULL;
    root = create_recursively(root);
    // root1 = create_levelwise(root);
    print_levelwise(root);
    cout << endl;
    cout << "Inorder Traversal:" << endl;
    inorder(root);
    cout << endl;
    cout << "Preorder Traversal:" << endl;
    preorder(root);
    cout << endl;
    cout << "Postorder Traversal:" << endl;
    postorder(root);
    cout << endl;
    int h;
    h = height(root);
    cout << "The height of the tree is : " << h << endl;
    cout << "The diameter of the tree is : ";
    int d = diameter(root).first;
    cout << d << endl;
    if (isBalanced(root).first)
    {
        cout << "Tree is Balanced !!" << endl;
    }
    else
    {
        cout << "Tree is not Balanced !!" << endl;
    }
    if (isIdentical(root, root1))
    {
        cout << "Tree is Identical  !!" << endl;
    }
    else
    {
        cout << "Tree is not Identical !!" << endl;
    }
    if (isSumtree(root).first)
    {
        cout << "Tree is Sumtree  !!" << endl;
    }
    else
    {
        cout << "Tree is not Sumtree !!" << endl;
    }

    return 0;
}

// 20 16 5 -1 -1 18 17 -1 -1 19 -1 -1 60 -1 85 70 -1 -1 -1 (for recursive)