#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left, *right;
};

struct node *root = NULL;

// Function declarations
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
        printf("\nMenu\n");
        printf("2. Preorder Traversal\n");
        printf("3. Inorder Traversal\n");
        printf("4. Postorder Traversal\n");
        printf("Enter your choice: ");
        scanf("%d", &op);

        switch(op)
        {
            case 2:
                printf("Preorder Traversal: ");
                preorder(root);
                break;

            case 3:
                printf("Inorder Traversal: ");
                inorder(root);
                break;

            case 4:
                printf("Postorder Traversal: ");
                postorder(root);
                break;

            default:
                printf("Invalid Choice");
        }

        printf("\nDo you want to continue? (1 = Yes, 0 = No): ");
        scanf("%d", &flag);

    } while(flag);

    return 0;
}

// Function to create Binary Tree
struct node* create()
{
    int x;

    printf("Enter data (-1 for no node): ");
    scanf("%d", &x);

    if(x == -1)
        return NULL;

    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));

    newnode->data = x;

    printf("Enter left child of %d\n", x);
    newnode->left = create();

    printf("Enter right child of %d\n", x);
    newnode->right = create();

    return newnode;
}

// Preorder Traversal
void preorder(struct node *root)
{
    if(root == NULL)
        return;

    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}

// Inorder Traversal
void inorder(struct node *root)
{
    if(root == NULL)
        return;

    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}


void postorder(struct node *root)
{
    if(root == NULL)
        return;

    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->data);
}
