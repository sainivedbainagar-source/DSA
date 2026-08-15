#include<stdio.h>
#define m 100
int main(){
char str[m];
int len, i;
printf("eneter a string\n");
gets(str);
printf("enetered   string is %s\n", str);
i = 0, len =0 ;
while(str[i] != '\0')
{
    len++;
    i++;
}
printf("%d is the length of str is %s", len,str);
return 0;


}
