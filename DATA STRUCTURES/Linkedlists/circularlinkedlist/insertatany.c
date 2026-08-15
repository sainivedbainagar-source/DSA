#include<stdio.h>
#include<stdlib.h>
 typedef struct node{
 int data ;
 struct node *next;
 }nd;
 nd *ptr = NULL, *newnode = NULL, *head = NULL, *tail = NULL;
 void create();
 void display();
 void in_any();




 int main(){
 printf("emter elemnets\n");
 create();
 printf("the elements are\n");
 display();
 in_any();
  display();

 return 0;
 }
 void create(){

 int n;
 scanf("%d", &n);
 while( n!= -1){
 newnode = (nd*)malloc(sizeof(nd));
 if(newnode == NULL){
    printf("not posssible\n");
    exit(0);
 }
 newnode->data = n;
 if(head == NULL){
    head = tail =newnode;
    newnode->next = head;
 }
 else{
 tail->next = newnode;
 tail = newnode ;
 tail->next = head;
 }
 printf("press -1 to stop node creation\n");
 scanf("%d", &n);
 }
 }
 void display(){
 if(head == NULL){
    printf("cl not created\n");
    return;
 }
 ptr = head;
 while(ptr->next != head){
    printf("%d->", ptr->data);
    ptr = ptr->next;
 }
 printf("%d", ptr->data);

 }
 void in_any(){
 int n;
 int pos, i =1;
 printf("enter pos\n");
 scanf("%d",&pos);
 printf("\n enter newnode data\n");
 scanf("%d", &n);
 newnode = (nd*)malloc(sizeof(nd));
 if(newnode == NULL){
    printf("not posssible\n");
    exit(0);
 }
 newnode->data = n;
 if(head == NULL){
    tail = head = newnode;
    newnode->next = head;
    return ;
 }
 else{
        if(pos == 1){
            newnode->next = head;
            head = newnode;
            tail->next = newnode ;
        }
        else{
            ptr= head;
            for(int i = 1; i<pos- 1;i++){
                ptr = ptr->next;
                if( ptr == head)
                {
                    printf("not posssible\n");
                    return;
                }
            }
            newnode->next = ptr->next;
            ptr->next = newnode;
            if(ptr == tail){
                tail = newnode;
            }

        }


 }


 }











