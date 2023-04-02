//Creating Binary Tree from Preorder and Inorder
#include <iostream>
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

int find_pos(int in[], int n, int item)
{
    for (int i = 0; i < n; i++)
    {
        if (in[i] == item)
        {
            return i;
        }
    }
    return -1;
}

Node *solve(int in[], int post[], int &post_index, int in_starting_index, int in_ending_index, int n)
{
    // Base Case
    if (post_index < 0 || in_starting_index > in_ending_index)
    {
        return NULL;
    }
    int item = post[post_index--];
    Node *root = new Node(item);
    int pos = find_pos(in, n, item);
    //In this case 1st call for right part and next call for left part
    root->right = solve(in, post, post_index, pos + 1, in_ending_index, n);
    root->left = solve(in, post, post_index, in_starting_index, pos - 1, n);
    
    return root;
}

Node *buildTree(int in[], int post[], int n)
{
    int post_index = n-1;
    int in_starting_index = 0;

    int in_ending_index = n - 1;

    Node *ans = solve(in, post, post_index, in_starting_index, in_ending_index, n);

    return ans;
}

void pre_order(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    pre_order(root->left);
    pre_order(root->right);
    
}

int main()
{
    int n;
    cout << "Enter the array size: " << endl;
    cin >> n;
    int in[n];
    int post[n];
    cout << "Enter elements for inorder: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> in[i];
    }
    cout << "Enter elements for postorder: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> post[i];
    }
    Node *temp = buildTree(in, post, n);
    cout << "The pre-order form of the tree is :" << endl;
    pre_order(temp);

    return 0;
}