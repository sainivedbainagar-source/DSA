#include<stdio.h>
int main(){
int a[4];
int max=-1;
printf("enter digits\n");
for(int i = 0; i<4;i++){
    scanf("%d", &a[i]);
}
for(int i = 0; i<4;i++){
    for(int j = 0;j<4;j++){
        for(int k = 0;k<4;k++){
            for(int l = 0; l<4;l++){
                if( i != j && i!= k &&  i != l && j != l && j != k && k != l){
                    int hour = a[i]*10 + a[j];
                    int min = a[k]*10 + a[l];

            if ( hour < 24 && min < 60){
                int totalminutes = hour*60 + min;


            if( totalminutes > max){
                    max = totalminutes ;

            }
            }
                }
            }
        }
    }
}
if (max == -1){
    printf("-1\n");
}else{
int hour = max/60;
int min = max%60;
printf("%02d:%02d\n",hour,min);
}

return 0;
}
