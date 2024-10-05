// Write a program through a pointer variable to sum of n elements from an array.

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

    printf("Array elements in reverse order: ");
    for(int i = n - 1; i >= 0; i--) {
        printf("%d ", *(ptr + i));  // Display elements in reverse using pointer
    }
    printf("\n");

    return 0;
}
