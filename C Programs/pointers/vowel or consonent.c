#include<stdio.h>
int main(){
char ch, *p;
printf("eneter a char\n");
scanf("%c", &ch);
if( *p == 'a'|| 'A' || 'e'|| 'E' || 'I' || 'i'|| 'O' || 'o' || 'U' || 'u' ){
    printf("vowel");

}
else {
    printf( "consonet or other char\n");
}
return 0;
}


