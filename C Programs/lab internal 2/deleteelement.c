#include<stdio.h>
#define m 100
int main(){
int n, pos,a[m],i;
printf("enter array size\n");
    scanf("%d", &n);
    printf("enter elements");
    for(i= 0; i<n;i++  ){
        scanf("%d", &a[i]);
    }
    for(i= 0; i<n;i++  ){
        printf("%d ", a[i]);
    }

    printf("enter position\n");
    scanf("%d",&pos);
pos = pos - 1;
if (pos < 0 || pos >= n )
    printf("invalid operation\n");
    else{
    for ( i = pos;i <n-1;i++){
        a[i] = a[i+1];
    }
    n--;
    }
    for(i= 0; i<n;i++  ){
        printf("%d ", a[i]);
    }
    return 0;
}
