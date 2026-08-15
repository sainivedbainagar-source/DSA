#include<stdio.h>
#define m 100
int main(){
    int max,min,a[m],n,i,max_pos=0,min_pos=0;
    printf("enter array size\n");
    scanf("%d", &n);
    printf("enter elements");
    for(i= 0; i<n;i++  ){
        scanf("%d", &a[i]);
    }

    max = a[0], min = a[0];
    for(i=1;i<n;i++){
        if( min > a[i]){
            min = a[i];
            min_pos = i;
        }
        if (max < a[i]){
            max = a[i];
            max_pos  = i;

        }
    }

    printf("max = %d , max pos = %d\n", max,max_pos );
     printf("min = %d , min pos = %d\n", min,min_pos );
    for(i= 0; i<n;i++  ){
        printf("%d = a[%d] \n", a[i],i);
    }
a[max_pos] = min;
a[min_pos] = max;
for(i= 0; i<n;i++  ){
        printf("%d = a[%d] ", a[i],i);
    }
return 0;


}

