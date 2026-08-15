#include<stdio.h>
int main(){
int a,b,c,*p , *q,*r;
p = &a, q= &b,r= &c;
printf("enetr a b c\n");
scanf("%d %d %d", &a,&b,&c);
if( *p > *q && *p> *r)
    printf("%d is greatest", *p);
if(*q > *r)
    printf("%d is greatest", *q);
else
    printf("%d is grestest " , *r);

    return 0;

}
