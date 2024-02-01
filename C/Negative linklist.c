#include <stdio.h>
#include <stdlib.h>

// Define a node in a linked list
struct Node
{
    int data;
    struct Node *next;
};

// Function to create a new node with the given data
struct Node *newNode(int data)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

// Function to insert a new node at the beginning of the linked list
void push(struct Node **head_ref, int data)
{
    struct Node *new_node = newNode(data);
    new_node->next = *head_ref;
    *head_ref = new_node;
}

// Function to print the linked list
void printList(struct Node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

// Function to create two linked lists from an original linked list
// positiveList will contain all positive elements and negativeList will
// contain all negative elements. Both lists will use the nodes of the
// original linked list.
void createLists(struct Node *origList, struct Node **positiveList, struct Node **negativeList)
{
    struct Node *curr = origList;

    // Traverse the original linked list and insert elements into
    // the positive and negative lists as appropriate
    while (curr != NULL)
    {
        // If the current element is positive, insert it into the
        // positive linked list
        if (curr->data > 0)
            push(positiveList, curr->data);

        // If the current element is negative, insert it into the
        // negative linked list
        else
            push(negativeList, curr->data);

        // Move to the next element in the original linked list
        curr = curr->next;
    }
}

// Main function
int main()
{
    // Create an original linked list with both positive and negative elements
    struct Node *origList = NULL;
    push(&origList, -1);
    push(&origList, 3);
    push(&origList, 5);
    push(&origList, -2);
    push(&origList, 4);
    push(&origList, -7);

    // Print the original linked list
    printf("Original linked list: ");
    printList(origList);

    // Create two empty linked lists for positive and negative elements
    struct Node *positiveList = NULL;
    struct Node *negativeList = NULL;

    // Create the positive and negative linked lists
    createLists(origList, &positiveList, &negativeList);

    // Print the linked lists
    printf("Positive linked list: ");
    printList(positiveList);
    printf("Negative linked list: ");
    printList(negativeList);

    return 0;
}
