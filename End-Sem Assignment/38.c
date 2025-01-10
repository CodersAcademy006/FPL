#include <stdio.h>

int binarySearch(int arr[], int n, int key) {
    int left = 0, right = n - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if key is present at mid
        if (arr[mid] == key) {
            return mid;
        }
        // If key is greater, ignore left half
        if (arr[mid] < key) {
            left = mid + 1;
        }
        // If key is smaller, ignore right half
        else {
            right = mid - 1;
        }
    }
    return -1;  // Key not found
}

int main() {
    int arr[] = {2, 5, 7, 12, 15, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;

    printf("Enter the number to search: ");
    scanf("%d", &key);

    int result = binarySearch(arr, n, key);
    if (result != -1) {
        printf("Key found at index %d\n", result);
    } else {
        printf("Key not found\n");
    }
    return 0;
}
