#include <stdio.h>
#include <stdlib.h>
typedef struct tree_type
{
    tree_type *left;
    int info;
    tree_type *right;
} tree_type;
tree_type *Create(int num)
{
    tree_type *temp;
    temp = (tree_type *)malloc(sizeof(tree_type));
    if (temp != NULL)
    {
        temp->info = num;
        temp->left = NULL;
        temp->right = NULL;
    }
    return temp;
}
void Insert(tree_type *root, tree_type *temp)
{
    if (temp->info < root->info)
    {
        if (root->left == NULL)
        {
            root->left = temp;
        }
        else
            Insert(root->left, temp);
    }
    else
    {
        if (root->right == NULL)
        {
            root->right = temp;
        }
        else
            Insert(root->right, temp);
    }
}
void Inorder(tree_type *root)
{
    if (root == NULL)
    {
        return;
    }
    Inorder(root->left);
    printf("%d ", root->info);
    Inorder(root->left);
}
int main()
{
    int num, k;
    tree_type *root = NULL, *temp;
    do
    {
        printf("Enter 1 to insert 2 for display and 3 to exit : ");
        scanf("%d", &k);
        switch (k)
        {
        case 1:
            printf("Enter the element ; ");
            scanf("%d", &num);
            temp = Create(num);
            if (root == NULL)
            {
                root = temp;
            }
            else
                Insert(root, temp);

            break;
        case 2:
            Inorder(root);
            break;
        case 3:
            exit(0);
        default:
            break;
        }

    } while (1);
}