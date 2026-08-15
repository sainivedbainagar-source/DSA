#include<stdio.h>
int main(){
char s[100];
printf("enetr string\n");
gets(s);
char ch;
scanf(" %c", &ch);
int i = 0;
int found= 0;
while( s[i] != '\0'){
    if( s[i] == ch){
        printf("Found at position %d\n", i+1);
        found = 1;
    }
    i++;
}
if ( !found)
printf("not found");
return 0;
}

