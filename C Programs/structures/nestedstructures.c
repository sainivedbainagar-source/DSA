#include<stdio.h>
#include<string.h>
typedef struct car{
    char name[20];
int speed;
int milege;
} car;
typedef struct supercar{
 car normal;
int safetyrating;
}supercar;
 supercar a;
int main(){
 a.normal.speed = 70;
 strcpy(a.normal.name,"Lambo");
 a.safetyrating = 99;
 printf("speed = %d\n",a.normal.speed);
 printf("name = %s\n",a.normal.name);
 printf("Safety rating = %d",a.safetyrating);
return 0 ;
}

