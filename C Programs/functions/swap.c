#include<stdio.h>
int main(){
int a,b;
printf("enter a and b\n");
scanf("%d %d",&a,&b);
printf("the value of a is %d \n the value od b is %d\n",a,b);
a= a+b;
b=a-b;
a=a-b;
printf("a =%d b=%d",a,b);
return 0;
}
