#include<stdio.h>
#define m 100
 void read_array(int[],int);
 void print_array(int[],int);
 void bubble_sort(int[],int);
 int main(){
     int a[m],n;
     printf("enter n value\n");
     scanf("%d", &n);
     printf("enter elemts\n");
     read_array(a,n);
     printf("array elements before sort\n");
     print_array(a,n);
     bubble_sort(a,n);
     printf("array elements after sort\n");
      print_array(a,n);

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
 void bubble_sort(int a[], int n){
 for(int i = 0; i<n-1;i++ ){
    for(int j = 0; j< n-1-i ; j++){
        if( a[j] > a[j+1]){
            int temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
        }
    }
 }
 printf("\n");
 }
