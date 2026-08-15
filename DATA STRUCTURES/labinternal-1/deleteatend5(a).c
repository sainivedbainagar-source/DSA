
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
 int data;
 struct node* next;
}nd;
nd *newnode=NULL,*ptr=NULL,*head=NULL;
void create();
void display();
void del_end();
int main(){
  create();
  printf("before deletion\n");
display();
del_end();
  printf("after deletion\n");
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
if( head == NULL){
    printf("l,l doesn,t exist\n");
}
else
{
    ptr = head;
    while( ptr  != NULL){
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }


}


}
void del_end(){
  if(head==NULL){
    printf("lineked list not exist\n");
    exit(0);
  }
 else{

   if ( head->next == NULL){
    free(head);
    head = NULL;
    return;
   }
   nd* ptr1 = NULL;
   ptr = head ;
   while(ptr->next != NULL){
    ptr1 = ptr;
    ptr = ptr ->next;
   }
   ptr1->next = NULL;
   free(ptr);

 }
}




