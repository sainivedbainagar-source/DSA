#include<stdio.h>
#include<string.h>
int main(){
   typedef struct date{
       int date;
       int year;
       int month;
   } date;

  date a;
  date b;
   a.date = 5 ;
   a.month = 12;
   a.year = 1999;
   b.date = 5 ;
   b.month = 12;
   b.year = 1999;

   if((a.year == b.year) && (a.month == b.month) && (a.date == b.date)){
    printf("equal");
   }
   else
    printf("Not equal");



return 0 ;
}
