#include<stdio.h>
int main(){
   int a =5;
   int* x= &a;
   int** y = &x;//int** -> int* ka adress store karta hai
   printf("%p\n",&x);//%p gives address o//%p gives address of a
   printf("%p\n",y);

return 0;
}
