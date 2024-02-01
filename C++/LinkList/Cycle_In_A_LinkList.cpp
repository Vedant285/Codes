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
bool detect(node *head)
{
    node *slow = head;
    node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    if (fast == slow)
    {
        return true;
    }
    else
        return false;
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
void MakeCycle(node *&head, int pos)
{
    node *temp = head;
    node *start;
    int count = 1;
    while (temp->next != NULL)
    {
        if (count == pos)
        {
            start = temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = start;
}
int32_t main()
{
    node *head = NULL;
    int n, m, k;
    do
    {
        cout << "Press 1 To insert\nPress 2 for display\nPress 3 for detection\nPress 4 To make cycle\n5 For Exit" << endl;
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
            cout << detect(head) << endl;
            break;
        case 4:
            cout << "Enter From Where you want to make cycle" << endl;
            cin >> k;
            MakeCycle(head, k); // Create Cycly from a given position k
            break;
        case 5:
            exit(0);
        }

    } while (1);
}