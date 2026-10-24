/*
 * AlgoCrafters - Practice Time: C Programming Exercises
 * Exercise 2: Conditional Statements
 *
 * Read an integer and determine whether it is positive, negative, or zero.
 */

#include <stdio.h>

int main(void) {
    int number;

    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    if (number > 0) {
        printf("%d is positive.\n", number);
    } else if (number < 0) {
        printf("%d is negative.\n", number);
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}
