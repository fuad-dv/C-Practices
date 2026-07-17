#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node *next;
};

struct Node *head = NULL;

/* ---------- 1. FRONT INSERT ---------- */
void insertFront() {
    int value;
    printf("Enter value to insert at front: ");
    scanf("%d", &value);

    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = head;
    head = newNode;

    printf("%d inserted at front\n", value);
}

/* ---------- 2. MIDDLE INSERT ---------- */
// Inserts after a given position (position counted from 1)
void insertMiddle() {
    if (head == NULL) {
        printf("List is empty! Use front insert first.\n");
        return;
    }

    int value, pos;
    printf("Enter value to insert: ");
    scanf("%d", &value);
    printf("Enter position after which to insert (1 = after 1st node): ");
    scanf("%d", &pos);

    struct Node *temp = head;
    for (int i = 1; i < pos; i++) {
        if (temp == NULL) {
            printf("Position out of range!\n");
            return;
        }
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Position out of range!\n");
        return;
    }

    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = temp->next;
    temp->next = newNode;

    printf("%d inserted at position %d\n", value, pos + 1);
}

/* ---------- 3. LAST INSERT ---------- */
void insertLast() {
    int value;
    printf("Enter value to insert at end: ");
    scanf("%d", &value);

    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        printf("%d inserted (list was empty)\n", value);
        return;
    }

    struct Node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;

    printf("%d inserted at end\n", value);
}

/* ---------- 4. DELETION ---------- */
void deleteNode() {
    if (head == NULL) {
        printf("List is empty! Nothing to delete.\n");
        return;
    }

    int value;
    printf("Enter value to delete: ");
    scanf("%d", &value);

    struct Node *temp = head;
    struct Node *prev = NULL;

    // If head node itself holds the value
    if (temp != NULL && temp->data == value) {
        head = temp->next;
        free(temp);
        printf("%d deleted from list\n", value);
        return;
    }

    // Search for the value, keeping track of the previous node
    while (temp != NULL && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("%d not found in list\n", value);
        return;
    }

    prev->next = temp->next;
    free(temp);
    printf("%d deleted from list\n", value);
}

/* ---------- Helper: Display ---------- */
void display() {
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }
    struct Node *temp = head;
    printf("List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

/* ---------- MENU DRIVER ---------- */
int main() {
    int choice;

    do {
        printf("\n----- LINKED LIST OPERATIONS MENU -----\n");
        printf("1. Front Insert\n");
        printf("2. Middle Insert\n");
        printf("3. Last Insert\n");
        printf("4. Delete\n");
        printf("5. Display\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: insertFront(); break;
            case 2: insertMiddle(); break;
            case 3: insertLast(); break;
            case 4: deleteNode(); break;
            case 5: display(); break;
            case 0: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while (choice != 0);

    return 0;
}
