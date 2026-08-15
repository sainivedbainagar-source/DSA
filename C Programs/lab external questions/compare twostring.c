#include<stdio.h>
#include<string.h>
int main(){
    char s1[100],s2[100];
    int i= 0,j=0;
    printf("enter 1st string\n");
    gets(s1);
    printf("enter 2nd string\n");
    gets(s2);


    while ( s1[i] != '\0' && s2[i] != '\0'){
       if (s1[i] != s2[i]){
        printf("strings are not equal\n");
        return 0;
       }
        i++;
    }
    if(s1[i]== '\0' && s2[i] == '\0')
        printf("strings are equal\n");
    else
  printf("strings are not equal\n");

return 0;
}


