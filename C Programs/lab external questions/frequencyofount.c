#include<stdio.h>
#define m 100
int main(){
int a[m],counted[m] = {0},n,count;

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
for (int i = 0 ;i<n;i++){
    if(counted[i] ==0){
        count = 1;

    for (int j = i+1;j<n;j++){
        if(a[i]== a[j]){
            count++;
            counted[j] = 1;
        }

    }
printf("%d\t  %d\n",a[i],count);
}
}


return 0 ;
}
