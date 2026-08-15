#include<stdio.h>
#include<stdlib.h>

#define MAX 5

int st[MAX];
int top = -1;

void push(int);
void pop();
void peek();
void display();

int main()
{
    int ch, x;

    while(1)
    {
        printf("Enter Choice\n");
        printf("1.PUSH\n2.POP\n3.PEEK\n4.DISPLAY\n5.EXIT\n");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                printf("Enter element: ");
                scanf("%d",&x);
                push(x);
                break;

            case 2:
                pop();
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

void push(int x)
{
    if(top == MAX-1)
    {
        printf("Stack Overflow\n");
        return;
    }

    st[++top] = x;
}

void pop()
{
    if(top == -1)
    {
        printf("Stack Underflow\n");
        return;
    }

    printf("%d is popped\n", st[top]);
    top--;
}

void peek()
{
    if(top == -1)
    {
        printf("Stack is Empty\n");
        return;
    }

    printf("%d\n", st[top]);
}

void display()
{
    int i;

    if(top == -1)
    {
        printf("Stack is Empty\n");
        return;
    }

    printf("The elements are:\n");

    for(i = top; i >= 0; i--)
    {
        printf("%d\t", st[i]);
    }

    printf("\n");
}
