#include<stdio.h>
#include<string.h>
int main(){

   typedef struct book{
    char name[50];
    float price;
    int noofpages;
    } PW;
PW a ;
PW b;
PW c;


a.noofpages  = 100;
a.price= 100.5;
 strcpy(a.name,"Seven");
/* a.name[0] = 'w';
a.name[1] = 'u';
a.name[2] = 'o';
a.name[3] = 'i';
a.name[4] = 'e'; */


printf("%d\n",a.noofpages);
printf("%f\n",a.price);
printf("%s\n",a.name);
printf("%f\n",a.price);

return 0;
}
