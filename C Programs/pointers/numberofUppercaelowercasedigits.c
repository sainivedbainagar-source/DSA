#include<stdio.h>
int main(){
int i=0, up=0,lc=0,d=0;
char ch , *p = &ch;

printf("enter character\n");
scanf("%c", &ch);
while( ch != '*'){

    if ( *p >= 'a' &&  *p <= 'z')
        lc++;
        if ( *p >= 'A' && *p <= 'Z')
        up++;
        if (*p >= '0' && *p <= '9')
            d++;


scanf("%c", &ch);
i++;
}
printf("lc = %d\n", lc);
printf("up = %d\n", up);
printf("digits = %d\n", d);



 return  0;

}
