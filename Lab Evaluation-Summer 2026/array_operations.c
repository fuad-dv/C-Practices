#include <stdio.h>

#define MAX 100

int arr[MAX];
int n = 0;

/*1. TRAVERSAL*/
void traversal() {
    if (n == 0) {
        printf("Array is empty!\n");
        return;
    }
    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

/* 2. INSERTION */
void insertion() {
    if (n >= MAX) {
        printf("Array is full!\n");
        return;
    }
    int pos, value;
    printf("Enter value to insert: ");
    scanf("%d", &value);
    printf("Enter position (0 to %d): ", n);
    scanf("%d", &pos);

    if (pos < 0 || pos > n) {
        printf("Invalid position!\n");
        return;
    }

    // Shift elements to the right to make space
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
    n++;
    printf("Inserted %d at position %d\n", value, pos);
}

/* ---------- 3. DELETION ---------- */
void deletion() {
    if (n == 0) {
        printf("Array is empty!\n");
        return;
    }
    int pos;
    printf("Enter position to delete (0 to %d): ", n - 1);
    scanf("%d", &pos);

    if (pos < 0 || pos >= n) {
        printf("Invalid position!\n");
        return;
    }

    // Shift elements to the left to fill the gap
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
    printf("Deleted element at position %d\n", pos);
}

/* ---------- 4. LINEAR SEARCH ---------- */
void linearSearch() {
    if (n == 0) {
        printf("Array is empty!\n");
        return;
    }
    int key;
    printf("Enter value to search: ");
    scanf("%d", &key);

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Found %d at index %d\n", key, i);
            return;
        }
    }
    printf("%d not found in array\n", key);
}

/* ---------- 5. BINARY SEARCH ---------- */
// NOTE: Binary search requires a SORTED array.
void binarySearch() {
    if (n == 0) {
        printf("Array is empty!\n");
        return;
    }
    int key;
    printf("Enter value to search (array must be sorted): ");
    scanf("%d", &key);

    int low = 0, high = n - 1, mid, found = 0;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == key) {
            printf("Found %d at index %d\n", key, mid);
            found = 1;
            break;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    if (!found) {
        printf("%d not found in array\n", key);
    }
}

/* ---------- 6. BUBBLE SORT ---------- */
void bubbleSort() {
    if (n == 0) {
        printf("Array is empty!\n");
        return;
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Array sorted successfully!\n");
    traversal();
}

/* ---------- MENU DRIVER ---------- */
int main() {
    int choice;

    // Optional: quickly fill array at start
    printf("Enter number of initial elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    do {
        printf("\n----- ARRAY OPERATIONS MENU -----\n");
        printf("1. Traversal\n");
        printf("2. Insertion\n");
        printf("3. Deletion\n");
        printf("4. Linear Search\n");
        printf("5. Binary Search\n");
        printf("6. Bubble Sort\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: traversal(); break;
            case 2: insertion(); break;
            case 3: deletion(); break;
            case 4: linearSearch(); break;
            case 5: binarySearch(); break;
            case 6: bubbleSort(); break;
            case 0: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while (choice != 0);

    return 0;
}
