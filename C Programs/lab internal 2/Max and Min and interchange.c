#include<stdio.h>
#define m 100
int main(){
    int max,min,a[m],n,i;
    printf("enter array size\n");
    scanf("%d" , &n);
    for(i= 0; i<n;i++  ){
        scanf("%d", &a[i]);
    }
    for(i= 0; i<n;i++  ){
        printf("%d", &a[i]);
    }

    max = a[0], min = a[0];
    for(i=1;i<n;i++){
        if( min > a[i]){
            min = a[i];
        }
        if (max < a[i]){
            max = a[i];
        }
    }

    printf("max = %d , min = %d", max,min);
    return 0;


}
