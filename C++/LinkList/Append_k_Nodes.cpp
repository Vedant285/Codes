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
int length(node *head)
{
    int l = 0;
    node *temp = head;
    while (temp != NULL)
    {
        l++;
        temp = temp->next;
    }
    return l;
}
node *Append(node *&head, int k)
{
    node *newhead;
    node *newtail;
    node *tail = head;
    int count = 1;
    int l = length(head);
    while (tail->next != NULL)
    {
        if (count == l - k)
        {
            newtail = tail;
        }
        if (count == l - k + 1)
        {
            newhead = tail;
        }
        tail = tail->next;
        count++;
    }
    newtail->next=NULL;
    tail->next=head;
    return newhead;
}
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
// Display
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
int32_t main()
{
    node *head = NULL;
    int n, m;
    node* newhead;
    do
    {
        cout << "Press 1 To insert \nPress 2 for display \nPress 3 for Append \nPress 4 for exit" << endl;
        cin >> n;
        switch (n)
        {
        case 1:
            cout << "Enter value to be insert" << endl;
            cin >> m;
            insert(head, m);
            break;
        case 2:
            display(head);
            break;
        case 3:
            int n;
            cout << "From where you want to append" << endl;
            cin >> n;
            newhead=Append(head,n);
            display(newhead);
            break;
        case 4:
            exit(0);
        }

    } while (1);
}