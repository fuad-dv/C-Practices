#include <stdio.h>

int main() {
    int balance = 1000;
    int result;
    int round;
    for (int round = 1; round <= 5; round++) {
        printf("Round %d result (1=Win, 0=Lose): ", round);
        scanf("%d", &result);
        if (result == 1) {
            balance += 500;
        } else if (result == 0) {
            balance -= 500;
        } else {
            printf("Invalid input! Please enter 1 or 0.\n");
            round--;
            continue;
        }
        if (balance <= 0) {
            printf("Player Eliminated!\n");
            printf("Balance reached 0.\n");
            return 0;
        }
    }
    printf("Final Balance: %d\n", balance);
    if (balance > 0) {
        printf("Status: Survived!\n");
    } else {
        printf("Status: Eliminated!\n");
    }
    return 0;
}