#include<stdio.h>
#include<string.h>
int main(){
    char s1[100],s2[100];
    int n;
    int pos;
    int i= 0,j= 0;
    printf("eneter main string\n");
    gets(s1);
    puts(s1);

    printf("enter postion\n");
    scanf("%d",&pos);
    printf("enter n cahracters \n");
    scanf("%d",&n);

    pos = pos -1;
    if(pos < 0 || pos >= strlen(s1) ) {
    printf("Invalid position");
    return 0;
}
 if( n < 0 || pos + n > strlen(s1) ){
    printf("not possible");
    return 0;
 }

    while ( i < pos && s1[i] != '\0'){
            s2[j] = s1[i];
        i++;
        j++;
    }
   i = i+n;
    while( s1[i] != '\0'){

        s2[j] =s1[i];
        i++;
        j++;
    }
    s2[j] = '\0';
    printf("after deletion\n");
    puts(s2);



return 0;
}

