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
 printf("%d\n",a[i]);
}

for(int i = 0; i<n/2; i++){
 int temp ;
 temp = a[i];
  a[i] = a[n-1-i];
  a[n-1-i] = temp;

}
printf("After reversal\n");
for(int i = 0; i<n;i++)
{
 printf("%d\n",a[i]);
}
return 0;
}

