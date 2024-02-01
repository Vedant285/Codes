#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
typedef struct node
{
    int data;
    struct node* next;
}node;
node* Insert(node* head)
{
    int v;
    node*p;
    p=(node*)malloc(sizeof(node));
    printf("Enter Value to be Inserted : ");
    scanf("%d",&v);
    p->data=v;
    p->next=NULL;
    if (head==NULL)
    {
        head=p;
    }
    else{
        node* temp=head;
        while (temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=p;
        p->next=head;  
    }
    return head;
}
void display(node* head)
{
    node* temp=head;
    do
    {
        printf("%d ->",temp->data);
        temp=temp->next;
    } while (temp!=head);
    
    
}
int main()
{
    node* head=NULL;
    int n, m;
    do
    {
        printf("Press 1 To Insert\nPress 2 for Display\nPress 3 for Exit\n");
        scanf("%d",&n);
        switch (n)
        {
        case 1:
            head=Insert(head);
            break;
        case 2:
            display(head);
            break;
       case 3:
            exit(0);
        }

    } while (1);
}