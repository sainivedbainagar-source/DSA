
#include<stdio.h>
int fact(int x){
int f=1;
for(int i=1;i<=x;i++){
    f=f*i;
}
return f;
}
int main(){
    int n,r;
    printf("enter value of n and r\n");
    scanf("%d %d",&n,&r);

    int ncr=fact(n)/(fact(n-r)*fact(r));
    printf("%d",ncr);
  return 0;
}
