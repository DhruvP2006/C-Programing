#include <stdio.h>
#include <stdlib.h>

struct Node{
int data;
struct Node* next;

};

struct Node* createStack(){
return NULL;
};

struct Node* push(struct Node* top, int value){
struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
if(!newNode){
    printf("Memory allocation failed\n");
    return top;
}

newNode->data = value;
newNode->next = top;
top = newNode;
printf("%d pushed to stack.\n", value);
return top;
}

struct Node* pop(struct Node* top){
if(top == NULL){
    printf("Stack Underflow! Cannot pop.\n");
    return top;
}
struct Node* temp = top;
printf("Popped element = %d\n", top->data);
top = top->next;
free(temp);
return top;
};

void traverse(struct Node* top){
if(top == NULL)
{
    printf("Stack is empty");
    return;
}

struct Node* ptr = top;
printf("Stack elements (Top to bottom):\n");
while(ptr!=NULL){
    printf("%d\n", ptr->data);
    ptr = ptr->next;
}
printf("\n");

}

void search(struct Node* top, int key){
int pos = 1;
struct Node* ptr = top;
while(ptr!=NULL){
    if(ptr->data == key){
        printf("Element %d found at position %d (from top)", key, pos);
        return;
    }
    ptr = ptr->next;
    pos++;

}
printf("Element %d not found in the stack.\n", key);
}

void peek(struct Node* top){
if(top==NULL)
 {
    printf("Stack is empty.\n");
 }
 else{
    printf("Top element = %d\n", top->data);
 }
}


int main()
{
    struct Node* top  = createStack();
    int choice, value, key;
    do{
        printf("\n---Dynamic Stack using Linked List---\n 1. Push(Insertion)\n 2. Pop (Deletion)\n 3. Traverse (Display)\n 4. Search an element\n 5. Peek (Top element)\n 6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
    case 1:
        printf("Enter the value to push: ");
        scanf("%d", &value);
        top = push (top, value);
        break;

    case 2:
        top = pop(top);
        break;

    case 3:
        traverse(top);
        break;
    case 4:
        printf("Enter the element to search: ");
        scanf("%d", &key);
        search(top, key);
        break;
    case 5:
        peek(top);
        break;
    case 6:
        printf("Exiting program.\n");
        break;
    default:
        printf("Enter a valid choice");
        break;
         }
    }
    while(choice != 6);
    return 0;
}
