#include<stdio.h>
#include<stdlib.h>

struct Node{
int data;
Node * next;
};

struct Queue{
struct Node* front,* rear;
};

struct Node* newNode(int data){
struct Node = (struct Node *)malloc(sizeof(struct Node));
temp->data = data;
temp->next = NULL;
return temp;
};

struct Queue * createQueue(){
struct Queue* q = (struct Queue *)malloc(sizeof(Struct Queue));
q->front = q->rear = NULL;
return q;
};

void Queue* enqueue(int data){
struct Node* temp = newNode(data);

if(q->rear = NULL){
q->front = q->rear = temp;
return;
}

q->rear->next = temp;
q->rear = temp;
}

void Queue* dequeue(){
if(q->front = NULL){
    printf("Queue is empty\n");
return -1;
}
struct Node* temp = q->front;
int data = temp->data;
q->front = q->front->next;
if(q->front=NULL){
    q->rear = NULL;
}
free(temp);
return data;
}

void display(struct Queue *q){
struct Node * temp = q->front;
prtinf("Queue");
}















