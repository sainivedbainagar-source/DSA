#include<stdio.h>
void bq(int n);
void bq(int n){
if(n>1)
    bq(n/2);
printf("%d", n%2);
}
int main(){
int n;
printf("enetr n\n");
scanf("%d", &n);
if (n==0){
    printf("0");
    return 0;
}
printf("binary equivalent is\n");
bq(n);

return 0;
}

