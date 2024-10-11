#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int len = strlen(str);
    for (int i = 0; i < len; i++)
        rev[i] = str[len - i - 1];
    rev[len] = '\0';
    if (strcmp(str, rev) == 0)
        printf("%s is a palindrome.\n", str);
    else
        printf("%s is not a palindrome.\n", str);
    return 0;
}
