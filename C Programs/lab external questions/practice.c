#include<stdio.h>
#define m 100
int main(){
int a[m],n,key,pos = -1;
printf("enter n value\n");
scanf("%d", &n);

if(n <= 0 || n > m){
        printf("Invalid n");
        return 0;
    }
printf("enter key value\n");
scanf("%d", &key);

printf("enter array elements\n");
for(int i = 0; i<n;i++)
{
 scanf("%d",&a[i]);
}
for(int i = 0; i< n ;i++){
    if(key == a[i]){
        pos = i;
        break;
    }

}

printf("Element found at %d",pos);




return 0 ;
}
