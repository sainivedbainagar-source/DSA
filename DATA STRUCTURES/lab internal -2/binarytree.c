#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left, *right;
};

struct node *root = NULL;

struct node* create();
void preorder(struct node*);
void inorder(struct node*);
void postorder(struct node*);

int main()
{
    int op, flag;

    root = create();

    do
    {
        printf("Enter choice\n");
        printf("2.Preorder Traversal\n");
        printf("3.Inorder Traversal\n");
        printf("4.Postorder Traversal\n");

        scanf("%d", &op);

        switch(op)
        {
            case 2:
                printf("Preorder Traversal:\n");
                preorder(root);
                break;

            case 3:
                printf("Inorder Traversal:\n");
                inorder(root);
                break;

            case 4:
                printf("Postorder Traversal:\n");
                postorder(root);
                break;
            case 5 :
                break;
        }

        printf("\nDo you want to continue?\n");
        printf("If yes enter 1 else 0\n");
        scanf("%d", &flag);

    } while(flag);

    return 0;
}

struct node *create()
{
    int x;

    printf("Enter data (-1 to exit): ");
    scanf("%d", &x);

    if(x == -1)
        return NULL;

    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));

    newnode->data = x;

    printf("Enter left child of %d: ", x);
    newnode->left = create();

    printf("Enter right child of %d: ", x);
    newnode->right = create();

    return newnode;
}

void preorder(struct node *root)
{
    if(root == NULL)
        return;

    printf("%d\t", root->data);

    preorder(root->left);
    preorder(root->right);
}

void inorder(struct node *root)
{
    if(root == NULL)
        return;

    inorder(root->left);
    printf("%d\t", root->data);
    inorder(root->right);
}

void postorder(struct node *root)
{
    if(root == NULL)
        return;

    postorder(root->left);
    postorder(root->right);
    printf("%d\t", root->data);
}
