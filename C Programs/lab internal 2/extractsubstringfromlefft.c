#include <stdio.h>

int main() {
    char s1[100], s2[100];
    int n, i = 0;

    printf("Enter a string\n");
    gets(s1);

    printf("Enter number of characters to extract\n");
    scanf("%d", &n);

    /* Copy first n characters */
    while (s1[i] != '\0' && i < n) {
        s2[i] = s1[i];
        i++;
    }

    s2[i] = '\0';   // terminate extracted string

    printf("Extracted string: %s\n", s2);

    return 0;
}
