/* Write a C program, which takes two integer operands and one operator from the user, performs the operation and
then prints the result. (Consider the operators +,-,*, /, % and use Switch Statement) */

#include <stdio.h>

int main() {
    int num1, num2, result;
    char operator;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %d\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %d\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %d\n", result);
            break;
        case '/':
            if (num2 != 0)
                printf("Result: %d\n", num1 / num2);
            else
                printf("Division by zero error!\n");
            break;
        case '%':
            if (num2 != 0)
                printf("Result: %d\n", num1 % num2);
            else
                printf("Division by zero error!\n");
            break;
        default:
            printf("Invalid operator!\n");
    }

    return 0;
}
