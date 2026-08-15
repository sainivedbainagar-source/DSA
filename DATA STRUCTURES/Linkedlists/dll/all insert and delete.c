#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *prev;
    struct node *next;
}nd;

nd *head=NULL,*tail=NULL,*ptr=NULL,*newnode=NULL;

void create();
void display();
void in_start();
void in_end();
void in_any();
void del_start();
void del_end();
void del_any();

int main()
{
    int ch;

    while(1)
    {
        printf("\n1.Create");
        printf("\n2.Display");
        printf("\n3.Insert at Beginning");
        printf("\n4.Insert at End");
        printf("\n5.Insert at Any Position");
        printf("\n6.Delete at Beginning");
        printf("\n7.Delete at End");
        printf("\n8.Delete at Any Position");
        printf("\n9.Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                create();
                break;

            case 2:
                display();
                break;

            case 3:
                in_start();
                break;

            case 4:
                in_end();
                break;

            case 5:
                in_any();
                break;

            case 6:
                del_start();
                break;

            case 7:
                del_end();
                break;

            case 8:
                del_any();
                break;

            case 9:
                exit(0);

            default:
                printf("Invalid Choice\n");
        }
    }

    return 0;
}

void create()
{
    int n;

    printf("Enter elements (-1 to stop):\n");
    scanf("%d",&n);

    while(n!=-1)
    {
        newnode=(nd*)malloc(sizeof(nd));

        if(newnode==NULL)
        {
            printf("Memory Allocation Failed\n");
            exit(0);
        }

        newnode->data=n;
        newnode->next=NULL;
        newnode->prev=NULL;

        if(head==NULL)
        {
            head=tail=newnode;
        }
        else
        {
            tail->next=newnode;
            newnode->prev=tail;
            tail=newnode;
        }

        scanf("%d",&n);
    }
}

void display()
{
    if(head==NULL)
    {
        printf("DLL not created\n");
        return;
    }

    ptr=head;

    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }

    printf("\n");
}

void in_start()
{
    int n;

    printf("Enter data: ");
    scanf("%d",&n);

    newnode=(nd*)malloc(sizeof(nd));

    newnode->data=n;
    newnode->prev=NULL;

    if(head==NULL)
    {
        head=tail=newnode;
        newnode->next=NULL;
    }
    else
    {
        newnode->next=head;
        head->prev=newnode;
        head=newnode;
    }
}

void in_end()
{
    int n;

    printf("Enter data: ");
    scanf("%d",&n);

    newnode=(nd*)malloc(sizeof(nd));

    newnode->data=n;
    newnode->next=NULL;

    if(head==NULL)
    {
        head=tail=newnode;
        newnode->prev=NULL;
    }
    else
    {
        newnode->prev=tail;
        tail->next=newnode;
        tail=newnode;
    }
}

void in_any()
{
    int pos,n;

    printf("Enter Position: ");
    scanf("%d",&pos);

    printf("Enter Data: ");
    scanf("%d",&n);

    newnode=(nd*)malloc(sizeof(nd));

    newnode->data=n;

    if(head==NULL)
    {
        head=tail=newnode;
        newnode->next=NULL;
        newnode->prev=NULL;
        return;
    }

    if(pos==1)
    {
        newnode->prev=NULL;
        newnode->next=head;
        head->prev=newnode;
        head=newnode;
        return;
    }

    ptr=head;

    for(int i=1;i<pos-1;i++)
    {
        ptr=ptr->next;

        if(ptr==NULL)
        {
            printf("Position Not Possible\n");
            return;
        }
    }

    if(ptr==tail)
    {
        newnode->next=NULL;
        newnode->prev=tail;
        tail->next=newnode;
        tail=newnode;
    }
    else
    {
        newnode->next=ptr->next;
        newnode->prev=ptr;
        ptr->next->prev=newnode;
        ptr->next=newnode;
    }
}

void del_start()
{
    if(head==NULL)
    {
        printf("DLL not created\n");
        return;
    }

    if(head==tail)
    {
        free(head);
        head=tail=NULL;
        return;
    }

    ptr=head;
    head=head->next;
    head->prev=NULL;
    free(ptr);
}

void del_end()
{
    if(head==NULL)
    {
        printf("DLL not created\n");
        return;
    }

    if(head==tail)
    {
        free(head);
        head=tail=NULL;
        return;
    }

    ptr=tail;
    tail=tail->prev;
    tail->next=NULL;
    free(ptr);
}

void del_any()
{
    int pos;

    printf("Enter Position: ");
    scanf("%d",&pos);

    if(head==NULL)
    {
        printf("DLL not created\n");
        return;
    }

    if(pos==1)
    {
        del_start();
        return;
    }

    ptr=head;

    for(int i=1;i<pos;i++)
    {
        ptr=ptr->next;

        if(ptr==NULL)
        {
            printf("Position Not Possible\n");
            return;
        }
    }

    if(ptr==tail)
    {
        del_end();
    }
    else
    {
        ptr->prev->next=ptr->next;
        ptr->next->prev=ptr->prev;
        free(ptr);
    }
}
