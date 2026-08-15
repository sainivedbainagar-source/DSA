#include<stdio.h>
#include<string.h>
int main(){
    char s1[100],s2[100],s3[210];
    int i= 0,j= 0;
    printf("eneter main string\n");
    gets(s1);
    printf("eneter 2nd string\n");
    gets(s2);


    while ( s1[i] != '\0'){
        s3[i] = s1[i];
        i++;
    }
  s3[i] = ' ';
  i++;

    while( s2[j] != '\0'){

        s3[i] =s2[j];
        i++;
        j++;
    }
    s3[i] = '\0';
    puts(s1);
    puts(s2);
    puts(s3);


return 0;
}

