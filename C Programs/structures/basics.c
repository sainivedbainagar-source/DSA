#include<stdio.h>
int main(){
struct pokemon{
    int hp;
    int speed;
    int attack;
    char tier;
};
struct pokemon pikachu;
printf("Enter attack\n");
scanf("%d",&pikachu.attack);
 pikachu.hp = 50;
 pikachu.speed = 100;
 //pikachu.attack = 60;
 pikachu.tier  = 'A';

 printf("%d",pikachu.attack);


  struct pokemon china;
 china.hp = 80;
 china.speed = 80;
 china.attack= 80;
 china.tier = 'B';


return 0;
}
