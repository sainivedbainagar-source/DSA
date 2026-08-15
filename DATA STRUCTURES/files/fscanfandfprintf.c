#include <stdio.h>

int main()
{
    FILE *fp;
    int roll;
    char name[50];
    float marks;


    fp = fopen("input.txt", "w");

    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter Roll No: ");
    scanf("%d", &roll);

    printf("Enter Name: ");
    scanf(" %s", name);

    printf("Enter Marks: ");
    scanf(" %f", &marks);


    fprintf(fp, "%d %s %f", roll, name, marks);

    fclose(fp);

    fp = fopen("input.txt", "r");

    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }


    fscanf(fp, "%d %s %f", &roll, name, &marks);

    printf("\nStudent Details:\n");
    printf("Roll No : %d\n", roll);
    printf("Name    : %s\n", name);
    printf("Marks   : %.2f\n", marks);

    fclose(fp);

    return 0;
}
