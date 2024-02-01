#include "bits/stdc++.h"
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
void insert(node *&head, int val)
{

    node *n = new node(val); // Creating Node
    node *temp = head;
    if (head == NULL)
    {
        head = n;
        return;
    }

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
node *reverse(node *&head) // Reverse Link
{
    node *prev = NULL;
    node *curr = head;
    node *next;
    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
int main()
{
    node *head = NULL;
    int n, m;
    do
    {
        cout << "Press 1 To insert \nPress 2 for Reverse \nPress 3 for Display \nPress 4 for exit" << endl;
        cin >> n;
        switch (n)
        {
        case 1:
            cout << "Enter value to be insert" << endl;
            cin >> m;
            insert(head, m);
            break;
        case 2:
            head = reverse(head);
            break;
        case 3:
            display(head);
            break;
        case 4:
            exit(0);
        }

    } while (1);
}