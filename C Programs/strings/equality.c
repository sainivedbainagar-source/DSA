#include<stdio.h>
#include<string.h>
#define m 100
int main(){
    char s1[m], s2[m];
    int i = 0 ;
    puts("eneter s1\n");
    gets(s1);
    puts("eneter s2\n");
    gets(s2);
    int l1 = strlen(s1);
    int l2 = strlen(s2);
    if ( l1 != l2)
        printf("strings are not equal\n");
    else {
        while( s1[i] != '\0')
        {
      if (s1[i] == s2[i])
        i++;
      else break;

        }
        if (i != l1)
            puts("strings are not same\n");
        else
            puts("strings are same\n");
        return 0;
    }




}
