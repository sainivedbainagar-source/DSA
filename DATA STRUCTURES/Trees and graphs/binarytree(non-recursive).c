#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *left, *right;
};
struct node * createnode(int data) {
    struct node * nn = (struct node *)malloc(sizeof(struct node));
    nn->data = data;
    nn->left = nn->right = NULL;
    return nn;
}
struct Node* createTree() {
    int data;
    printf("Enter root value (-1 for no node): ");
    scanf("%d", &data);

    if (data == -1)
        return NULL;
    struct node * root = createnode(data);
    struct node * queue[100];
    int front = 0, rear = 0;

    queue[rear++] = root;
    while (front < rear) {
        struct node * temp = queue[front++];

        printf("Enter left child of %d (-1 for no node): ", temp->data);
        scanf("%d", &data);
        if (data != -1) {
            temp->left = createnode(data);
            queue[rear++] = temp->left;
        }

        printf("Enter right child of %d (-1 for no node): ", temp->data);
        scanf("%d", &data);
        if (data != -1) {
            temp->right = createnode(data);
            queue[rear++] = temp->right;
        }
    }

    return root;
}
void inorder(struct node * root) {
    struct node * stack[100];
    int top = -1;
    struct node * temp = root;

    while (temp != NULL || top != -1) {
        while (temp != NULL) {
            stack[++top] = temp;
            temp = temp ->left;

        }

        temp = stack[top--];
        printf("%d ", temp ->data);

        temp = temp ->right;
    }
}
void preorder(struct node * root) {
    if (root == NULL) return;

    struct node * stack[100];
    int top = -1;

    stack[++top] = root;

    while (top != -1) {
        struct node * temp = stack[top--];
        printf("%d ", temp ->data);

        if (temp->right)
            stack[++top] = temp ->right;

        if (temp->left)
            stack[++top] = temp ->left;
    }
}
void postorder(struct node * root) {
    if (root == NULL) return;

    struct node * stack1[100], *stack2[100];
    int top1 = -1, top2 = -1;

    stack1[++top1] = root;

    while (top1 != -1) {
        struct node * temp = stack1[top1--];
        stack2[++top2] = temp;

        if (temp->left)
            stack1[++top1] = temp ->left;

        if (temp->right)
            stack1[++top1] = temp ->right;
    }

    while (top2 != -1) {
        printf("%d ", stack2[top2--]->data);
    }
}

int main() {
    struct node * root = createTree();

    printf("\nInorder Traversal: ");
    inorder(root);

    printf("\nPreorder Traversal: ");
    preorder(root);

    printf("\nPostorder Traversal: ");
    postorder(root);

    return 0;
}
