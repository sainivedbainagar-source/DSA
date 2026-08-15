#include<stdio.h>
#include<string.h>
int main(){
char s[5][15],temp[15];
int i = 0,j=0;
int n = 5;
puts("enter names\n");
for(i = 0; i< n;i++){
    gets(s[i]);
}
puts("names before sort\n");
for(i = 0; i< n;i++){
    puts(s[i]);
}

for( i = 0;i< n-1;i++){
    for( j = 0; j< n-1 - i;j++){
        if(strcmp(s[j],s[j+1])> 0){
            strcpy(temp,s[j]);
            strcpy(s[j],s[j+1]);
            strcpy(s[j+1],temp);
        }
    }
}


puts("after names sorting\n");
puts("names before sort\n");
for(i = 0; i< n;i++){
    puts(s[i]);
}

}
