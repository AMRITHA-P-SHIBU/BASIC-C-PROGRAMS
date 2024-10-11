#include <stdio.h>
int main() {
    int num, originalNum, remainder, result = 0, digits = 0, power;
    printf("Enter a number: ");
    scanf("%d", &num);
    originalNum = num;
    while (originalNum != 0) {
        originalNum /= 10;
        digits++;
    }
    originalNum = num;
    while (originalNum != 0) {
        remainder = originalNum % 10;
        power = 1;
        for (int i = 0; i < digits; i++) {
            power *= remainder;
        }
        result += power;
        originalNum /= 10;
    }
    if (result == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
