#include <stdio.h>

int main() {
    char s1[100], s2[100];
    int pos, n, i = 0, j = 0;

    printf("Enter a string\n");
    gets(s1);

    printf("Enter starting position\n");
    scanf("%d", &pos);

    printf("Enter number of characters to extract\n");
    scanf("%d", &n);

    /* Move i to the given position */
    i = pos;

    /* Copy n characters from that position */
    while (s1[i] != '\0' && j < n) {
        s2[j] = s1[i];
        i++;
        j++;
    }

    s2[j] = '\0';   // terminate extracted string

    printf("Extracted string: %s\n", s2);

    return 0;
}

