#include<stdio.h>
#include<string.h>
#define m 100
int main(){
    char s1[m], s2[m];
    int i = 0 ,j = 0;
    puts("eneter s1\n");
    gets(s1);
    puts("eneter s2\n");
    gets(s2);

    int l1 = strlen(s1);
    j = l1 - 1;

    while(s1[i] != '\0')
    {
        s2[j] = s2[i];
        i++;
        j--;


    }
    puts("string reverse\n");
    puts(s2);
    retur
    n 0;





}

