#include<stdio.h>
#define m 100
void read_array(int [],int);
void print_array(int [],int);
void bubble_sort(int [],int);
int main(){
int a[m],n;
printf("enter array size\n");
scanf("%d", &n);
printf("enter array elements\n");
read_array(a,n);
printf("array elements before sorting\n");
print_array(a,n);
bubble_sort(a,n);
printf("array elements after sorting\n");
print_array(a,n);
}
void read_array(int a[],int n)
{

    int i;
    for(i=0;i<n;i++)
    scanf("%d", &a[i]);
}
void print_array(int a[],int n)
{
    for(int i=0;i<n;i++)
    printf("%d\t", a[i]);

}
void bubble_sort(int a[], int n)
{
    int i,j,t,swap=0;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++)
        {

            if ( a[j] > a[j+1]){
                t = a[j];
                a[j]= a[j+1];
                a[j+1] = t;
                swap++;
            }
        }
     if( swap == 0)
        break;
    }

}

