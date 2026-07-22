#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

// new node
struct Node* createNode(int val) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = NULL;
    return newNode;
}

// 1. Insert FRONT
void insertFront(int val) {
    struct Node* newNode = createNode(val);
    newNode->next = head;
    head = newNode;
    printf("Inserted %d at front\n", val);
}

// 2. Insert LAST
void insertLast(int val) {
    struct Node* newNode = createNode(val);
    
    if (head == NULL) {
        head = newNode;
        printf("Inserted %d at last (first node)\n", val);
        return;
    }
    
    struct Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    
    temp->next = newNode;
    printf("Inserted %d at last\n", val);
}

// 3. Insert MIDDLE
void insertMiddle(int val, int pos) {
    if (pos < 0 || head == NULL) {
        printf("Invalid position or empty list\n");
        return;
    }
    
    struct Node* newNode = createNode(val);
    struct Node* temp = head;
    
    for (int i = 0; i < pos && temp != NULL; i++)
        temp = temp->next;
    
    if (temp == NULL) {
        printf("Position out of range\n");
        free(newNode);
        return;
    }
    
    newNode->next = temp->next;
    temp->next = newNode;
    printf("Inserted %d after position %d\n", val, pos);
}

// 4. Delete from FRONT
void deleteFront() {
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }
    struct Node* temp = head;
    printf("Deleted %d from front\n", head->data);
    head = head->next;
    free(temp);
}

// 5. Delete from LAST
void deleteLast() {
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }
    if (head->next == NULL) {
        printf("Deleted %d from last (only node)\n", head->data);
        free(head);
        head = NULL;
        return;
    }
    
    struct Node* temp = head;
    while (temp->next->next != NULL)
        temp = temp->next;
    
    printf("Deleted %d from last\n", temp->next->data);
    free(temp->next);
    temp->next = NULL;
}

// 6. Delete from MIDDLE (by value)
void deleteMiddle(int val) {
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }
    
    if (head->data == val) {
        deleteFront();
        return;
    }
    
    struct Node* temp = head;
    while (temp->next != NULL && temp->next->data != val)
        temp = temp->next;
    
    if (temp->next == NULL) {
        printf("Value %d not found!\n", val);
        return;
    }
    
    struct Node* toDelete = temp->next;
    temp->next = temp->next->next;
    printf("Deleted %d from middle\n", val);
    free(toDelete);
}

// Display
void display() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    printf("List: ");
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    // Insertions
    insertLast(10);      
    insertLast(20);      
    insertLast(30);      
    insertFront(5);      
    insertMiddle(15, 1); 
    display();
    
    
    deleteFront();       
    display();
    
    deleteMiddle(15);   
    display();
    
    deleteLast();        
    display();
    
    return 0;
}
