/*
 * AlgoCrafters - Mini Project: Student Grade Management System
 * Concepts: input/output, arithmetic, relational/logical operators,
 * if/else, switch, and do...while.
 *
 * Example grading scale: A >= 90, B >= 80, C >= 70, D >= 60, else F.
 * Passing average: 50 or above.
 */

#include <stdio.h>

int main(void) {
    int choice;
    int marksEntered = 0;
    float mark1 = 0.0f, mark2 = 0.0f, mark3 = 0.0f;
    float total = 0.0f, average = 0.0f;
    char grade;

    do {
        printf("===== Student Grade Management System =====\n");
        printf("1. Enter student marks\n");
        printf("2. Display student report\n");
        printf("3. Exit\n");
        printf("===========================================\n");
        printf("Choose an option: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number.\n");
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF) {
                /* discard invalid input */
            }
            choice = 0;
            continue;
        }

        switch (choice) {
            case 1:
                printf("Enter mark for subject 1 (0-100): ");
                if (scanf("%f", &mark1) != 1) {
                    printf("Invalid mark input.\n");
                    return 1;
                }

                printf("Enter mark for subject 2 (0-100): ");
                if (scanf("%f", &mark2) != 1) {
                    printf("Invalid mark input.\n");
                    return 1;
                }

                printf("Enter mark for subject 3 (0-100): ");
                if (scanf("%f", &mark3) != 1) {
                    printf("Invalid mark input.\n");
                    return 1;
                }

                if (mark1 < 0 || mark1 > 100 ||
                    mark2 < 0 || mark2 > 100 ||
                    mark3 < 0 || mark3 > 100) {
                    printf("Marks must be between 0 and 100. Please enter them again.\n");
                    marksEntered = 0;
                } else {
                    total = mark1 + mark2 + mark3;
                    average = total / 3.0f;
                    marksEntered = 1;
                    printf("Marks saved successfully.\n");
                }
                break;

            case 2:
                if (!marksEntered) {
                    printf("Please enter valid marks first (option 1).\n");
                    break;
                }

                if (average >= 90) {
                    grade = 'A';
                } else if (average >= 80) {
                    grade = 'B';
                } else if (average >= 70) {
                    grade = 'C';
                } else if (average >= 60) {
                    grade = 'D';
                } else {
                    grade = 'F';
                }

                printf("------------- Student Report -----------\n");
                printf("Subject 1: %.2f/100\n", mark1);
                printf("Subject 2: %.2f/100\n", mark2);
                printf("Subject 3: %.2f/100\n", mark3);
                printf("Total:     %.2f/300\n", total);
                printf("Average:   %.2f/100\n", average);
                printf("Grade:     %c\n", grade);

                if (average >= 50) {
                    printf("Status:    Passed\n");
                } else {
                    printf("Status:    Failed\n");
                }
                printf("----------------------------------------\n");
                break;

            case 3:
                printf("Thank you for using the program. Goodbye!\n");
                break;

            default:
                printf("Invalid choice. Please choose 1, 2, or 3.\n");
        }
    } while (choice != 3);

    return 0;
}