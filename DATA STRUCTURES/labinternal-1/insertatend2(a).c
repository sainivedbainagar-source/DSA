#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node* next;
}nd;
nd *ptr =NULL,*head = NULL,*newnode=NULL;
void create();
void display();
void at_end();
int main(){
  create();
  printf("before insertion\n");
display();
at_end();
  printf("after insertion\n");
  display();

return 0;
}
void create(){
    int n;
    printf("Enter n value\n");
    scanf("%d", &n);

    while( n != -1){
            newnode = (nd*)malloc(sizeof(nd));

        if(newnode == NULL){
                printf("ll doesn,t exist\n");

       exit(0);
        }else{
            newnode->data = n;
            newnode->next = NULL;
            if(head == NULL){
                head = newnode;

            }else {
               ptr = head ;

               while(ptr->next != NULL){
                ptr = ptr->next;

               }
               ptr->next = newnode;

            }


        }
        printf( "Enter -1 to stop creating node\n");
        scanf("%d", &n);
    }

}
void display(){
if(head ==NULL){
    printf("ll not exist\n");
    return;
}else{
 ptr = head;
 while(ptr != NULL){
    printf("%d\n",ptr->data);
    ptr = ptr->next;
 }
  }
    }
    void at_end(){

    newnode = (nd*)malloc(sizeof(nd));

    if(newnode == NULL){
        printf("not possible\n");
        exit(0);
    }
else{
    int n;
    printf("enter value\n");
    scanf("%d",&n);

    newnode->data = n;
    newnode->next = NULL;

    if(head == NULL){
        head = newnode;
    }
    else{
        ptr = head;

        while(ptr->next != NULL){
            ptr = ptr->next;
        }

        ptr->next = newnode;
    }
}
    }
