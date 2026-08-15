#include<stdio.h>

typedef struct {
    int rollno;
    char name[50];
    int marks[6];
    int total;
    float avg;
} student;

int main() {
    student s;
    int i, fail = 0;

    printf("Enter Roll No: ");
    scanf("%d", &s.rollno);

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter marks in 6 subjects:\n");
    for(i = 0; i < 6; i++) {
        scanf("%d", &s.marks[i]);
        if(s.marks[i] < 40) {
            fail = 1;
        }
    }

    // Calculate total
    s.total = 0;
    for(i = 0; i < 6; i++) {
        s.total += s.marks[i];
    }

    // Calculate average
    s.avg = s.total / 6.0;

    // Display
    printf("\n--- Report Card ---\n");
    printf("Roll No: %d\n", s.rollno);
    printf("Name: %s\n", s.name);
    printf("Total: %d\n", s.total);
    printf("Average: %.2f\n", s.avg);

    // Grade
    if(s.avg < 40 || fail == 1)
        printf("Grade: F");
    else if(s.avg >= 90)
        printf("Grade: O");
    else if(s.avg >= 80)
        printf("Grade: A+");
    else if(s.avg >= 70)
        printf("Grade: A");
    else if(s.avg >= 60)
        printf("Grade: B+");
    else if(s.avg >= 50)
        printf("Grade: B");
    else
        printf("Grade: C");

    return 0;
}
