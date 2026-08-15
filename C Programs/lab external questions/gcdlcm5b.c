#include<stdio.h>
int lcm(int a,int b,int max);
int gcd( int a, int b);
int main(){
int a,b,max;
printf("eneter a and b\n");
scanf("%d %d", &a,&b);
if (a > b)
    max = a;
else
    max = b;
printf("LCM of %d and %d is %d\n",a,b,lcm(a,b,max));
printf("GCD of %d and %d is %d",a,b,gcd(a,b));

return 0;
}
 int lcm(int a,int b,int max){
 if (  max % a == 0 && max %b ==0 )
 return max;
else
    return lcm(a,b,max+1);
 }
int gcd( int a,int b){
if (b==0){
    return a;
}
    else
        return gcd(b,a%b);
}

