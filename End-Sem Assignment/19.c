#include <stdio.h>

int main() {
    int n, arr[100];
    int *ptr;

    // Input size of array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    ptr = arr + n - 1; // Pointer to the last element

    // Display elements in reverse order using pointer
    printf("Array in reverse order:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", *ptr);
        ptr--;
    }
    printf("\n");

    return 0;
}
