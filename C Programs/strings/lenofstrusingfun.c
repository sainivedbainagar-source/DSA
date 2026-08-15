#include<stdio.h>
#define m 100
 int strlen(char[]);
 int main()
 {
 char str[m];
 int len;
 printf("eneter a string\n");
 gets(str);
 len = strlen(str);
 printf("length of the string is %d", len);
 return 0;
 }

 int strlen(char str[])
 {
     int i=0 ;
     while(str[i] != '\0'){
        i++;
     }
     return i;
 }


