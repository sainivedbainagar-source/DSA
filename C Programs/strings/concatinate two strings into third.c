#include<stdio.h>
#include<string.h>
#define m 100
int main(){
    char s1[m], s2[m],s3[m];

    puts("eneter s1\n");
    gets(s1);
    puts("eneter s2\n");
    gets(s2);

    int i = 0;
    int j =0;


    while(s1[j] != '\0')
    {
        s3[j] = s1[j];
        j++;



    }
    s3[j] = ' ';
    j++;
    while(s2[i] != '\0')
    {
        s3[j] = s2[i];
        i++;
        j++;


    }
s3[j] = '\0';

    puts(s1);
    puts(s2);
    puts(s3);
    return 0 ;






}


