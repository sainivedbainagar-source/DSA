#include<stdio.h>
int fib(int n);
int main(){
int n;
printf("eneter n\n");
scanf("%d", &n);
if ( n < 0 )
printf("invalid\n");
 else
printf("%d",fib(n));
return 0;
}
 int fib(int n){
 if (n == 0)
    return 0;
    if ( n == 1)
        return 1;
 else
    return fib(n-1) +fib(n-2);

 }
