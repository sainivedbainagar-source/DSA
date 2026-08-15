#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
 typedef struct pokemon{
 int hp;
 int attack;
 int speed;
 char tier;
 char name[15];
 } pokemon ;
  typedef struct legendarypokemon{
  pokemon normal;//represents previous strucute
 char ability[50];

 } legendarypokemon ;

 typedef struct godpokemon{
  legendarypokemon basic;
  int specialattack;

 }godpokemon;
 godpokemon arc;
 strcpy(arc.basic.ability,"turnsintostoen");
 arc.specialattack = 500;
  arc.basic.normal.hp  = 300;



 legendarypokemon mewto;
 strcpy(mewto.ability,"pressure");
 mewto.normal.hp = 100;
 mewto.normal.speed = 100;
 mewto.normal.tier = 'S';
 mewto.normal.hp = 100;
 strcpy(mewto.normal.name,"mewto");


return 0;
}
