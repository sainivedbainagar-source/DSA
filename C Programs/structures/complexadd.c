#include<stdio.h>

typedef struct complex{
int real;
int img;
} c;

c c1,c2,c3;
int main(){
printf("enter c1\n");
scanf("%d %d",&c1.real,&c1.img);
printf("enter c2\n");
scanf("%d %d",&c2.real,&c2.img);
printf("addition is\n");
c3.real = c1.real + c2.img;
c3.img = c1.img + c2.img;
printf("%d +i%d\n",c3.real,c3.img);
printf("Subtraction is\n");
c3.real = c1.real - c2.img;
c3.img = c1.img - c2.img;
printf("%d +i%d\n",c3.real,c3.img);
printf("Multiplication is\n");
c3.real = c1.real*c2.real -c1.img*c2.img;
c3.img = c1.real*c2.img + c2.real*c1.img;
printf("%d +i%d\n",c3.real,c3.img);


return 0 ;
}

