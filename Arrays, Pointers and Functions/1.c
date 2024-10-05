// Write a C program to find the minimum, maximum and average in an array of integers.

#include <stdio.h>

void findMinMaxAvg(int arr[], int n, int *min, int *max, float *avg) {
    *min = arr[0];
    *max = arr[0];
    int sum = 0;

    for(int i = 0; i < n; i++) {
        if (arr[i] < *min) *min = arr[i];
        if (arr[i] > *max) *max = arr[i];
        sum += arr[i];
    }
    *avg = (float)sum / n;
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers:\n", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int min, max;
    float avg;
    findMinMaxAvg(arr, n, &min, &max, &avg);

    printf("Minimum: %d, Maximum: %d, Average: %.2f\n", min, max, avg);
    return 0;
}
