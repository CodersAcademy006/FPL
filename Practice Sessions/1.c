/* Write a simple program that prints the results of all the operators available in C (including pre/ post increment ,
bitwise and/or/not , etc.). Read required operand values from standard input.
*/
#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Arithmetic Operators
    printf("Arithmetic Operators:\n");
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b);

    // Relational Operators
    printf("\nRelational Operators:\n");
    printf("a == b = %d\n", a == b);
    printf("a != b = %d\n", a != b);
    printf("a > b = %d\n", a > b);
    printf("a < b = %d\n", a < b);
    printf("a >= b = %d\n", a >= b);
    printf("a <= b = %d\n", a <= b);

    // Logical Operators
    printf("\nLogical Operators:\n");
    printf("a && b = %d\n", a && b);
    printf("a || b = %d\n", a || b);
    printf("!a = %d\n", !a);

    // Bitwise Operators
    printf("\nBitwise Operators:\n");
    printf("a & b = %d\n", a & b);
    printf("a | b = %d\n", a | b);
    printf("a ^ b = %d\n", a ^ b);
    printf("~a = %d\n", ~a);
    printf("a << 1 = %d\n", a << 1);
    printf("a >> 1 = %d\n", a >> 1);

    // Increment and Decrement Operators
    printf("\nIncrement/Decrement Operators:\n");
    printf("a++ = %d\n", a++);
    printf("++b = %d\n", ++b);
    printf("a-- = %d\n", a--);
    printf("--b = %d\n", --b);

    // Assignment Operators
    printf("\nAssignment Operators:\n");
    int c = a;
    c += b;
    printf("c += b = %d\n", c);
    c -= b;
    printf("c -= b = %d\n", c);
    c *= b;
    printf("c *= b = %d\n", c);
    c /= (b ? b : 1);  // Prevent divide by zero
    printf("c /= b = %d\n", c);
    c %= (b ? b : 1);
    printf("c %%= b = %d\n", c);
    c &= b;
    printf("c &= b = %d\n", c);
    c |= b;
    printf("c |= b = %d\n", c);
    c ^= b;
    printf("c ^= b = %d\n", c);
    c <<= 1;
    printf("c <<= 1 = %d\n", c);
    c >>= 1;
    printf("c >>= 1 = %d\n", c);

    return 0;
}
