#include <stdio.h>

int main() {
    char s1[200], s2[100];
    int i = 0, j = 0;

    printf("Enter first string\n");
    gets(s1);

    printf("Enter second string\n");
    gets(s2);

    /* Move i to the end of first string */
    while (s1[i] != '\0') {
        i++;
    }

    /* Append second string to first */
    while (s2[j] != '\0') {
        s1[i] = s2[j];
        i++;
        j++;
    }

    s1[i] = '\0';   // terminate the final string

    printf("After appending: %s\n", s1);

    return 0;
}
