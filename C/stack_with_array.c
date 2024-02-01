#include <stdio.h>
#include <stdlib.h>
#define max 50
int push(int[], int);
int pop(int[], int);
void display(int[], int);
int main()
{
    int arr[max], top = -1, ch;
    do
    {
        printf("Enter 1 for push \nEnter 2 for pop\nEnter 3 for display\nEnter 4 for exit \n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            top = push(arr, top);
            break;
        case 2:
            top = pop(arr, top);
            break;
        case 3:
            display(arr, top);
            break;
        case 4:
            exit(0);
        }

    } while (1);
}
int push(int arr[], int top)
{
    int val;
    printf("Enter value you want to insert ");
    scanf("%d", &val);
    if (top == -max - 1)
    {
        printf("Stack is Underflow");
    }
    else
    {
        top = top + 1;
        arr[top] = val;
    }
    return (top);
}
int pop(int arr[], int top)
{
    if (top == -1)
    {
        printf("Stack is Underflow ");
    }
    else
    {
        printf("deleted element is %d", arr[top]);
        top = top - 1;
    }
    return (top);
}
void display(int arr[], int top)
{
    for (int i = top; i >= 0; i--)
    {
        printf("%d", arr[i]);
    }
}
