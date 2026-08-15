#include<stdio.h>
#include<string.h>
int main(){
 typedef struct pokemon{
 int hp ,attack;

 int speed;
 char tier;
 char name[15];
 } pokemon ;

 pokemon a,b,c;

  a.attack = 50;
 a.speed = 10;
 a.hp = 80;
 a.tier = 'B';
  strcpy(a.name,"Chian");

  /*b.attack = a.attack;
 b.speed = a.speed;
 b.hp = a.hp;
 b.tier = a.tier;
  strcpy(b.name,a.name);*/


 b = a;//  a is stored in b , and is deep copy

 printf("%d",b.attack);

return 0;
}
