\#include<stdio.h>
#include<ctype.h>

int st[100];
int top = -1;

void push(int x){
   st[++top] = x;
}
int  pop(){
   return st[top--];
}
int main(){
 char po[100];
 int i = 0;
 int b , a;
 scanf("%s", po);
 for( i = 0; po[i] != '\0'; i++){
    char ch = po[i];
    if(isdigit(ch))
        push(ch-'0');
        else{
            b = pop();
            a = pop();

            switch(ch){
             case '+' : push(a+b);
             break;
             case '-':
                    push(a - b);
                    break;

                case '*':
                    push(a * b);
                    break;

                case '/':
                    push(a / b);
                    break;
            }
        }

 }

 printf("result = %d", pop());
 return 0;

}

