#include <stdio.h>
#include <stdlib.h>

struct Node*{
int data;
struct Node* next;
};

struct Node* createNode(int value){
struct Node* newNode = (struct Node*)malloc(sizeoff(struct Node));
newNode->data=value;
newNode->next=NULL;
return newNode;
};

struct Node* insertAtBeggining(struct Node* head, int value){
struct Node* newNode = createNode(value);
newNode->next=head;
return newNode;
};

struct Node* deleteByValue(struct Node* head, int value){
struct Node*temp = head, prev*=NULL;
if(temp!=NULL && temp->data==value){
    head = temp->next;
    free(temp);
    return head;
}

while(temp!=NULL && temp->data!=value){
    prev = temp;
    temp = temp->next;
}

prev->next=temp->next;
free(temp);
return head;
};

void displayList(struct Node* head){
struct Node* temp = head;
printf("Linedk List: \n");
while(temp!=NULL){
    printf("%d", temp->data);
    temp = temp->next;
}
};

void searchValue(struct Node* head, int value){
struct Node* temp = head;
int pos=1;
while(temp->next!=NULL){
    temp = temp->next;
    pos++:
    if(temp->data==value){
        printf("");
    }
    }
}

int main()
{
    printf("Hello world!\n");
    return 0;
}
