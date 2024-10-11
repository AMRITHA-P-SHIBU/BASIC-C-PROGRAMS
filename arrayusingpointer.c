#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int array[n];
    
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &array[i]);

    int *ptr = array;
    printf("Elements of the array are:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", *(ptr + i));
    
    printf("\n");
    return 0;
}
