#include<stdio.h>
int main(){
FILE *f1 = NULL,*f2 = NULL;
f1 = fopen("random.c","r");
f2 = fopen("file2.c","w");

if(f1 == NULL || f2 == NULL){
printf("file doesn,t exist\n");
return 0;
}
char ch = fgetc(f1);
while( ch != EOF)
{
   fputc(ch,f2);
   ch = fgetc(f1);
}
fclose(f1);
fclose(f2);
f2 = fopen("file2.c","r");
if(f2 == NULL){
printf("file doesn't exist\n");
return 0;
}
char c = fgetc(f2);

while (c != EOF)
{
    putchar(c);
    c = fgetc(f2);
}

fclose(f2);

return 0;
}
