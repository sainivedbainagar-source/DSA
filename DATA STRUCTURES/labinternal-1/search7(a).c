
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
 int data;
 struct node* next;

}nd;
nd *ptr=NULL ,*head=NULL, *newnode=NULL;
void create();
void display();
void search();
int main(){
 create();

 display();
 search();

return 0;
}
void create(){
int n;
printf("enter n value\n");
scanf("%d", &n);
while( n != -1){
    newnode = (nd*)malloc(sizeof(nd));
    if(newnode==NULL){
        printf("ll doesn,t exist\n");
        exit(0);
    }
    else {
            newnode->data = n;
            newnode->next = NULL;
        if(head == NULL){
            head = newnode;
        }
        else{
             ptr = head;
             while(ptr -> next != NULL){
                ptr = ptr->next;
             }
             ptr->next = newnode;

        }

    }
    printf("enter -1 to stop entering data\n");
    scanf("%d",&n);

}

}
void display(){

 if( head == NULL){
    printf("ll doesn,t exist\n");
 }
 else
 {
     ptr = head;
     while (ptr != NULL){
        printf("%d\t",ptr->data);
        ptr = ptr->next;
     }

 }

}
void search(){
    int key, pos = 1, found = 0;

    printf("enter key value\n");
    scanf("%d", &key);

    if(head == NULL){
        printf("list is empty\n");
        return;
    }

    ptr = head;

    while(ptr != NULL){
        if(key == ptr->data){
            printf("element found at position %d\n", pos);
            found = 1;

        }
        ptr = ptr->next;
        pos++;
    }

    if(found == 0){
        printf("element not found\n");
    }
}
