#include <stdio.h>

int main() {
    FILE *f1 = NULL, *f2 = NULL, *f3 = NULL;

    f1 = fopen("random.c", "r");
    f2 = fopen("f3.c", "r");
    f3 = fopen("file2.c", "w");

    if (f1 == NULL || f2 == NULL || f3 == NULL) {
        printf("File doesn't exist\n");
        return 0;
    }

    char ch;


    while (ch != EOF) {
        fputc(ch, f3);
    }
    fclose(f1);


    while ((ch = fgetc(f2)) != EOF) {
        fputc(ch, f3);
    }
    fclose(f2);
    fclose(f3);


    f3 = fopen("file2.c", "r");
    if (f3 == NULL) {
        printf("File doesn't exist\n");
        return 0;
    }

    while ( ch != EOF) {
        putchar(ch);
    }

    fclose(f3);
    return 0;
}
