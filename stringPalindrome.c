#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    int len, i, j;

    printf("Enter a string: ");
    gets(str);

    len = strlen(str);

    for (i = 0, j = len - 1; i < len; i++, j--) {
        rev[i] = str[j];
    }
    rev[i] = '\0';

    if (strcmp(str, rev) == 0)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}
