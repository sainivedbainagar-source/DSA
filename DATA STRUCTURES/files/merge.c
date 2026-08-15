#include <stdio.h>

int main(int argc, char *argv[])
{
    FILE *fp1, *fp2;
    char ch;

    // Check command-line arguments
    if (argc != 3)
    {
        printf("Usage: %s sourcefile destinationfile\n", argv[0]);
        return 1;
    }

    // Open source file
    fp1 = fopen(argv[1], "r");
    if (fp1 == NULL)
    {
        printf("Cannot open source file!\n");
        return 1;
    }

    // Open destination file
    fp2 = fopen(argv[2], "w");
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

    // Display destination file contents
    fp2 = fopen(argv[2], "r");

    if (fp2 == NULL)
    {
        printf("Cannot open destination file!\n");
        return 1;
    }

    printf("\nContents of %s:\n", argv[2]);

    while ((ch = fgetc(fp2)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(fp2);

    return 0;
}
