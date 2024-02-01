#include "bits/stdc++.h"
using namespace std;
// link list
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
// Insert In LinkList
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
// Delete head element from linklist
void DelHead(node *&head)
{
    node *k = head;
    head = head->next;
    delete k;
}
// Delete a Given Element
void Del(node *&head, int v)
{
    node *temp = head;
    while (temp->next->data != v)
    {
        temp = temp->next; // run upto the number you want to delete and save its previous to temp and link temp to the element after the no.  you want to delete
    }
    node *k = temp->next;
    temp->next = temp->next->next;
    delete k;
}
int32_t main()
{
    node *head = NULL;
    int n, m;
    do
    {
        cout << "Press 1 To insert \n Press 2 for display \n Press 3 for delete any no. EXCEPT HEAD \n Press 4 if you want to delete head \n Press 5 for exit" << endl;
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
            cout << "Enter Node You want to delete" << endl;
            cin >> n;
            Del(head, n);
            break;
        case 4:
            DelHead(head);
            break;
        case 5:
            exit(0);
        }

    } while (1);
}