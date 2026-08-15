#include<stdio.h>
#include<string.h>
#define m 100
int main()
{
    char s1[m],s2[m];
    char *p;
    char ch;
    printf("enetr s1\n");
    gets(s1);
    printf("enetr s2\n");
    gets(s2);
   printf("eneter char\n");
    scanf(" %c", &ch);
   /* p = strrchr(s1,ch);
    if( p != NULL){
        printf("last occurence of %c is at %ld", ch,p - s1 +1);

    }else {
    printf("element not found\n");
    }
printf("upper case is");
printf("%s",strupr(s1));
printf("%s",strupr(s2)); */

/*if (strcmp(s1,s2)== 0){
    printf("strings are equal\n ");

}
else {
    printf("strings are not equal\n");
} */
 p = strstr(s1,s2);
 if ( p != NULL){
    printf("string2 is found at position %d",p - s1 +1);
 } else {
 printf("string not found");
 }


    return 0;
}
