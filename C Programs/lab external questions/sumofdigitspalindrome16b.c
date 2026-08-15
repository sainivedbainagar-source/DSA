#include<stdio.h>
int main(){
int sum=0,n,n1,m,rev = 0,digits;
printf("enter n value\n");
scanf("%d", &n);
n1 = n;
m = n;
while(n>0){
   sum = sum + n%10;
   n = n/10;
}

    printf("sum 0f digits %d\n",sum);
    while(n1 >0){
        digits = n1%10;
        rev = rev*10 +digits;
        n1 = n1/10;
    }
    if (m==rev)
        printf("%d Palindrome number\n",rev);
    else
        printf("%d not a palindrome number\n",rev);


return 0;
}
