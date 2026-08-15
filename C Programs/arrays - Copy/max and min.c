#include<stdio.h>
#define m 100
int main(){
int n,a[m],max,min,maxpos=0,minpos=0,i;
printf("enter array size\n");
scanf("%d",&n);
printf("enter array elements\n");
for(i = 0; i<n;i++)
    scanf("%d",&a[i]);
    max = min = a[0];
    for( i = 1;i<n;i++){
        if(max < a[i] ){
           max = a[i];
           maxpos = i;
        }

        if(min > a[i] ){
           min= a[i];
           minpos = i;
        }
    }
        printf("max = %d, maxpos = %d", max,maxpos);
        printf("min = %d, minpos = %d", min,minpos);
        return 0;
    }
