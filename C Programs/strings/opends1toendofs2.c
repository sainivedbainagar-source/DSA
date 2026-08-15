#include<stdio.h>
#include<string.h>
#define m 100
int main(){
    char s1[m], s2[m];

    puts("eneter s1\n");
    gets(s1);
    puts("eneter s2\n");
    gets(s2);

    int i = strlen(s1);
int     j = 0;

    while(s2[j] != '\0')
    {
        s1[i] = s2[j];
        i++;
        j++;


    }
    s1[i] = '\0';
    puts("string 1\n");
    puts(s1);
    return 0 ;






}

