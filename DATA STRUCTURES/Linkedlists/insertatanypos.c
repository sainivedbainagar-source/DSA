#include<stdio.h>
#include<stdlib.h>
typedef struct node{
 int data;
 struct node* next;

}nd;
nd *ptr=NULL ,*head=NULL, *newnode=NULL;
void create();

void display();
void at_any();

int main(){
 create();
 printf("before insertion\n");
 display();
 at_any();
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
void at_any(){
    int pos, i =1;
    printf("enter pos\n");
    scanf("%d", &pos);
    newnode = (nd*)malloc(sizeof(nd));
    if(newnode==NULL){
        printf("ll doesn't exist\n");
        exit(0);
    }
    else {
            int n;
            printf("enter  value to insert\n");
    scanf("%d", &n);
            newnode->data = n;

        if(head == NULL){
            head = newnode;
            newnode->next = NULL;
        }
  else{
        ptr = head;
        if(pos == 1){
         newnode->next = head;
         head = newnode;
        }

            while ( i< pos-1 && ptr != NULL){
                ptr = ptr ->next;
                i++;
            }
            if(ptr == NULL){
                printf("invalid position\n");
                return;
            }
            newnode->next = ptr->next;
            ptr->next= newnode;
        }


  }
}



