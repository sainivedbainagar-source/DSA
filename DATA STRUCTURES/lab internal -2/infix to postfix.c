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
int pre(char x){
  if(x == '^'){
    return 3;
  }
    else if(x == '*'  || x == '/'){
    return 2;
  }
     else if (x == '+' || x == '-')
        return 1;
    else
        return 0;

}
int main(){
 char in[100],po[100];
 printf("enter infix\n");
   scanf("%s", in);
   int i = 0 , j= 0;
   for( i  =0 ; in[i] != '\0'; i++){
        char ch = in[i];
     if(isalnum(ch))
       po[j++] = ch;
       else if( ch == '('){
            push(ch);
       }
       else if( ch == ')'){
        while(st[top] != '('){
            po[j++] = pop();
        }
        pop();
       }
       else{
        while( top != -1 && pre(st[top]) >= pre(ch)){
            po[j++] = pop();
        }
        push(ch);
       }

   }
   while( top != -1){
      po[j++] = pop();

   }
   po[j] = '\0';
   printf("POst exp : %s", po);
   return 0;
}

