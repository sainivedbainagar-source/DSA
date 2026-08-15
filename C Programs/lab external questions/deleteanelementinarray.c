#include<stdio.h>
#define m 100
int main(){
    int a[100];
    int pos;
    int n;
    printf("enter n value\n");
    scanf("%d",&n);
    for(int i = 0;i<n;i++){
        scanf("%d", &a[i]);
    }
    for(int i = 0;i<n;i++){
        printf("%d", a[i]);
    }
    printf("enter position\n");
    scanf("%d",&pos);
    pos = pos -1;
    for(int i = n-1; i >=pos;i-- ){
        a[i-1] = a[i];
    }
    n--;
    printf("after sorting\n");
    for(int i = 0;i<n;i++){
        printf("%d", a[i]);
    }

return 0;
}
