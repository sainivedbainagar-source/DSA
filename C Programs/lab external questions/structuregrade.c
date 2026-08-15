#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 typedef struct student{
 int marks[6];
 float avg ;
 int total;
 char grade[2];
 char name[20];
 int rno;
 } student;

 student s;
 int main(){
 printf("enter student details\n");
 printf("enter roll numnber\n");
 scanf("%d",&s.rno);
 printf("roll numnber is %d\n",s.rno);
 printf("enter name\n");
 scanf("%s",s.name);
 printf("name is %s\n",s.name);
 printf("enter student marks\n");
 for(int i = 0 ;i<6;i++){
    scanf("%d",&s.marks[i]);
    s.total += s.marks[i];
    if(s.marks[i] < 40){
        printf("Grade not possible\n");
        exit(0);
    }

 }
 s.avg = s.total/6;
 if(s.avg >=90)
    printf("Grade : O");
 else if (s.avg >= 80 && s.avg < 90)
    printf("Grade :A+");
 else if (s.avg >= 70 && s.avg < 80)
    printf("Grade :A");
 else if (s.avg >= 60 && s.avg < 70)
    printf("Grade :B+");
 else if (s.avg >= 50 && s.avg < 60)
    printf("Grade :B");
 else if (s.avg >= 40 && s.avg < 50)
    printf("Grade :C");
 else if (s.avg <= 40)
    printf("Grade :Fail");
 return 0;

 }






