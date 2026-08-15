#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} nd;

nd *front = NULL, *rear = NULL;

void enqueue(int);
void dequeue();
void peek();
void display();

int main()
{
    int ch, x;

    while(1)
    {
        printf("Enter Choice\n");
        printf("1.ENQUEUE\n2.DEQUEUE\n3.PEEK\n4.DISPLAY\n5.EXIT\n");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                printf("Enter element: ");
                scanf("%d",&x);
                enqueue(x);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                exit(0);

            default:
                printf("Invalid Choice\n");
        }
    }
}

void enqueue(int x)
{
    nd *newn = (nd *)malloc(sizeof(nd));

    if(newn == NULL)
    {
        printf("Queue Overflow\n");
        return;
    }

    newn->data = x;
    newn->next = NULL;

    if(front == NULL)
    {
        front = rear = newn;
    }
    else
    {
        rear->next = newn;
        rear = newn;
    }
}

void dequeue()
{
    nd *temp;

    if(front == NULL)
    {
        printf("Queue Underflow\n");
        return;
    }

    temp = front;
    printf("%d is deleted\n", front->data);

    front = front->next;
    free(temp);

    if(front == NULL)
    {
        rear = NULL;
    }
}

void peek()
{
    if(front == NULL)
    {
        printf("Queue is Empty\n");
        return;
    }

    printf("%d\n", front->data);
}

void display()
{
    nd *temp;

    if(front == NULL)
    {
        printf("Queue is Empty\n");
        return;
    }

    temp = front;

    printf("The elements are:\n");

    while(temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }

    printf("\n");
}
