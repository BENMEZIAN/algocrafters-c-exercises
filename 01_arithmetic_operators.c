/*
 * AlgoCrafters - Practice Time: C Programming Exercises
 * Exercise 1: Arithmetic Operators
 *
 * Read two integers and display their sum, difference, product,
 * integer quotient, and remainder.
 */

#include <stdio.h>

int main(void) {
    int a, b;

    printf("Enter two integers: ");
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Invalid input. Please enter two integers.\n");
        return 1;
    }

    printf("Sum: %d\n", a + b);
    printf("Difference: %d\n", a - b);
    printf("Product: %d\n", a * b);

    if (b != 0) {
        printf("Quotient (integer division): %d\n", a / b);
        printf("Remainder: %d\n", a % b);
    } else {
        printf("Quotient: undefined (division by zero)\n");
        printf("Remainder: undefined (division by zero)\n");
    }

    return 0;
}
