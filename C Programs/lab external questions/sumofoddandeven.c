#include<stdio.h>
#define m 100
int main(){
int a[m],n,sumodd=0,sumeven=0;
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
for(int i  = 0; i<n; i++){
    if (a[i] % 2 == 0){
        sumeven += a[i];
    }
    else
        sumodd += a[i];
}
printf("Sumofeven = %d\n",sumeven);
printf("Sumofodd = %d\n",sumodd);
return 0;
}
