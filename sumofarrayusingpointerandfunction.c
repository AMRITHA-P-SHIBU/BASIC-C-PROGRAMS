#include <stdio.h>

int sum_of_array(int *arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += *(arr + i);
    return sum;
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int array[n];
    
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &array[i]);
    
    int total = sum_of_array(array, n);
    printf("Sum of elements: %d\n", total);
    
    return 0;
}
