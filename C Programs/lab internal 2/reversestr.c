#include <stdio.h>

int main() {
    char s1[100],s2[100];
    int i = 0, j;

    printf("Enter a string\n");
    gets(s1);

    /* Find the last index using your logic */
    while (s1[i] != '\0') {
        i++;
    }

    j = i - 1;   // last character index
    i = 0;       // start index

    /* Reverse the string */
    while ( s2[j] != '\0') {

        s2[i] = s1[j];

        i++;
        j--;
    }
    s2[i] = '\0';

    puts(s2);

    return 0;
}

