// Write a program that declares Class awarded for a given percentage of marks, where mark <40%= Failed, 40% to <60% = Second class, 60% to <70%=First class, >= 70% = Distinction. Read percentage.
from standard input.
#include <stdio.h>

int main() {
    float percentage;
    printf("Enter the percentage of marks: ");
    scanf("%f", &percentage);

    if (percentage < 40) {
        printf("Result: Failed\n");
    } else if (percentage >= 40 && percentage < 60) {
        printf("Result: Second Class\n");
    } else if (percentage >= 60 && percentage < 70) {
        printf("Result: First Class\n");
    } else if (percentage >= 70) {
        printf("Result: Distinction\n");
    }

    return 0;
}
