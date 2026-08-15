#include<stdio.h>
#include<string.h>
int main(){
 typedef struct pokemon{
 int hp;
 int attack;
 int speed;
 char tier;
 char name[15];
 } pokemon ;

 pokemon a[3];// a[0], a[1],a[2]
  a[0].attack = 50;
 a[0].speed = 30;
 a[0].hp = 80;
 a[0].tier = 'A';
 strcpy(a[0].name,"Pikachu");

  a[1].attack = 50;
 a[1].speed = 10;
 a[1].hp = 80;
 a[1].tier = 'B';
  strcpy(a[1].name,"Chian");

  a[2].attack = 100;
 a[2].speed = 100;
 a[2].hp = 100;
 a[2].tier = 'O';
  strcpy(a[0].name,"ryd");

 for(int i = 0; i<3;i++){
   printf("Name = %s\n ",a[i].name);
    printf("attack = %d\n",a[i].attack);
    printf("speed = %d\n",a[i].speed);
    printf("hp = %d\n",a[i].hp);
    printf("tier = %c\n ",a[i].tier);
 }

return 0;
}
