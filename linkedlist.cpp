#include <bits/stdc++.h>
#include <string>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void printlinked(Node *n)
{
    while (n != NULL)
    {
        cout << n->data << "\n";
        n = n->next;
    }
}

void push(Node **head, int data)
{
    Node *newnode = new Node();
    newnode->data = data;
    newnode->next = (*head);
    (*head) = newnode;
}
void insertafter(Node *prev, int data)
{
    if (prev == NULL)
    {
        return;
    }
    Node *newnode = new Node();
    newnode->data = data;
    newnode->next = prev->next;
    prev->next = newnode;
}

int main()
{
    Node *head = NULL;
    push(&head, 3);
    push(&head, 5);
    insertafter(head->next, 7);
    insertafter(head->next, 9);
    push(&head, 5);
    push(&head, 4);
    printlinked(head);
}