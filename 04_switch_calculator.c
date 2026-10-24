/*
 * AlgoCrafters - Practice Time: C Programming Exercises
 * Exercise 4: switch Statement
 *
 * A simple calculator supporting +, -, *, and /.
 */

#include <stdio.h>

int main(void) {
    double a, b;
    char operator;

    printf("Enter an expression (e.g. 12.5 * 2): ");
    if (scanf("%lf %c %lf", &a, &operator, &b) != 3) {
        printf("Invalid input. Example format: 12.5 * 2\n");
        return 1;
    }

    switch (operator) {
        case '+':
            printf("Result: %.2f\n", a + b);
            break;
        case '-':
            printf("Result: %.2f\n", a - b);
            break;
        case '*':
            printf("Result: %.2f\n", a * b);
            break;
        case '/':
            if (b == 0.0) {
                printf("Error: division by zero is not allowed.\n");
                return 1;
            }
            printf("Result: %.2f\n", a / b);
            break;
        default:
            printf("Unsupported operator. Use +, -, *, or /.\n");
            return 1;
    }

    return 0;
}
