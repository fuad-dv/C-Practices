#include <stdio.h>

int main() {
    int marks[5];
    int choice, i;
    printf("Enter marks of 5 students:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
    }
    do {
        printf("\nMenu:\n");
        printf("1 → Display all student marks\n");
        printf("2 → Find the highest mark\n");
        printf("3 → Count students scoring above 80\n");
        printf("4 → Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Student marks are:\n");
                for (i = 0; i < 5; i++) {
                    printf("Student %d: %d\n", i + 1, marks[i]);
                }
                break;

            case 2: {
                int highest = marks[0];
                for (i = 1; i < 5; i++) {
                    if (marks[i] > highest) {
                        highest = marks[i];
                    }
                }
                printf("Highest mark is: %d\n", highest);
                break;
            }
            case 3: {
                int count = 0;
                for (i = 0; i < 5; i++) {
                    if (marks[i] > 80) {
                        count++;
                    }
                }
                printf("Number of students scoring > 80: %d\n", count);
                break;
            }
            case 4:
                printf("Exiting program. Goodbye!\n");
                break;

            default:
                printf("Invalid choice. Please enter 1–4.\n");
        }
    } while (choice != 4);

    return 0;
}
