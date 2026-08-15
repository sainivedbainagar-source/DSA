#include<stdio.h>
#include<string.h>
int main(){
 typedef struct cricketer{
   int age;
   char name[20];
   float average;
    int noOfmatches;
 }cric;
cric a[3];
for(int i = 0;i<3;i++){
    printf("\nenter name :");
    scanf(" %s",a[i].name);
     printf("enter age :");
    scanf("%d", &a[i].age);
     printf("enter noOfmatches : ");
    scanf("%d",&a[i].noOfmatches);
     printf("enter average :");
    scanf("%f",&a[i].average);

}
for(int i = 0;i<3;i++){
    printf("\n%s\t",a[i].name);
     printf("age is : \n");
    printf("%d\t", a[i].age);
     printf("enter noOfmatches : \n");
    printf("%d\t",a[i].noOfmatches);
     printf("\t average is :");
    printf("%.2f",a[i].average);
 printf("\n");
}




return 0;
 }
