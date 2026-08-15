#include<stdio.h>
int main(){
FILE *f,*f1,*f2;
int  ch;
f = fopen("text1.txt","r");
f1 = fopen("text2.txt","r");
f2= fopen("text3.txt","w");

 if(f == NULL || f1 == NULL || f2 == NULL) {
        printf("Error opening file");
        return 1;
    }
while( (ch = fgetc(f)) != EOF){
    fputc(ch,f2);
}
while( (ch = fgetc(f1)) != EOF){
    fputc(ch,f2);
}
fclose(f);
fclose(f1);
fclose(f2);
f2 = fopen("text3.txt","r");
if( f2 == NULL){
    return 1;
}
printf("merged contents are \n");
while( (ch = fgetc(f2)) != EOF){
    printf("%c", ch);
    }
    fclose(f2);
return 0;
}
