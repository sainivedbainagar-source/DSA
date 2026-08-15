#include <stdio.h>

int main() {
    char s1[100], s2[100];
    int i = 0, j, n, len = 0;

    printf("Enter a string\n");
    gets(s1);

    printf("Enter number of characters to extract\n");
    scanf("%d", &n);

    /* find length (no built-in functions) */
    while (s1[len] != '\0') {
        len++;
    }

    /* start from right end of s1 */
    i = len - 1;
    j = n - 1;

    /* copy characters in reverse (same as paper) */
    while (j >= 0 && i >= 0) {
        s2[j] = s1[i];
        j--;
        i--;
    }

    s2[n] = '\0';   // terminate string

    printf("Extracted string: %s\n", s2);

    return 0;
}

