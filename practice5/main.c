#include <stdio.h>
#include <stdlib.h>

struct Node{
int data;
struct Node * next;
};

struct Queue{
struct Node* front, *rear;
};

struct Node* newNode(int data){
struct Node* temp = (struct Node)malloc(sizeof(struct Node));
temp->data = data;
temp->next = NULL;
return temp;
};

struct Queue* createQueue(){
struct Node*temp = (struct Queue*)malloc(sizeoff(struct Queue));
q->front = q->rear = NULL;
return q;
};

void enqueue(struct Queue * q, int data){
struct Node* temp = newNode(data);

if(q->rear==NULL){
    q->rear = q->front = temp;
    q->rear->next = q->front;
    return;
}
q->rear->next = temp;
q->rear = temp;
q->rear->next=q->front;
}

int dequeue(struct Queue* q){
if(q->front==NULL){
    printf("Queue is empty");
    return -1;
}
int data;
if(q->front == q->rear){
    data=q->front->data;
    free(q->front);
    q->front = q->front->next;
    q->rear->next=q->front;
}
}

int main()
{
    printf("Hello world!\n");
    return 0;
}
