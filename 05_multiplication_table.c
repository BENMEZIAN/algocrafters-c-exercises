/*
 * AlgoCrafters - Practice Time: C Programming Exercises
 * Exercise 5: Loops
 *
 * Display the multiplication table of a number from 1 to 10.
 */

#include <stdio.h>

int main(void) {
    int number;

    printf("Enter a number: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    printf("Multiplication table of %d:\n", number);

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}
