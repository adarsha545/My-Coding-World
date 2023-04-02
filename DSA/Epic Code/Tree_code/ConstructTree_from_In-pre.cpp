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

Node *solve(int in[], int pre[], int &pre_index, int in_starting_index, int in_ending_index, int n)
{
    // Base Case
    if (pre_index >= n || in_starting_index > in_ending_index)
    {
        return NULL;
    }
    int item = pre[pre_index++];
    Node *root = new Node(item);
    int pos = find_pos(in, n, item);
    //In this case 1st call for left part and next call for right part
    root->left = solve(in, pre, pre_index, in_starting_index, pos - 1, n);
    root->right = solve(in, pre, pre_index, pos + 1, in_ending_index, n);
    return root;
}

Node *buildTree(int in[], int pre[], int n)
{
    int pre_index = 0;
    int in_starting_index = 0;

    int in_ending_index = n - 1;

    Node *ans = solve(in, pre, pre_index, in_starting_index, in_ending_index, n);

    return ans;
}

void post_order(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    post_order(root->left);
    post_order(root->right);
    cout << root->data << " ";
}

int main()
{
    int n;
    cout << "Enter the array size: " << endl;
    cin >> n;
    int in[n];
    int pre[n];
    cout << "Enter elements for inorder: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> in[i];
    }
    cout << "Enter elements for preorder: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> pre[i];
    }
    Node *temp = buildTree(in, pre, n);
    cout << "The post-order form of the tree is :" << endl;
    post_order(temp);

    return 0;
}