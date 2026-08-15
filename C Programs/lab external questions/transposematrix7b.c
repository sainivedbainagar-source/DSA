#include<stdio.h>
#define m 100
void readmatrix(int r,int c,int a[m][m]);
void printmatrix(int r,int c,int a[m][m]);
void result(int r,int c,int a[m][m],int  res[m][m]);
int main(){
int a[m][m],res[m][m];
int r1,c1;

printf("enter r1 and c1\n");
scanf("%d %d", &r1,&c1);


printf("enetr matrix 1\n");
readmatrix(r1,c1,a);
printmatrix(r1,c1,a);
result(r1,c1,a,res);
printf("addition matrix is \n");
printmatrix( c1,r1,res);

return 0;
}

void readmatrix(int r,int c,int a[m][m]){
    int i = 0 ,j = 0;
for( i = 0 ; i< r ; i++){
    for( j = 0; j <c; j++){
        scanf("%d", &a[i][j]);
    }
}

}
void result(int r , int c,int a[m][m], int res[m][m]){
 int i = 0 ,j = 0;
for( i = 0 ; i< r ; i++){
    for( j = 0; j <c; j++){
        res[i][j] = a[j][i];
    }
}
}
void printmatrix(int r , int c,int a[m][m]){
    int i = 0 ,j = 0;
for( i = 0 ; i< r ; i++){
    for( j = 0; j <c; j++){
        printf("%d", a[i][j]);
    }
    printf("\n");
}
}


