#include <stdio.h>
#include <stdlib.h>
#define max 50
int insert(int arr[], int rear)
{
    int val;
    if (rear == max - 1)
    {
        printf("Queue is Overflow\n");
    }

    else
    {
        printf("Enter Value \n");
        scanf("%d", &val);
        rear = rear + 1;
        arr[rear] = val;
    }
    return rear;
}
int delete (int arr[], int front)
{
    if (front == -1)
    {
        printf(" Queue is Underflow\n");
    }
    else
    {
        printf("Deleted element is %d", arr[front]);
    }
    return front;
}
void display(int arr[], int front, int rear)
{

    for (int i = front; i <= rear; i++)
    {
        printf("%d\n ", arr[i]);
    }
}
int main()
{
    int front = 0, rear = -1, n, arr[max];
    do
    {
        printf("Press 1 To Insert\nPress 2 for Delete\nPress 3  Display\n4 for Exit\n");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            rear = insert(arr, rear);
            break;
        case 2:
            front = delete (arr, front);
            break;
        case 3:
            display(arr, front, rear);
        case 4:
            exit(0);
        }

    } while (1);
}