#include <stdio.h>

int main()
{
    FILE *fp1, *fp2;
    char ch;

    // Open source file
    fp1 = fopen("input.txt", "r");

    if (fp1 == NULL)
    {
        printf("Source file not found!\n");
        return 1;
    }

    // Open destination file
    fp2 = fopen("output.txt", "w");

    if (fp2 == NULL)
    {
        printf("Cannot create destination file!\n");
        fclose(fp1);
        return 1;
    }

    // Copy contents
    while ((ch = fgetc(fp1)) != EOF)
    {
        fputc(ch, fp2);
    }

    fclose(fp1);
    fclose(fp2);

    printf("File copied successfully.\n");

    // Display contents of destination file
    fp2 = fopen("output.txt", "r");

    if (fp2 == NULL)
    {
        printf("Cannot open destination file!\n");
        return 1;
    }

    printf("\nContents of destination file:\n");

    while ((ch = fgetc(fp2)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(fp2);

    return 0;
}
