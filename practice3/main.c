#include <stdio.h>
#include <stdlib.h>

struct Node{
int data;
struct Node* next;
};

struct Node* createStack(){
return NULL;
};

struct Node* push(struct Node*top, int value){
    struct newNode = (struct Node*)malloc(sizeoff(struct Node));
    if(!newNode){
        printf("Memory allocation failed");
        return top;
            }
            newNode->data=value;
            newNode->next= top;
            top=newNode;
            prtinf("%d pushed to stack", &value);
            return top;

};

struct Node* pop(struct Node* top){
if(top==NULL){
    prtinf("Stack underflow");
    return top;
}
struct Node* temp = top;
printf("Popped element = %d\n", top->data);
top = top->next;
free(temp);
return top;
} ;

void traverse(struct Node* top){
if(top==NULL){
    printf("Stack is Empty");
}
struct Node* ptr = top;
    printf("Stack elements\n");
while(top!=NULL){
    printf("%d", &ptr->data);
    ptr = ptr->next;
    printf("\n");
}
}

void search(struct Node* top, int key){
struct Node* ptr = top;
int pos = 1;
while(ptr!=NULL){

    if(ptr->data==key){
        printf("Element found at position %d", &pos);
    }
    pos++;
    ptr=ptr->next;
}
}

void peek(struct Node* top){
    if(top==NULL){
        printf("Stack is empyt");
    } else{
    printf("Top element is %d\n", top->data);
    }
}

int main()
{
    printf("Hello world!\n");
    return 0;
}
