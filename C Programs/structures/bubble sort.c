#include<stdio.h>
#define m 100

int main(){
    int a[m], n,key,pos=-1;
    printf("enter n value\n");
    scanf("%d", &n);

    if(n <= 0 || n > m){
        printf("Invalid n");
        return 0;
    }
    int mid, low = 0 , high = n-1;

    printf("enter array elements\n");
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    printf("enter key\n");
    scanf("%d",&key);
    for(int i = 0 ; i<n;i++){
        mid = (a[low] + a[high])/2;
        if(a[mid] == key)
        pos  = mid;
        else if ( a[mid] > key)
            a[high] = a[mid] - 1;
        else {
            a[low] = a[low] + 1;
        }
    }
if(pos == -1){
    printf("element not found\n");
}
else
    printf("element found at %d\n", pos);
return 0;
}
