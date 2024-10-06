// Write a C program that uses non recursive function to search for a Key value in a given list of integers using linear search method.

#include <stdio.h>

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            return i;
    }
    return -1;
}

int main() {
    int arr[] = {3, 5, 2, 8, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 8;
    int result = linearSearch(arr, n, key);
    if (result == -1)
        printf("Element not found\n");
    else
        printf("Element found at index: %d\n", result);
    return 0;
}
