#include <stdio.h>

int main() {
    int n, i, num, largest, smallest;

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input first number and initialize largest and smallest
    printf("Enter number 1: ");
    scanf("%d", &num);
    largest = smallest = num;

    // Loop through the remaining numbers
    for (i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if (num > largest)
            largest = num;
        if (num < smallest)
            smallest = num;
    }

    printf("Largest: %d\n", largest);
    printf("Smallest: %d\n", smallest);

    return 0;
}
