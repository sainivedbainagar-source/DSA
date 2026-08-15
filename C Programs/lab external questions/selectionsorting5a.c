
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
       int mindx = i;
        for(j = i+1; j<n;j++){
            if( a[j] < a[mindx]){
               int mindx =  j;
             }
        }
        if (mindx != i){
            int temp = a[i];
            a[i] = a[mindx];
            a[mindx] = temp;

        }
    }

    printf("elements after sorting \n");
   for( i = 0; i<n ; i++ ){
        printf("%d ", a[i]);
    }


return  0 ;
}

