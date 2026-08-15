#include <stdio.h>

int main()
{
    FILE *fp1, *fp2, *fp3;
    char ch;

    // Open first file
    fp1 = fopen("input.txt", "r");
    if (fp1 == NULL)
    {
        printf("Cannot open file1!\n");
        return 1;
    }

    // Open second file
    fp2 = fopen("output.txt", "r");
    if (fp2 == NULL)
    {
        printf("Cannot open file2!\n");
        fclose(fp1);
        return 1;
    }

    // Open third file
    fp3 = fopen("third.txt", "w");
    if (fp3 == NULL)
    {
        printf("Cannot create file3!\n");
        fclose(fp1);
        fclose(fp2);
        return 1;
    }

    // Copy contents of file1 to file3
    while ((ch = fgetc(fp1)) != EOF)
    {
        fputc(ch, fp3);
    }

    // Copy contents of file2 to file3
    while ((ch = fgetc(fp2)) != EOF)
    {
        fputc(ch, fp3);
    }

    fclose(fp1);
    fclose(fp2);
    fclose(fp3);

    printf("Files merged successfully.\n");

    // Display merged contents
    fp3 = fopen("third.txt", "r");

    if (fp3 == NULL)
    {
        printf("Cannot open file3!\n");
        return 1;
    }

    printf("\nContents of file3:\n");

    while ((ch = fgetc(fp3)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(fp3);

    return 0;
}
