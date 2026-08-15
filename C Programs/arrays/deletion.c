#include<stdio.h>
#define m 100
int main(){
int  n,i,a[m],pos;
printf("enter array size\n");
scanf("%d",&n);
printf("enter array elements\n");
for(i = 0; i<n;i++)
    scanf("%d",&a[i]);
    printf(" array elements before delete\n");
for(i = 0; i<n;i++)
    printf("%d\t",a[i]);
 printf("eneter pos to delete\n");
scanf("%d",&pos);
 for(i = pos;i<n-1;i++)
    a[i]=a[i-1];
 n=n-1;
 printf("array elements arter deletion\n");

 for(i =0;i<n;i++)
    printf("%d\t",a[i]);
 return 0;
}

