#include<stdio.h>

typedef struct {
    int rollno;
    char name[50];
    float marks;
} student;

int main() {
    student s;
    student *ptr;
    ptr = &s;


    printf("Enter Roll No: ");
    scanf("%d", &ptr->rollno);

    printf("Enter Name: ");
    scanf("%s", ptr->name);

    printf("Enter Marks: ");
    scanf("%f", &ptr->marks);

    // Display using pointer
    printf("\n--- Student Details ---\n");
    printf("Roll No: %d\n", ptr->rollno);
    printf("Name: %s\n", ptr->name);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}
