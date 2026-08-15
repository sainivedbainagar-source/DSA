#include<stdio.h>
#include<stdlib.h>
typedef struct node{
int data;
struct node* next;
}nd;
nd *top = NULL;
void push(int);
void pop();
void peek();
void display();
int main(){
int ch,x;
while(1){
printf("enter choice\n");
printf("1.Push\n2.POP\n3.PEEK\n4.DISPLAY\n5.EXIT\n");
scanf("%d",&ch);
 switch(ch){
 case 1 :
       printf("enter int to enter\n ");
       scanf("%d",&x);
       push(x);
       break;
    case 2 :
       pop();
       break;
        case 3 :
       peek();
       break;
        case 4 :
       display();
       break;
        case 5 :
            exit(0);

}
}
}
  void push(int x){
      nd *newn = (nd*)malloc(sizeof(nd));
      if(newn == NULL)
    {
        printf("Stack Overflow\n");
        return;
    }
    newn->data = x;
    newn->next = top;
    top = newn;

  }
  void pop(){
  nd *temp ;
  if( top == NULL){
    printf("stack underflow\n");
    return ;
  }
  temp = top;
  printf("%d is popped",top->data);
  top = top->next;;
  free(temp);
  }
  void peek(){
      if( top == NULL){
    printf("stack is empty\n");
    return ;
  }
  printf("%d",top->data);
  }
  void display(){
  if( top == NULL){
    printf("stack is empty\n");
    return ;
  }
  nd *temp = top;
  printf("The elements are\n");
  for(temp != NULL;){
    printf("%d\t\n",temp->data);
    temp = temp->next;
  }
  }
