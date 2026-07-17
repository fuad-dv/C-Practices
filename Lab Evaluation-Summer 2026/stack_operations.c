#include <stdio.h>

#define MAX 100

int stack[MAX];
int top = -1; // -1 means stack is empty

/* ---------- 1. PUSH ---------- */
void push() {
    if (top == MAX - 1) {
        printf("Stack Overflow! Cannot push.\n");
        return;
    }
    int value;
    printf("Enter value to push: ");
    scanf("%d", &value);

    top++;
    stack[top] = value;
    printf("%d pushed onto stack\n", value);
}

/* ---------- 2. POP ---------- */
void pop() {
    if (top == -1) {
        printf("Stack Underflow! Cannot pop.\n");
        return;
    }
    int value = stack[top];
    top--;
    printf("%d popped from stack\n", value);
}

/* ---------- Helper: Display (not required but useful to verify) ---------- */
void display() {
    if (top == -1) {
        printf("Stack is empty!\n");
        return;
    }
    printf("Stack (top to bottom): ");
    for (int i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

/* ---------- Helper: Peek ---------- */
void peek() {
    if (top == -1) {
        printf("Stack is empty!\n");
        return;
    }
    printf("Top element: %d\n", stack[top]);
}

/* ---------- MENU DRIVER ---------- */
int main() {
    int choice;

    do {
        printf("\n----- STACK OPERATIONS MENU -----\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Peek (Top element)\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: display(); break;
            case 4: peek(); break;
            case 0: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while (choice != 0);

    return 0;
}
