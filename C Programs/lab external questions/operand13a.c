#include<stdio.h>
int main(){
    char op;
    int a,b;
    printf("enetr a and b\n");
    scanf("%d %d",&a,&b);
    printf("eneter opetator ");
    scanf(" %c",&op);
    switch(op){
    case '+' :
    printf("add = %d",a+b);
    break;
    case '-' :
    printf("subtract = %d",a-b);
    break;
    case '*' :
    printf("multiply= %d",a*b);
    break;
    case '/' :
        if ( b!= 0){
            printf("divison = %d", a/b);
        }
        else
    printf("not possible");
    break;
        case '%' :
        if ( b!= 0){
            printf("divison = %d", a%b);
        }
        else
    printf("not possible");
    break;
     default :
     printf("not valid operator");
     break;

    }



return 0;
}
