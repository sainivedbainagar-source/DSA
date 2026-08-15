#include<stdio.h>
void decreasing(int n){
  if(n==0) return 1;
  printf("%d\n", n);
  decreasing(n-1);
  return ;

}

int main(){
int n;
printf("enter a number : ");
scanf("%d", &n);
decreasing(n);
return 0;
}
