#include<stdio.h>
int maze2(int n, int m){
    int rightways = 0;
    int downways = 0;
    if( n==1 && m== 1) return 1;
    if( n==1) {// can't go down
            rigthways += maze2(n,m-1);
    }
      if( m==1)  {
        downways += maze2(n-1,m);

      }
      if( n>1 && m>1){
        rigthways += maze2(n,m-1);
        downways += maze2(n-1,m);

      }

      int total = rigthways + downways;
      return total;
}

}
int main(){
int n;//no of rows
printf("enter np of rows : \n");
scanf("%d", &n);
int m;
printf("enter np of columns : \n");
scanf("%d", &m);
int totalways = maze2(n,m);
printf("%d", totalways);
return 0;
}


