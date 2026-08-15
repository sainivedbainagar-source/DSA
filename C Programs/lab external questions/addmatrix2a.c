#include<stdio.h>
#define m 100
void readmatrix(int r,int c,int a[m][m]);
void printmatrix(int r,int c,int a[m][m]);
void result(int r,int c,int a[m][m],int b[m][m],int  res[m][m]);
int main(){
int a[m][m],b[m][m],res[m][m];
int r1,c1,r2,c2;

printf("enter r1 and c1\n");
scanf("%d %d", &r1,&c1);
printf("enter r2 and c2\n");
scanf("%d %d", &r2,&c2);

if ( r1 != r2 && c1 != c2){
    printf("addition not posiible\n");
    return 0;
}
printf("enetr matrix 1\n");
readmatrix(r1,c1,a);
printf("enetr matrix 2\n");
readmatrix(r1,c1,b);

result(r1,c1,a,b,res);
printf("addition matrix is \n");
printmatrix( r1,c1,res);

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
void result(int r , int c,int a[m][m],int b[m][m], int res[m][m]){
 int i = 0 ,j = 0;
for( i = 0 ; i< r ; i++){
    for( j = 0; j <c; j++){
        res[i][j] = a[i][j] + b[i][j];
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

