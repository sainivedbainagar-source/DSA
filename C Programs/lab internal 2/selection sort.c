#include<stdio.h>
#define m 100
 void read_array(int[],int);
 void print_array(int[],int);
 void select_sort(int[],int);
 int main(){
     int a[m],n;
     printf("enter n value\n");
     scanf("%d", &n);
     printf("enter elemts\n");
     read_array(a,n);
     printf("array elements before sort\n");
     print_array(a,n);
     select_sort(a,n);
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
 void select_sort(int a[], int n){
     int i , j , temp , mindx;
 for(int i = 0; i< n-1;i++ ){
         mindx = i ;
    for(int j=i+1; j< n;j++){

            if( a[j] < a[mindx]){
                mindx = j;
        }
    }
    if (mindx != i){
        temp = a[i];
        a[i] = a[mindx];
        a[mindx] = temp;
    }
 }
 }


