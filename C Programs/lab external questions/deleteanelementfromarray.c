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
    if(pos < 1 || pos > n) {
        printf("Invalid position");
        return 0;
    }

    pos = pos -1;
    for(int i = pos; i < n-1;i++ ){
        a[i] = a[i+1];
    }
    n--;
    printf("after sorting\n");
    for(int i = 0;i<n;i++){
        printf("%d\n", a[i]);
    }

return 0;
}
