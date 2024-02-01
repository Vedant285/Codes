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

node *Reverse_from_k(node *&head, int k)
{
    node *prev = NULL;
    node *curr = head;
    node *next;
    int count = 0;
    {
        while (curr != NULL && count < k )
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }
        if (next != NULL)
        {
            head->next = Reverse_from_k(next, k);
        }
    }
    return prev;
}

    void insert(node * &head, int val)
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
    void display(node * head)
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
        do
        {
            cout << "Press 1 To insert \nPress 2 for display \nPress 3 Rotate \nPress 4 for exit" << endl;
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
                int k;
                cout << "Enter The Value Of k from where you want ot reverse" << endl;
                cin >> k;
                head = Reverse_from_k(head, k);
                break;
            case 4:
                exit(0);
            }

        } while (1);
    }