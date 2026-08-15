#include<stdio.h>
#define m 100
 void read_array(int[],int);
 void print_array(int[],int);
 int linear_search(int[],int,int);
 int main(){
     int a[m],n,key, pos=-1;
     printf("enter n value\n");
     scanf("%d", &n);
     printf("enter elements\n");
     read_array(a,n);
     printf("array elements are\n");
     print_array(a,n);
     printf("enter key value\n");
     scanf("%d", &key);

   pos =  linear_search(a,n,key);
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
 int linear_search(int a[], int n,int key){
for (int i = 0;i<n;i++){
    if( a[i] == key){
        return i;
    }

}
return -1;
 }
