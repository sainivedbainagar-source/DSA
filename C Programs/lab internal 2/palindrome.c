#include <stdio.h>

int main() {
    char s1[100];
    int i = 0, j;

    printf("Enter a string\n");
    gets(s1);

    /* Find length using your logic */
    while (s1[i] != '\0') {
        i++;
    }

    j = i - 1;   // last index
    i = 0;       // first index

    /* Check palindrome */
    while (j>= 0 ) {
        if (s1[i] != s1[j]) {
            printf("Not a palindrome\n");
            return 0;
        }
        i++;
        j--;
    }

    printf("Palindrome\n");
    return 0;
}
