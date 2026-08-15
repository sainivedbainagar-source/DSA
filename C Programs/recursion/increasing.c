#include<stdio.h>
void increasing(int x,int n){
  if(x>n) return n;
  printf("%d\n", x);
  increasing(x+1,n);
  return ;

}

int main(){
int n;
printf("enter a number : ");
scanf("%d", &n);
increasing(1,n);
return 0;
}

