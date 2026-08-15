#include <stdio.h>

int main() {
    char s1[100], s2[100], s3[200];
    int i = 0, j = 0;

    printf("Enter first string\n");
    gets(s1);

    printf("Enter second string\n");
    gets(s2);

    /* Copy first string into s3 */
    while (s1[i] != '\0') {
        s3[i] = s1[i];
        i++;
    }

    /* Copy second string into s3 */
    while (s2[j] != '\0') {
        s3[i] = s2[j];
        i++;
        j++;
    }

    s3[i] = '\0';   // terminate the string

    printf("Concatenated string: %s\n", s3);

    return 0;
}
