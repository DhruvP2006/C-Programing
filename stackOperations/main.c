#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int stack[SIZE], top = -1;

void push(){
int value;
if (top == SIZE -1){
    printf("Stack overflow\n");
}
else{
    printf("Enter value to push: ");
    scanf("%d", &value);
    stack[++top] =value;
}
}

void pop(){
if(top == -1){
    printf("Stack underflow\n");

}
else{
    printf("Popped element: %d\n", stack[top]);
    top--;
}
}

void peek(){
if(top==-1){
    printf("Stack is Empty");
}
 else{
    printf("Top element: %d", stack[top]);
 }
}

void display(){
int i;
if(top == -1){
    printf("Stack is Empyt");

}
else{
    printf("Stack element\n");
    for(i = top; i>=0; i--){
        printf("%d\n", stack[i]);
    }
}
}

int main()
{
int choice;
while(1){
    printf("\n --- Stack Operations ---\n");
    printf("1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice){
    case 1:
        push();
        break;
    case 2:
        pop();
        break;
    case 3:
        peek();
        break;
    case 4:
        display();
        break;
    case 5:
        exit(0);
    default:
        printf("Invalid Choice\n");

    }

}
return 0;
}
