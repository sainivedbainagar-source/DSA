
#include<stdio.h>
//int fact(int x){
//int f=1;
//for(int i=2;i<=x;i++){
//    f=f*i;
//}
//return f;
//}
//int comb(int n,int r){
//int  ncr=  fact(n)/(fact(r)*fact(n-r));
// return ncr;
//}
int main(){
    int n;
    printf("enter value of n \n");

    scanf("%d", &n);
     for(int i = 0;i<=n;i++){
            int first= 1;

            for(int j =0;j<=i;j++){
                    printf("%d ",first);
                    first = first*(i-j)/(j+1); //icj+1

            }
            printf("\n");
     }
  return 0;
}

