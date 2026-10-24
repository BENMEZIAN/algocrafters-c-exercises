/*
 * AlgoCrafters - Practice Time: C Programming Exercises
 * Exercise 3: Logical Operators
 *
 * Check whether a number is between 10 and 100, inclusive.
 */

#include <stdio.h>

int main(void) {
    int number;

    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    if (number >= 10 && number <= 100) {
        printf("%d is between 10 and 100, inclusive.\n", number);
    } else {
        printf("%d is outside the range 10 to 100.\n", number);
    }

    return 0;
}
