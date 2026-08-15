#include<stdio.h>
#define m 100
int main(){
int a[m],n;
printf("enter n value\n");
scanf("%d", &n);
if(n <= 0 || n > m){
        printf("Invalid n");
        return 0;
    }

printf("enter array elements\n");
for(int i = 0; i<n;i++)
{
 scanf("%d",&a[i]);
}
printf("before reversal\n");
for(int i = 0; i<n;i++)
{
 printf("%d\t",a[i]);
}
printf("After reversal\n");
for(int i = n-1; i>=0;i++)
{
 printf("%d\t",a[i]);
}


return 0;
}
