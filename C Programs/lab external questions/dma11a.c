#include<stdio.h>
#include<stdlib.h>
int main(){
    int *a,i,n,max;
    printf("enetr n value\n");
    scanf("%d", &n);
    a = (int *)malloc(n*sizeof(int));
    if( a == NULL){
        printf("memory can,t be asssigned");
        return 0;
    }
    printf("enetr elements\n");
    for(i = 0; i< n;i++){
        scanf("%d", a+i);
    }
    max = *(a+0);
    for( i = 1; i<n;i++)
{
    if ( a[i] > max){
        max = a[i];
    }
}

printf("max is %d",max);
return 0;
}
