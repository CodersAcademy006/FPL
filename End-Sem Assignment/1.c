#include <stdio.h>

int main() {
    float percentage;

    // Input percentage
    printf("Enter your percentage: ");
    scanf("%f", &percentage);

    // Determine the class
    if (percentage < 40)
        printf("Result: Failed\n");
    else if (percentage >= 40 && percentage < 60)
        printf("Result: Second Class\n");
    else if (percentage >= 60 && percentage < 70)
        printf("Result: First Class\n");
    else
        printf("Result: Distinction\n");

    return 0;
}
