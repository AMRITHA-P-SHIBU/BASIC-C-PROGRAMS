#include <stdio.h>

int factorial_non_recursive(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++)
        result *= i;
    return result;
}

int factorial_recursive(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial_recursive(n - 1);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("Factorial (non-recursive): %d\n", factorial_non_recursive(num));
    printf("Factorial (recursive): %d\n", factorial_recursive(num));
    
    return 0;
}
