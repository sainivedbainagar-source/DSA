#include<stdio.h>
#include<stdlib.h>

#define MAX 5

int q[MAX];
int front = -1, rear = -1;

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
    if(rear == MAX - 1)
    {
        printf("Queue Overflow\n");
        return;
    }

    if(front == -1)
        front = 0;

    q[++rear] = x;
}

void dequeue()
{
    if(front == -1 || front > rear)
    {
        printf("Queue Underflow\n");
        return;
    }

    printf("%d is deleted\n", q[front]);
    front++;

    if(front > rear)
    {
        front = rear = -1;
    }
}

void peek()
{
    if(front == -1)
    {
        printf("Queue is Empty\n");
        return;
    }

    printf("%d\n", q[front]);
}

void display()
{
    int i;

    if(front == -1)
    {
        printf("Queue is Empty\n");
        return;
    }

    printf("Queue Elements are:\n");

    for(i = front; i <= rear; i++)
    {
        printf("%d\t", q[i]);
    }

    printf("\n");
}
