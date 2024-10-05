// Write a function to compute mean, variance, Standard Deviation, sorting of n elements in a single dimension array.

#include <stdio.h>
#include <math.h>

void computeStats(int arr[], int n, float *mean, float *variance, float *stdDev) {
    int sum = 0;
    for (int i = 0; i < n; i++) sum += arr[i];
    *mean = (float)sum / n;

    float varSum = 0;
    for (int i = 0; i < n; i++) varSum += pow(arr[i] - *mean, 2);
    *variance = varSum / n;
    *stdDev = sqrt(*variance);
}

void sortArray(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

    float mean, variance, stdDev;
    computeStats(arr, n, &mean, &variance, &stdDev);

    printf("Mean: %.2f, Variance: %.2f, Standard Deviation: %.2f\n", mean, variance, stdDev);

    sortArray(arr, n);
    printf("Sorted Array: ");
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
