#include <stdio.h>

int main() {
    int n, choice;
    
    // Prompt for number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Input the elements
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    do {
        // Menu
        printf("\n1. Smallest\n2. Largest\n3. Sum\n4. Average\n5. Exit\nChoice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: {  // Smallest
                int min = arr[0];
                for (int i = 1; i < n; i++) if (arr[i] < min) min = arr[i];
                printf("Smallest: %d\n", min);
                break;
            }
            case 2: {  // Largest
                int max = arr[0];
                for (int i = 1; i < n; i++) if (arr[i] > max) max = arr[i];
                printf("Largest: %d\n", max);
                break;
            }
            case 3: {  // Sum
                int sum = 0;
                for (int i = 0; i < n; i++) sum += arr[i];
                printf("Sum: %d\n", sum);
                break;
            }
            case 4: {  // Average
                int sum = 0;
                for (int i = 0; i < n; i++) sum += arr[i];
                printf("Average: %.2f\n", (float)sum / n);
                break;
            }
            case 5:  // Exit
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 5);
    
    return 0;
}
