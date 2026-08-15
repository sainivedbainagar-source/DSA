#include<stdio.h>
#define m 100
int main(){
  char s1[m],s2[m];
  int i = 0;
  puts("enter s1\n");
  gets(s1);
  int l1 = strlen(s1);
 int j = l1-1;
  while(s1[i] != '\0'){
    s2[j] = s[i];
    i++;
    j--;
  }
  s2[l1] = '\0';

  puts("reverse is\n");
  puts(s2);
  int k = 0;
  while( s1[k]= '\0'){
    if ( s1[k] == s2[k])
        k++;
    esle
    break;
    }
    if( k != l1)
        puts("s1 is not pal\n");
    else
        puts("s1 is pal\n");

  }
  return 0;
}
