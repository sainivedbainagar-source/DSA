#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *prev;
    struct node *next;
}nd;

nd *head = NULL, *tail = NULL, *ptr = NULL, *newnode = NULL;

void create();
void display();

int main()
{
    printf("Enter elements (-1 to stop):\n");
    create();

    printf("DLL Elements:\n");
    display();

    return 0;
}

void create()
{
    int n;

    scanf("%d", &n);

    while(n != -1)
    {
        newnode = (nd *)malloc(sizeof(nd));

        if(newnode == NULL)
        {
            printf("Memory not allocated\n");
            exit(0);
        }

        newnode->data = n;
        newnode->next = NULL;
        newnode->prev = NULL;

        if(head == NULL)
        {
            head = tail = newnode;
        }
        else
        {
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }

        scanf("%d", &n);
    }
}

void display()
{
    if(head == NULL)
    {
        printf("DLL not created\n");
        return;
    }

    ptr = head;

    while(ptr != NULL)
    {
        printf("%d", ptr->data);

        if(ptr->next != NULL)
            printf(" <-> ");

        ptr = ptr->next;
    }
}
