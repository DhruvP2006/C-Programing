#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Queue {
    struct Node *front, *rear;
};

struct Node* newNode(int data) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}

struct Queue* createQueue() {
    struct Queue* q = (struct Queue*)malloc(sizeof(struct Queue));
    q->front = q->rear = NULL;
    return q;
}

void enqueue(struct Queue* q, int data) {
    struct Node* temp = newNode(data);

    if (q->rear == NULL) {        q->front = q->rear = temp;
        q->rear->next = q->front; // circular link
        return;
    }

    q->rear->next = temp;
    q->rear = temp;
    q->rear->next = q->front; // maintain circular link
}

int dequeue(struct Queue* q) {
    if (q->front == NULL) {
        printf("Queue is empty!\n");
        return -1;
    }

    int data;
    if (q->front == q->rear) { // Only one element
        data = q->front->data;
        free(q->front);
        q->front = q->rear = NULL;
    } else {
        struct Node* temp = q->front;
        data = temp->data;
        q->front = q->front->next;
        q->rear->next = q->front; // maintain circular link
        free(temp);
    }
    return data;
}

void display(struct Queue* q) {
    if (q->front == NULL) {
        printf("Queue is empty!\n");
        return;
    }

    struct Node* temp = q->front;
    printf("Queue: ");
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != q->front);
    printf("\n");
}

int main() {
    struct Queue* q = createQueue();

    int A[] = {11, 33, 55, 10, 66};
    int n = sizeof(A) / sizeof(A[0]);
    int i;

    for (i = 0; i < n; i++) {
        enqueue(q, A[i]);
    }

    printf("After enqueuing elements:\n");
    display(q);

    printf("Dequeued: %d\n", dequeue(q));
    printf("Dequeued: %d\n", dequeue(q));

    printf("After dequeuing two elements:\n");
    display(q);

    return 0;
}
