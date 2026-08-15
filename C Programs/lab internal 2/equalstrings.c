#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];
    int i;

    printf("Enter first string\n");
    gets(s1);

    printf("Enter second string\n");
    gets(s2);

    /* First compare lengths */
    if (strlen(s1) != strlen(s2)) {
        printf("Strings are not equal\n");
        return 0;
    }

    /* Compare characters */
    for (i = 0; i < strlen(s1); i++) {
        if (s1[i] != s2[i]) {
            printf("Strings are not equal\n");
            return 0;
        }
    }

    printf("Strings are equal\n");
    return 0;
}
