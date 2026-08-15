
#include<stdio.h>
#include<ctype.h>

char st[100];
int top = -1;

void push(char x)
{
    st[++top] = x;
}
char pop(){
     return st[top--];
}

int main(){
 char in[100];
 printf("enter infix\n");
   scanf("%s", in);
   int i = 0 ,flag = 1;
   for( i  =0 ; in[i] != '\0'; i++){
        char ch = in[i];
     if( ch == '(' || ch == '[' || ch == '{')
        push(ch);
     else if(ch == ')' || ch == ']' || ch == '}'){
            if( top == -1){
                flag = 0;
                break;
            }
            char x = pop();
            if((ch ==')' && x!= '(') || (ch == ']' && x != '[') ||
               (ch == '}' && x != '{')){
               flag = 0;
               break;
               }

     }
   }
  if( top != -1){
    flag = 0;
  }
  if( flag )
    printf("balanced ");
    else
    printf("not balanced\n");
   return 0;
}

