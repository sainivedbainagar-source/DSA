#include<stdio.h>
#define m 100
int main(){
int a[m],temp[m],n,k;
printf("enter n value\n");
scanf("%d", &n);
printf("Enter array elemnts\n");
for(int i = 0 ; i<n;i++){
    scanf("%d",&a[i]);
}
printf("enter k value\n");
scanf("%d", &k);
k = k%n;
for(int i = 0; i<k;i++){
    temp[i]=a[i];
}
for(int i = k; i < n; i++){
    a[i-k] = a[i];
}

for(int i = 0 ;i<k;i++){
    a[n-k+i] = temp[i] ;
}
printf("left  Rotation\n");
for(int i = 0 ; i<n;i++){
    printf("%d\n", a[i]);
}

return 0;
}

