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

 void change( pokemon *p){
 // (*p).hp = 60;
  p->hp = 60 ;
  (*p).attack = 100;
   (*p).speed = 90;
   (*p).tier = 'B';
   strcpy((*p).name,"Mango");


 }


int main(){
    pokemon a;
   /* a.hp = 100;
    a.attack = 60;
    a.speed = 80;
    a.tier = 'A';
    strcpy(a.name,"pikachu");
   pokemon *x = &a; */


   printf("%d\n",a.hp);
   printf("%d\n",a.attack);
   printf("%d\n",a.speed);
   printf("%c\n",a.tier);
   printf("%s\n",a.name);

   change(&a);
   printf("%d\n",a.hp);
   printf("%d\n",a.attack);
   printf("%d\n",a.speed);
   printf("%c\n",a.tier);
   printf("%s\n",a.name);

 return 0;
}

