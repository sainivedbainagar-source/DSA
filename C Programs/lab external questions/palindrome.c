#include<stdio.h>
int main(){
char s[100];
printf("enetr string");
gets(s);
int i = 0;
while(s[i] != '\0'){
   i++;
}
int j = i-1;
i = 0;
while( i < j){
    if( s[i] != s[j]){
        printf("not palindrome\n");
        return 0;
    }
    i++;
    j--;
}
 printf("palindrome\n");
return 0;
}
