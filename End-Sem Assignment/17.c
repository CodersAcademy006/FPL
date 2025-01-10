#include <stdio.h>

int main() {
    int n, arr[100], sum = 0;
    int *ptr;

    // Input size of array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    ptr = arr; // Pointer to the array

    // Calculate sum using pointers
    for (int i = 0; i < n; i++) {
        sum += *ptr;
        ptr++;
    }

    printf("Sum of the array elements: %d\n", sum);

    return 0;
}
