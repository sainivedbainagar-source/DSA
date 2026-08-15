#include <stdio.h>

int main() {
    char s1[200], s2[200];
    int pos, n;
    int i = 0, j = 0;

    printf("Enter main string\n");
    gets(s1);

    printf("Enter starting position\n");
    scanf("%d", &pos);

    printf("Enter number of characters to delete\n");
    scanf("%d", &n);

    /* Copy characters before position */
    while (s1[i] != '\0' && i < pos) {
        s2[j] = s1[i];
        i++;
        j++;
    }

    /* Skip n characters (delete them) */
    i = i + n;

    /* Copy remaining characters */
    while (s1[i] != '\0') {
        s2[j] = s1[i];
        i++;
        j++;
    }

    s2[j] = '\0';   // terminate final string

    printf("String after deletion: %s\n", s2);

    return 0;
}
