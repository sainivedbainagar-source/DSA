#include<stdio.h>
int sum(int n);
int main(){
int n;
printf("eneter n\n");
scanf("%d", &n);
printf("%d",sum(n));
return 0;
}
 int sum(int n){
 if (n == 0 )
    return 0;
 else
    return n + sum(n-1);

 }
