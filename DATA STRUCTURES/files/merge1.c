#include <stdio.h>

int main(int argc, char *argv[])
{
    FILE *fp1, *fp2, *fp3;
    char ch;

    if (argc != 4)
    {
        printf("Usage: %s file1 file2 file3\n", argv[0]);
        return 1;
    }

    fp1 = fopen(argv[1], "r");
    fp2 = fopen(argv[2], "r");
    fp3 = fopen(argv[3], "w");

    if (fp1 == NULL || fp2 == NULL || fp3 == NULL)
    {
        printf("Error opening files!\n");
        return 1;
    }

    // Copy first file
    while ((ch = fgetc(fp1)) != EOF)
    {
        fputc(ch, fp3);
    }

    // Copy second file
    while ((ch = fgetc(fp2)) != EOF)
    {
        fputc(ch, fp3);
    }

    fclose(fp1);
    fclose(fp2);
    fclose(fp3);

    printf("Files merged successfully.\n");

    // Display merged contents
    fp3 = fopen(argv[3], "r");

    while ((ch = fgetc(fp3)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(fp3);

    return 0;
}
