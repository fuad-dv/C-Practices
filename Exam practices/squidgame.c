#include <stdio.h>

int main() {
    int round = 1;
    int rr;
    int balance = 1000;
    
    while (round <= 5) {
        printf("Round %d result (1=Win, 0=Lose): \n", round);
        scanf("%d", &rr);
        
        if (rr == 1) {
            balance += 500;
            round++;  // Proceed to next round
        } else if (rr == 0) {
            balance -= 500;
            round++;  // Proceed to next round
        } else {
            printf("Invalid input! Please enter 1 or 0.\n");
            // Do not increment round; repeat this round
        }
        
        // Check balance after each valid round
        if (balance <= 0) {
            printf("Player eliminated\n");
            return 0;
        }
    }
    
    printf("Final Balance is: %d\n", balance);
    return 0;
}