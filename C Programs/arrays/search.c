#include<stdio.h>
#define m 100
int main(){
int n,a[m],pos,key,i;
printf("enter array size\n");
scanf("%d",&n);
printf("enter array elements\n");
for(i = 0; i<n;i++)
    scanf("%d",&a[i]);
    printf("enter key number\n");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if (key == a[i]){
            pos = i;
            break;
        }

    }
    if(pos !=-1) printf("pos = %d",pos);
    else
        printf("pos not found");
    return 0;
    }

