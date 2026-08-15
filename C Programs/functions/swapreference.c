#include<stdio.h>
void swap(int* x,int* y){
int temp = *x;
*x= *y;
*y= temp;
return ;
}
int main(){
int a=2,b=9;

swap(&a,&b);

printf("the value of a is %d \n the value od b is %d\n",a,b);

return 0;
}

