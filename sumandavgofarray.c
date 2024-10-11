#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int array[n];
    int sum = 0;

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
        sum += array[i];
    }

    double average = (double)sum / n;
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}
