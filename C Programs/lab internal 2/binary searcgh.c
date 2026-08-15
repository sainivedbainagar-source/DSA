#include<stdio.h>
#define m 100
 void read_array(int[],int);
 void print_array(int[],int);
 int b_search(int[],int,int);
 int main(){
     int a[m],n,key, pos;
     printf("enter n value\n");
     scanf("%d", &n);
     printf("enter elements\n");
     read_array(a,n);
     printf("array elements are\n");
     print_array(a,n);
     printf("enter key value\n");
     scanf("%d", &key);

   pos =  b_search(a,n,key);
     if(pos == -1)
        printf("element not found\n");
     else
        printf("element found at %d\n",pos +1);
 return 0;
 }
 void read_array(int a[],int n){
 for(int i = 0; i < n;i++){
    scanf("%d", &a[i]);
 }
 }
 void print_array(int a[],int n){
 for(int i = 0; i<n ;i++){
    printf("%d\t", a[i]);
 }
 }
 int b_search(int a[], int n,int key){

    int low = 0 ;
    int high = n-1;
int    mid ;
    while(low <= high){
            mid = (low + high)/2;
        if (a[mid] = key)
            return mid;
        else if (key < a[mid])
         high = mid - 1;
        else
            low = mid+1;

    }
        return -1;

 }

