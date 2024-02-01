#include"bits/stdc++.h"
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
node* deletekt(node* &head)
{
    if(head->next==NULL)
    {
        return NULL;
    }
    int n,l=0;node*temp=head;
    cin>>n;
    while(temp!=NULL)
    {
        l++;
        temp=temp->next;
    }
    int j=l-n+1,i=0,prev=l-n;
    node*t1=head;
    while(i=prev)
    {
        t1=t1->next;
        i++;
    }
    t1->next=t1->next->next;
    delete head;

}
int main()
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
        deletekt(head);
            break;
       
        case 4:
            exit(0);
        }

    } while (1);
}