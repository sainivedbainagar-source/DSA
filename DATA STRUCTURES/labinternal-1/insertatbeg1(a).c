#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node* next;
} nd;

nd *head = NULL;

void insert_begin();
void display();

int main(){
    insert_begin();
    display();
    return 0;
}

void insert_begin(){
    int n;

    printf("Enter values (-1 to stop):\n");
    scanf("%d", &n);

    while(n != -1){
        nd *newnode = (nd*)malloc(sizeof(nd));

        if(newnode == NULL){
            printf("Memory allocation failed\n");
            exit(0);
        }

        newnode->data = n;
        newnode->next = head;
        head = newnode;

        scanf("%d", &n);
    }
}

void display(){
    nd *ptr = head;

    if(ptr == NULL){
        printf("List is empty\n");
        return;
    }

    printf("Linked list:\n");
    while(ptr != NULL){
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}
