#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fp1, *fp2;
    char ch;

    fp1 = fopen("source.txt", "r");
    if(fp1 == NULL){
        printf("Source file not found\n");
        exit(0);
    }

    fp2 = fopen("dest.txt", "w");
    if(fp2 == NULL){
        printf("Cannot create destination file\n");
        exit(0);
    }

    while((ch = fgetc(fp1)) != EOF){
        fputc(ch, fp2);
    }

    printf("File copied successfully\n");

    fclose(fp1);
    fclose(fp2);

    return 0;
}
