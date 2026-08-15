#include<stdio.h>
int maze(int cr,int cc,int er, int ec){
    int rightways = 0;
    int downways = 0;
    if (cr ==er  && cc ==ec) return 1;
    if(cr == er) {//only rigthway
       rightways += maze(cr,cc+1, er,ec);

    }
    if(cc == ec){// only downway
        downways += maze(cr+1,cc, er,ec);
    }
    if ( cr< er && cc<ec){
        rightways += maze(cr,cc+1, er,ec);
        downways += maze(cr+1,cc, er,ec);
    }

    int total = rightways + downways;
return total;
}
int main(){
int n;//no of rows
printf("enter np of rows : \n");
scanf("%d", &n);
int m;
printf("enter np of columns : \n");
scanf("%d", &m);
int totalways = maze(1,1,n,m);
printf("%d", totalways);
return 0;
}
