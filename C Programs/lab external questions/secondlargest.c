#include<stdio.h>
#include<limits.h>
#define m 100
int main(){
int a[m],max,n,max2;
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
max = max2 = INT_MIN;
for(int i = 0; i<n;i++){

    if( a[i] > max){
            max2 = max;
        max = a[i];
    }
    else if ( a[i] > max2 && a[i] != max){
        max2 = a[i];
    }
}


printf("Max2 = %d\n", max2);

return 0;
}

