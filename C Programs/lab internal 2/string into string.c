#include <stdio.h>

int main() {
    char s1[200], s2[100], result[300];
    int i = 0, j = 0, k = 0, pos;

    printf("Enter main string:\n");
    gets(s1);

    printf("Enter string to insert:\n");
    gets(s2);

    printf("Enter position (starting from 1):\n");
    scanf("%d", &pos);

    /* convert human position to index */
    pos = pos - 1;

    /* copy characters of s1 before position */
    while (i < pos && s1[i] != '\0') {
        result[k] = s1[i];
        i++;
        k++;
    }

    /* copy entire s2 */
    j = 0;
    while (s2[j] != '\0') {
        result[k] = s2[j];
        j++;
        k++;
    }

    /* copy remaining characters of s1 */
    while (s1[i] != '\0') {
        result[k] = s1[i];
        i++;
        k++;
    }

    result[k] = '\0';   // terminate string

    printf("String after insertion:\n");
    puts(result);

    return 0;
}

