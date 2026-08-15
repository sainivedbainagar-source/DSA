#include<stdio.h>
#include<string.h>
int main(){
    char s1[100],s2[100],s3[210];
    int pos;
    int i= 0,j= 0, k= 0;
    printf("eneter main string\n");
    gets(s1);
    printf("eneter sub string\n");
    gets(s2);
    printf("enter postion\n");
    scanf("%d",&pos);
    pos = pos -1;
    if(pos < 1 || pos > strlen(s1) + 1) {
    printf("Invalid position");
    return 0;
}

    while ( i < pos && s1[i] != '\0'){
            s3[k] = s1[i];
        i++;
        k++;
    }
    while ( s2[j] != '\0'){
        s3[k] = s2[j];
        j++;
        k++;
    }

    while( s1[i] != '\0'){

        s3[k] =s1[i];
        i++;
        k++;
    }
    s3[k] = '\0';
    puts(s1);
    puts(s2);
    puts(s3);


return 0;
}
