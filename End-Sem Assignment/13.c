#include <stdio.h>

int main() {
    char operator;
    float num1, num2, result;
    int choice;

    do {
        // Input the operation
        printf("Enter operation (+, -, *, /, %%, or q to quit): ");
        getchar(); // Consume newline from previous input
        scanf("%c", &operator);

        if (operator == 'q') {
            printf("Exiting calculator.\n");
            break;
        }

        // Input numbers
        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);

        switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2f\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2f\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2f\n", result);
            break;
        case '/':
            if (num2 != 0)
                result = num1 / num2;
            else {
                printf("Error: Division by zero.\n");
                continue;
            }
            printf("Result: %.2f\n", result);
            break;
        case '%':
            if ((int)num2 != 0)
                result = (int)num1 % (int)num2;
            else {
                printf("Error: Division by zero.\n");
                continue;
            }
            printf("Result: %.0f\n", result);
            break;
        default:
            printf("Invalid operator.\n");
        }

        printf("Do you want to continue? Enter 1 for yes, 0 for no: ");
        scanf("%d", &choice);
    } while (choice == 1);

    return 0;
}
