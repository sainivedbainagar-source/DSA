
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
 typedef union pokemon{
 int hp;
 int attack;
 int speed;
 char tier;
 char name[15];
 } pokemon ;




int main(){
    pokemon a;
    a.hp = 100;
    a.attack = 60;
    a.speed = 80;
    a.tier = 'A';
   // strcpy(a.name,"pikachu");



   printf("%d\n",a.hp);
   printf("%d\n",a.attack);
   printf("%d\n",a.speed);
   printf("%c\n",a.tier);
   //printf("%s\n",a.name);

 return 0;
}

