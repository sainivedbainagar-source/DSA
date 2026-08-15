
#include<stdio.h>

int main(int argc, char *argv[]) {
    FILE *fp1, *fp2;
    int ch;

    // Check arguments
    if(argc != 3) {
        printf("Usage: program sourcefile destinationfile\n");
        return 1;
    }

    // Open source and destination
    fp1 = fopen(argv[1], "r");
    fp2 = fopen(argv[2], "w");

    if(fp1 == NULL || fp2 == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    // Copy character by character
    while((ch = fgetc(fp1)) != EOF) {
        fputc(ch, fp2);
    }

    fclose(fp1);
    fclose(fp2);

    // 🔥 Now display content of destination file
    fp2 = fopen(argv[2], "r");

    if(fp2 == NULL) {
        printf("Error opening destination file\n");
        return 1;
    }

    printf("Copied contents are:\n");

    while((ch = fgetc(fp2)) != EOF) {
        printf("%c", ch);
    }

    fclose(fp2);

    return 0;
}
