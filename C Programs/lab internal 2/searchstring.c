#include <stdio.h>

int main()
{
    char str[100], ch;
    int i = 0, pos = -1;

    printf("Enter the string: ");
    scanf("%s", str);

    printf("Enter the character to search: ");
    scanf(" %c", &ch);   // space before %c to skip newline

    while (str[i] != '\0')
    {
        if (str[i] == ch)
        {
            pos = i;
            break;
        }
        i++;
    }

    if (pos != -1)
        printf("Character found at position %d", pos);
    else
        printf("-1");

    return 0;
}

