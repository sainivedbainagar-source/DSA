#include<stdio.h>
#include<stdlib.h>
 typedef struct node{
 int data ;
 struct node *next;
 }nd;
 nd *ptr = NULL, *newnode = NULL, *head = NULL, *tail = NULL;
 void create();
 void display();
 void in_beg();




 int main(){
 printf("emter elemnets\n");
 create();
 printf("the elements are\n");
 display();
 in_beg();
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
 void in_beg(){
 int n;
 printf("enter newnode data\n");
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
 }
 else{
 newnode->next = head ;
 head = newnode ;
 tail->next = head;
 }


 }









