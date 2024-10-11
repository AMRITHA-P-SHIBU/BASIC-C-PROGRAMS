#include <stdio.h>

int main() {
    int a, b, choice, temp;

    do {
        printf("\nMenu:\n");
        printf("1. Add two numbers\n");
        printf("2. Swap two numbers\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%d%d", &a, &b);
                printf("Sum: %d\n", a + b);
                break;
            case 2:
                printf("Enter two numbers: ");
                scanf("%d%d", &a, &b);
                temp = a;
                a = b;
                b = temp;
                printf("After swapping: a = %d, b = %d\n", a, b);
                break;
            case 3:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 3);

    return 0;
}
