#include<stdio.h>
#define m 100
int main(){
    int a[m];
    int n , i = 0,j=0;
    printf("enter of elements\n");
    scanf("%d",&n);
    printf("no of elemnets\n");
    for( i = 0; i<n ;i++ ){
        scanf("%d", &a[i]);
    }
    for( i = 0 ;i<n-1;i++){
        for(j = 0; j<n-1-i;j++){
            if( a[j] > a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("elements after sorting \n");
   for( i = 0; i<n ; i++ ){
        printf("%d ", a[i]);
    }


return  0 ;
}

