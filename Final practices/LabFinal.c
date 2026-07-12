#include <stdio.h>
#include <string.h>
#define MAX 100
int main() {
    int n, i, choice;
    char names[MAX][50];
    int attendance[MAX]; 
    char searchName[50];
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        printf("Enter name of employee %d: ", i + 1);
        scanf("%s", names[i]);
        attendance[i] = 0; 
    }
    do {
        printf("\nEmployee Attendance Management System\n");
        printf("1. Check absentees\n");
        printf("2. Mark attendance for an employee\n");
        printf("3. Display all employee attendance\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if(choice == 1) {
            printf("\nList of absent employees:\n");
            int found = 0;
            for(i = 0; i < n; i++) {
                if(attendance[i] == 0) {
                    printf("%s\n", names[i]);
                    found = 1;
                }
            }
            if(!found) {
                printf("No absentees.\n");
            }
        }
        else if(choice == 2) {
            printf("Enter employee name to mark attendance: ");
            scanf("%s", searchName);
            int found = 0;
            for(i = 0; i < n; i++) {
                if(strcmp(names[i], searchName) == 0) {
                    int status;
                    printf("Enter attendance for %s (1 for Present, 0 for Absent): ", names[i]);
                    scanf("%d", &status);
                    if(status == 0 || status == 1) {
                        attendance[i] = status;

                        if(status == 1)
                            printf("%s has been marked as Present.\n", names[i]);
                        else
                            printf("%s has been marked as Absent.\n", names[i]);
                    } else {
                        printf("Invalid input! Use 1 or 0 only.\n");
                    }
                    found = 1;
                    break;
                }
            }
            if(!found) {
                printf("Employee not found!\n");
            }
        }
        else if(choice == 3) {
            printf("\nEmployee Attendance List:\n");

            for(i = 0; i < n; i++) {
                printf("%-10s - %s\n", names[i],
                       (attendance[i] == 1) ? "Present" : "Absent");
            }
        }
        else if(choice == 4) {
            printf("Exiting program. Thank you!\n");
        }
        else {
            printf("Invalid choice! Try again.\n");
        }
    } 
    while(choice != 4);
    return 0;
}