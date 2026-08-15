#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}nd;

nd *head = NULL, *tail = NULL, *ptr = NULL, *ptr1 = NULL, *ptr2 = NULL;

void create();
void display();
void search();
void sort();

int main()
{
    printf("Enter elements (-1 to stop):\n");
    create();

    printf("\nList:\n");
    display();

    search();

    sort();

    printf("\nSorted List:\n");
    display();

    return 0;
}

void create()
{
    int n;

    scanf("%d",&n);

    while(n != -1)
    {
        ptr = (nd *)malloc(sizeof(nd));

        if(ptr == NULL)
        {
            printf("Memory not allocated\n");
            exit(0);
        }

        ptr->data = n;

        if(head == NULL)
        {
            head = tail = ptr;
            tail->next = head;
        }
        else
        {
            tail->next = ptr;
            tail = ptr;
            tail->next = head;
        }

        scanf("%d",&n);
    }
}

void display()
{
    if(head == NULL)
    {
        printf("CLL not created\n");
        return;
    }

    ptr = head;

    while(ptr->next != head)
    {
        printf("%d -> ",ptr->data);
        ptr = ptr->next;
    }

    printf("%d\n",ptr->data);
}

void search()
{
    int key, pos = 1;

    if(head == NULL)
    {
        printf("CLL not created\n");
        return;
    }

    printf("Enter element to search: ");
    scanf("%d",&key);

    ptr = head;

    while(ptr->next != head)
    {
        if(ptr->data == key)
        {
            printf("Element found at position %d\n",pos);
            return;
        }

        ptr = ptr->next;
        pos++;
    }

    // Check last node
    if(ptr->data == key)
    {
        printf("Element found at position %d\n",pos);
    }
    else
    {
        printf("Element not found\n");
    }
}

void sort()
{
    int temp;

    if(head == NULL)
    {
        printf("CLL not created\n");
        return;
    }

    for(ptr1 = head; ptr1->next != head; ptr1 = ptr1->next)
    {
        for(ptr2 = ptr1->next; ptr2 != head; ptr2 = ptr2->next)
        {
            if(ptr1->data > ptr2->data)
            {
                temp = ptr1->data;
                ptr1->data = ptr2->data;
                ptr2->data = temp;
            }
        }
    }
}
