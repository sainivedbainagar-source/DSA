#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node* next;
}nd;
nd *ptr =NULL,*head = NULL,*newnode=NULL;
void create();
void display();
void at_any();
int main(){
  create();
  printf("before insertion\n");
display();
at_any();
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
    void at_any(){
        int pos,i = 1,n;
        printf("enter value of n\n");
        scanf("%d", &n);
    newnode = (nd*)malloc(sizeof(nd));
    if(newnode == NULL){
        printf("not possible\n");
        return ;
    }
    else {
            newnode->data = n;
        printf("enter position\n");
    scanf("%d",&pos);
    if(pos == 1){
            newnode->next = head;
            head = newnode;

    }
    else {
        ptr = head;
        while( i < pos-1 && ptr != NULL){
            ptr = ptr->next;
            i++;
        }
        if( ptr == NULL){
            printf("not possible\n");
            return ;
        }
       newnode->next = ptr->next;
        ptr->next = newnode;
    }

}
    }

