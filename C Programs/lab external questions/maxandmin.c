#include<stdio.h>
#define m 100
int main(){
int a[m],max,min,n;
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
max = min = a[0];
for(int i = 1; i<n;i++){
    if( a[i] < min){
        min = a[i];
    }
    if( a[i] > max){
        max = a[i];
    }
}
    printf("max = %d, min = %d",max,min);

return 0;
}
