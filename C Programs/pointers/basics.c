#include<stdio.h>
int main(){
int a=4,b=5;
int *p = &a ,*q = &b;
printf("%p\n", p);
printf("%p\n", q);
printf("%p", p-q);
return 0 ;
}
