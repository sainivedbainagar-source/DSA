#include<stdio.h>
void preinPost(int n){
    if (n==0) return ;
   printf("Pre %d\n", n);
   preinPost(n-1);
   printf("In %d\n", n);
   preinPost(n-1);
   printf("post %d\n", n);
   return ;
}

int main(){
int n;
printf("Enter a number : ");
scanf("%d", &n);
preinPost(n);
return 0;
}
