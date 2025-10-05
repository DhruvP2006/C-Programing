#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
    struct Node *prev;
};

struct Node* head = NULL;

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

void insert(int data) {
    struct Node* newNode = createNode(data);
    if (head == NULL) {
        head = newNode;
        newNode->next = head;
        newNode->prev = head;
        return;
    }
    struct Node* last = head->prev;
    last->next = newNode;
    newNode->prev = last;
    newNode->next = head;
    head->prev = newNode;
}

void deleteNode(int key) {
    if (head == NULL) return;

    struct Node* curr = head;
    do {
        if (curr->data == key) break;
        curr = curr->next;
    } while (curr != head);

    if (curr->data != key) return;

    if (curr->next == curr) { // If it's the only node
        head = NULL;
    } else {
        curr->prev->next = curr->next;
        curr->next->prev = curr->prev;
        if (curr == head) {
            head = curr->next;
        }
    }
    free(curr);
}

int search(int key) {
    if (head == NULL) return 0;

    struct Node* temp = head;
    do {
        if (temp->data == key) {
            return 1;
        }
        temp = temp->next;
    } while (temp != head);
    return 0;
}

void displayForward() {
    if (head == NULL) {
        printf("\n");
        return;
    }
    struct Node* temp = head;
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("\n");
}

void displayBackward() {
    if (head == NULL) {
        printf("\n");
        return;
    }
    struct Node* last = head->prev;
    struct Node* temp = last;
    do {
        printf("%d ", temp->data);
        temp = temp->prev;
    } while (temp != last);
    printf("\n");
}

int main() {
    insert(1);
    insert(2);
    insert(3);

    printf("Forward: ");
    displayForward();
    deleteNode(2);
    printf("Forward after deletion: ");
    displayForward();
    printf("Backward: ");
    displayBackward();

    printf("Search 2: %s\n", search(2) ? "Found" : "Not Found");
    printf("Search 3: %s\n", search(3) ? "Found" : "Not Found");

    return 0;
}
