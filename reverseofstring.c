#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int len = strlen(str);
    
    printf("Reversed string: ");
    for (int i = len - 1; i >= 0; i--)
        putchar(str[i]);
    
    printf("\n");
    return 0;
}