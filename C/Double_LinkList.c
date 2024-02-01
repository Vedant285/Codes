#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
} node;
struct node *Insert(struct node **head, struct node **tail, int key)
{
    struct node *p = (struct node *)malloc(sizeof(node));
    p->data = key;
    p->next = NULL;
    if ((*head) = NULL)
    {
        (*head) = p;
        (*tail) = p;
        (*head)->prev = NULL;
    }
    if ((p->data) < (*head)->data)
    {
        p->prev = NULL;
        (*head)->prev = p;
        p->next = (*head);
        (*head) = p;
    }
    if ((p->data > (*tail)->data))
    {
        p->prev = (*tail);
        (*tail)->next = p;
        (*tail) = p;
    }
    struct node *temp = (*head)->next;
    while ((temp->data < p->data))
    {
        temp = temp->next;
    }
    (temp->prev)->next = p;
    p->prev = temp->prev;
    temp->prev = p;
    p->next = temp;
}
void printlist(struct node *temp)
{
    while (temp != NULL)
    {
        printf("%d", temp->data);
        printf("-> ");
        temp = temp->next;
    }
}
int  main()
{
    struct node *left = NULL, *right = NULL;
    int ch, n;
    do
    {
        printf("Press 1 for insert 2 for print 3 for exit ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            printf("Enter value ");
            scanf("%d", &n);
            Insert(&left, &right, n);
            break;
        case 2:
            printlist(right);
            break;
        case 3:
            exit(0);

        default:
            break;
        }
    } while (1);
}