#include <stdio.h>
#include <stdlib.h>

typedef struct student {
    int marks[6];
    float avg;
    int total;
    char name[20];
    int rno;
} student;

student s[2];

int main() {

    for (int i = 0; i < 2; i++) {
        s[i].total = 0;

        printf("\nEnter student %d details\n", i + 1);

        printf("Enter roll number: ");
        scanf("%d", &s[i].rno);

        printf("Enter name: ");
        scanf("%s", s[i].name);

        printf("Enter 6 subject marks:\n");

        for (int j = 0; j < 6; j++) {
            scanf("%d", &s[i].marks[j]);
            s[i].total += s[i].marks[j];

            if (s[i].marks[j] < 40) {
                printf("Grade not possible\n", j + 1);
                exit(0);
            }
        }

        s[i].avg = s[i].total / 6.0;

        printf("Total = %d\n", s[i].total);
        printf("Average = %.2f\n", s[i].avg);

        if (s[i].avg >= 90)
            printf("Grade : O\n");
        else if (s[i].avg >= 80)
            printf("Grade : A+\n");
        else if (s[i].avg >= 70)
            printf("Grade : A\n");
        else if (s[i].avg >= 60)
            printf("Grade : B+\n");
        else if (s[i].avg >= 50)
            printf("Grade : B\n");
        else if (s[i].avg >= 40)
            printf("Grade : C\n");
        else
            printf("Grade : Fail\n");
    }

    return 0;
}
