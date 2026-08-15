#include<stdio.h>
#define m 100
int main(){
int a[m],max,min,n;
printf("eneter n value\n");
scanf("%d",&n);
printf("enter elemnets\n");
int i = 0;
for( i = 0 ; i<n;i++){
    scanf("%d",&a[i]);
}
max=a[0],min=a[0];
for( i = 1; i<n;i++){
    if(a[i]>max){
        max = a[i];
    }
    if (a[i] < min){
        min = a[i];
    }
}
printf("max = %d , min = %d",max,min);
float average;
 i = 0;
int sum =0;
for (i=0;i<n;i++){
    sum = sum + a[i];
}



average =(float) sum /i;
printf("average is %.2f\n ",average);
return 0;
}







