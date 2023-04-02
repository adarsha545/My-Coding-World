#include <iostream>
#include <queue>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    // Creating Constructor
    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
    // Creating Destructor
    ~Node()
    {
        delete left;
        delete right;
    }
};

// creating tree by taking input recursively
Node *create_recursively()
{

    int rootdata;
    cout << "Enter the data:" << endl;
    cin >> rootdata;
    if (rootdata == -1)
    {
        return NULL;
    }
    Node *temp = new Node(rootdata);
    cout << "Enter the left child of " << temp->data << ",";
    temp->left = create_recursively();
    cout << "Enter the right child of " << temp->data << ",";
    temp->right = create_recursively();
    return temp;
}

// print the tree recursively
void print_recursively(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << ":";
    if (root->left != NULL)
    {
        cout << "L" << root->left->data << " ,";
    }
    if (root->right != NULL)
    {
        cout << "R" << root->right->data;
    }
    cout << endl;
    print_recursively(root->left);
    print_recursively(root->right);
}

// creating tree by taking input levelwise
Node *levelwise_tree()
{
    int rootdata;
    cout << "Enter the data :" << endl;
    cin >> rootdata;
    if (rootdata == -1)
    {
        return NULL;
    }
    Node *root = new Node(rootdata);
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();
        int lchild;
        cout << "Enter the left child of " << f->data << endl;
        cin >> lchild;
        if (lchild != -1)
        {
            Node *child = new Node(lchild);
            q.push(child);
            f->left = child;
        }
        int rchild;
        cout << "Enter the right child of " << f->data << endl;
        cin >> rchild;
        if (rchild != -1)
        {
            Node *child = new Node(rchild);
            q.push(child);
            f->right = child;
        }
    }
    return root;
}
// Print tree level-wise
void print_levelwise(Node *root)
{
    if (root == NULL)
    {
        return;
    }
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
// Inorder Traversal
void inorder_traversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder_traversal(root->left);
    cout << root->data << " ";
    inorder_traversal(root->right);
}

// preorder traversal
void preorder_traversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder_traversal(root->left);
    preorder_traversal(root->right);
}
// postorder traversal
void postorder_traversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    postorder_traversal(root->left);
    postorder_traversal(root->right);
    cout << root->data << " ";
}

// count leaf nodes
void No_leafnodes(Node *root, int &a)
{
    if (root == NULL)
    {
        return;
    }

    if (root->left == NULL && root->right == NULL)
    {
        a++;
        return;
    }
    No_leafnodes(root->left, a);
    No_leafnodes(root->right, a);
}
// Height of the tree
int Tree_height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int l, r;
    l = Tree_height(root->left);
    r = Tree_height(root->right);
    return max(l, r) + 1;
}

// Diameter of the tree (Approach #1):   T.C=O(n^2), s.c=O(height of the tree)
int Tree_diameter(Node *root)
{
    // base case
    if (root == NULL)
    {
        return 0;
    }
    int op1 = Tree_diameter(root->left);
    int op2 = Tree_diameter(root->right);
    int op3 = Tree_height(root->left) + Tree_height(root->right) + 1;
    return max(op1, max(op2, op3));
}

// Diameter of the tree (#Approach #2-BEST): T.C=O(n)
pair<int, int> diameter_best(Node *root)
{
    if (root == NULL)
    {
        pair<int, int> p = make_pair(0, 0);
        return p;
    }
    pair<int, int> left = diameter_best(root->left);
    pair<int, int> right = diameter_best(root->right);
    int op1 = left.first;
    int op2 = right.first;
    int op3 = (left.second) + (right.second) + 1;
    pair<int, int> ans;
    ans.first = max(op1, max(op2, op3));
    ans.second = max(left.second, right.second) + 1;
    return ans;
}

int diameter(Node *root)
{
    return diameter_best(root).first;
}

// Check Balance tree or not (Approach #1): T.C=O(n^2)
bool Balance_tree(Node *root)
{
    if (root == NULL)
    {
        return true;
    }
    bool left = Balance_tree(root->left);
    bool right = Balance_tree(root->right); // abs use for getting absolute value
    bool diff = abs(Tree_height(root->left) - Tree_height(root->right)) <= 1;
    if (left && right && diff)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// Check Balanced tree or not (#Approach #2):  T.C=O(n)
pair<bool, int> balanced_fast(Node *root)
{
    if (root == NULL)
    {
        pair<bool, int> p = make_pair(true, 0);
        return p;
    }
    pair<bool, int> left = balanced_fast(root->left);
    pair<bool, int> right = balanced_fast(root->right);

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
        ans.first = false;
    }
    return ans;
}
bool isbalanced(Node *root)
{
    return balanced_fast(root).first;
}

// Trees are Identical or not
bool isidentical(Node *r1, Node *r2)
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

    bool left = isidentical(r1->left, r2->left);
    bool right = isidentical(r1->right, r2->right);
    bool check = r1->data == r2->data;
    if (r1 && r2 && check)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// sum tree or not:  T.C=O(n)
pair<bool, int> is_sumtree(Node *root)
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
    pair<bool, int> leftans = is_sumtree(root->left);
    pair<bool, int> rightans = is_sumtree(root->right);

    bool isleftsumtree = leftans.first;
    bool isrightsumtree = rightans.first;
    bool condition = root->data == leftans.second + rightans.second;
    pair<bool, int> ans;
    if (isleftsumtree && isrightsumtree && condition)
    {
        ans.first = true;
        ans.second = 2 * root->data; // leftans.second + rightans.second;
    }
    else
    {
        ans.first = false;
    }
}
bool sum_tree(Node *root)
{
    return is_sumtree(root).first;
}

int main()
{
    Node *root = NULL;
    Node *r = NULL;
    // creating tree recursively
    r = create_recursively();
    // creating tree level-wise
    root = levelwise_tree();
    cout << endl;
    // Printing tree recursively
    print_recursively(root);
    // Printing tree level-wise
    cout << "Printing tree level-wise" << endl;
    print_levelwise(root);
    // Inorder Traversal
    cout << "Inorder Traversal : ";
    inorder_traversal(root);
    cout << endl;
    // Preorder Traversal
    cout << "Preorder Traversal : ";
    preorder_traversal(root);
    cout << endl;
    // Postorder Traversal
    cout << "Postorder Traversal : ";
    postorder_traversal(root);
    cout << endl;
    // Count leaf Nodes
    int c = 0;
    No_leafnodes(root, c);
    cout << "No of leaf nodes present :" << c << endl;
    // Tree height
    int h = Tree_height(root);
    cout << "Height of the tree is :" << h << endl;
    // Tree Diameter #1
    int t = Tree_diameter(root);
    cout << "Diameter of the tree using (approach #1): " << t << endl;
    // Tree Diameter #2
    int x = diameter(root);
    cout << "Diameter of the tree using (approach #2): " << x << endl;
    // Balance tree or not #1
    cout << "Balanced tree or not using Approach #1" << endl;
    if (Balance_tree(root))
    {
        cout << "The tree is Balanced !!!" << endl;
    }
    else
    {
        cout << "The tree is not Balanced !!" << endl;
    }
    // Balanced tree or not #2
    cout << "Balanced tree or not using Approach #2" << endl;

    if (isbalanced(root))
    {
        cout << "The tree is Balanced !!!" << endl;
    }
    else
    {
        cout << "The tree is not Balanced !!" << endl;
    }
    // Identical or not
    if (isidentical(root, r))
    {
        cout << "The trees are Identical !!!" << endl;
    }
    else
    {
        cout << "The trees are not Identical !!" << endl;
    }
    // sum tree or not
    if (sum_tree(root))
    {
        cout << "The tree is sumtree !!!" << endl;
    }
    else
    {
        cout << "The tree is not sumtree !!" << endl;
    }
    // Deletion process
    cout << "Deleting Tree..." << endl;
    delete root;
    delete r;
    cout << "Deletion Complete !!" << endl;

    return 0;
}
// 100 50 40 -1 -1 60 -1 -1 110 105 -1 -1 -1  (recursively)
// 100 50 110 40 60 105 -1 -1 -1 -1 -1 -1 -1   (level-wise)
// 50 20 30 10 10 -1 -1 -1 -1 -1 -1 (sum tree)