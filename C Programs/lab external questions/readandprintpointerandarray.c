#include<stdio.h>
#define m 100
int main(){
int a[m],n;
int *p;
p = a;
printf("enter n\n");
scanf("%d", &n);
for(int i = 0 ; i<n;i++){
    scanf("%d", p+i);
}
for(int i = 0 ; i<n;i++){
  printf("%d", *(p+i));
}
return 0 ;
}
