#include<stdio.h>
#include<stdlib.h>
typedef struct node{
 int data;
 struct node* next;

}nd;
nd *ptr=NULL ,*head=NULL, *newnode=NULL;
void create();

void display();
void in_beg();

int main(){
 create();
 printf("before insertion\n");
 display();
 in_beg();
 printf("After insertion\n");
 display();
return 0;
}
void create(){
int n;
printf("enter n value\n");
scanf("%d", &n);
while( n != -1){
    newnode = (nd*)malloc(sizeof(nd));
    if(newnode==NULL){
        printf("ll doesn't exist\n");
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
void in_beg(){

    newnode = (nd*)malloc(sizeof(nd));
    if(newnode==NULL){
        printf("ll doesn,t exist\n");
        exit(0);
    }
    else {
            int n;
            printf("enter n value\n");
    scanf("%d", &n);
            newnode->data = n;
            newnode->next = NULL;
        if(head == NULL){
            head = newnode;
        }
  else{
    ptr =  head;
    newnode->next = ptr;
    head = newnode;

  }
}
}

