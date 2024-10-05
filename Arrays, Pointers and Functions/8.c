// Write a program for display values reverse order from an array using a pointer.

#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr;

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", ptr + i);  // Read elements using pointer
    }

    printf("Array elements are: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);  // Display elements using array indexing
    }
    printf("\n");

    return 0;
}
