#include<stdio.h>

typedef struct {
    int id;
    char name[50];
    char dept[50];
    float basic, hra, da, gross;
} employee;

int main() {
    employee e;

    printf("Enter Employee ID: ");
    scanf("%d", &e.id);

    printf("Enter Name: ");
    scanf("%s", e.name);

    printf("Enter Department: ");
    scanf("%s", e.dept);

    printf("Enter Basic Salary: ");
    scanf("%f", &e.basic);

    // Calculations
    e.hra = 0.20 * e.basic;
    e.da  = 0.10 * e.basic;
    e.gross = e.basic + e.hra + e.da;


    printf("\n--- Payslip ---\n");
    printf("Employee ID: %d\n", e.id);
    printf("Name: %s\n", e.name);
    printf("Department: %s\n", e.dept);
    printf("Basic Salary: %.2f\n", e.basic);
    printf("HRA (20%%): %.2f\n", e.hra);
    printf("DA (10%%): %.2f\n", e.da);
    printf("Gross Salary: %.2f\n", e.gross);

    return 0;
}
