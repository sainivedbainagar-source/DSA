#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string\n");
    gets(str);   // allowed in exams (not recommended in real programs)

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;   // convert to uppercase
        }
        i++;
    }

    printf("String in uppercase: %s\n", str);

    return 0;
}
