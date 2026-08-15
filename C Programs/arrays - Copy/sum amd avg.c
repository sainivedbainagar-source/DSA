#include<stdio.h>
#define m 100
int main(){
int n,a[m],sum=0,avg=0,i;
printf("enter array size\n");
scanf("%d",&n);
printf("enter array elements\n");
for(i = 0; i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        sum =sum +a[i];
    }
    avg = sum/n;
    printf("sum =%d , avg = %d",sum,avg);
    return 0;

}
