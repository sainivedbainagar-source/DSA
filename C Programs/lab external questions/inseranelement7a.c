#include<stdio.h>
#define m 100

int main(){
    int a[m];
    int n, pos, element;

    printf("enter n value\n");
    scanf("%d", &n);

    printf("enter elements\n");
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    printf("array before insertion\n");
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }

    printf("\nenter position\n");
    scanf("%d", &pos);

    printf("enter element to insert\n");
    scanf("%d", &element);


    if(pos < 1 || pos > n + 1){
        printf("Invalid position");
        return 0;
    }

    pos = pos - 1;


    for(int i = n; i > pos; i--){
        a[i] = a[i - 1];
    }


    a[pos] = element;
    n++;

    printf("after insertion\n");
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }

    return 0;
}
