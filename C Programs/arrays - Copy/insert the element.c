#include<stdio.h>
#define m 100
int main(){
int num ,n,i,a[m],pos;
printf("enter array size\n");
scanf("%d",&n);
printf("enter array elements\n");
for(i = 0; i<n;i++)
    scanf("%d",&a[i]);
    printf(" array elements before insert\n");
for(i = 0; i<n;i++)
    printf("%d\t",a[i]);
 printf("eneter num to insert\n");
 scanf("%d",&num);
 printf("eneter pos to insert\n");
 scanf("%d",&pos);
 for(i = n-1; i>=pos;i--)
 a[i+1]=a[i];
 a[pos]= num;
 n = n+1;

 printf("array elements after  insert\n");
 for(i = 0;i<n;i++)
    printf("%d\t",a[i]);
 return 0;
}
