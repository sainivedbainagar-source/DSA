#include<stdio.h>
#define m 100
int main(){
int n,a[m],b[m],i;
printf("enter array size\n");
scanf("%d",&n);
printf("enter array elements\n");
for(i = 0; i<n;i++)
    scanf("%d",&a[i]);
    printf("array elements are \n");
    for(i =0;i<n;i++)
    printf("%d\t",a[i]);
    for(i = 0; i<n;i++)
    b[i]=a[i];
    printf("array elements are\n");
    for(i =0;i<n;i++)
    printf("%d\t",b[i]);

        return 0;
    }

