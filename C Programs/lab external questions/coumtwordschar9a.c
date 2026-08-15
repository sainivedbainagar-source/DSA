#include<stdio.h>
int main(){
char s[100];
gets(s);
int i  = 0;
int w=0,ch=0,l = 0,d= 0,v=0,c=0;

if (s[0] != '\0')
    l = 1;

for(i = 0;s[i] != '\0' ;i++){
  ch++;
  if( s[i] >= '0' && s[i] <= '9'){
    d++;
  }
  if ( (s[i] >= 'A' && s[i] <= 'Z') ||  (s[i] >= 'a' && s[i] <= 'z'))  {
    if ( s[i] == 'a' ||  s[i] == 'e' ||  s[i] == 'i' ||  s[i] == 'o' ||  s[i] == 'u' ||  s[i] == 'A' ||
         s[i] == 'E' || s[i] == 'I' ||  s[i] == 'O' || s[i] == 'U')
            v++;
    else
        c++;
  }
   if ( s[i] == '\n'){
    l++;
   }
   if( (i==0 && s[i] != ' ') || (s[i] != ' ' && s[i-1] == ' ')){
    w++;
   }
}
printf("vowels = %d\n", v);
printf("cosonents = %d\n", c);
printf("lines = %d\n", l);
printf("characters = %d\n", ch);
printf("digits = %d\n", d);
printf("words = %d\n", w);
return 0 ;
}
