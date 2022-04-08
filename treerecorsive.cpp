#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void treetravalsal(struct Node *root)
{
    if (root == NULL)
        return;
    struct Node *tmp = root;

    treetravalsal(tmp->left);
    treetravalsal(tmp->right);
    cout << tmp->data << " ";
}

int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(4);
    root->left->left = new Node(5);
    struct Node *temp = root;
    treetravalsal(temp);
    queue<Node *> que;
    que.push(temp);
    while (!que.empty())
    {
        struct Node *node = que.front();
        cout << node->data << " ";
        que.pop();
        if (node->left)
        {
            que.push(node->left);
        }
        if (node->right)
        {
            que.push(node->right);
        }
    }
}