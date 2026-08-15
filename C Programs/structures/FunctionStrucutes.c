#include<stdio.h>
#include<string.h>
#include<stdbool.h>
 typedef struct pokemon{
 int hp;
 int attack;
 int speed;
 char tier;
 char name[15];
 } pokemon ;

void fun(pokemon p){
printf("%d",p.hp);
return;
}
void change(pokemon p){
 p.attack = 70;
 p.speed = 30;
 p.tier = 'A';
 return ;
}
int main(){

 pokemon q;
  q.hp = 60;
  q.speed = 100;
  q.tier = 'A';
  change(q);
  printf("%d\n",q.hp);
  printf("%d\n",q.speed);
  printf("%c\n",q.tier);
  change(q);


 return 0;
}
