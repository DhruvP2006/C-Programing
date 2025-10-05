#include <stdio.h>
#include <stdlib.h>

struct Node{
int data;
struct Node* next;
};

struct Node* createNode(int value){
struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
newNode->data = value;
newNode->next = NULL;
return newNode;
};

struct Node* insertAtBeginning(struct Node* head, int value){
struct Node* newNode = createNode(value);
newNode->next=head;
return newNode;
};

struct Node* deleteByValue(struct Node* head, int value){
struct Node *temp = head, *prev = NULL;

if(temp !=NULL && temp->data==value){
    head = temp->next;
    free(temp);
    return head;
}

while(temp !=NULL &&temp->data!=value){
    prev = temp;
    temp = temp->next;
}

if(temp==NULL){
    printf("Value %d not found in the list.\n", value);
    return head;
}
prev->next=temp->next;
free(temp);
return head;

};

void displayList(struct Node* head){
struct Node* temp= head;
printf("Linked List: ");
while(temp!=NULL){
    printf("%d ", temp-> data);
    temp = temp->next;

}
printf("\n");

}

void searchValue(struct Node* head, int key){
struct Node* temp = head;
int pos =1;
while(temp!=NULL){
    if(temp->data==key){
        printf("Value %d found at position %d.\n", key, pos);
        return;
    }
    temp = temp->next;
    pos++;
}
printf("Value %d not found in the list.\n", key);
}

int main()
{
int i;
int initialValues[] = {97, 53, 367, 76, 121, 10};
struct Node* head = NULL;

for(i = 5; i>=0; i--){
    head = insertAtBeginning(head, initialValues[i]);
}

printf("Initial Linked List: \n");
displayList(head);

head = insertAtBeginning(head, 32);
printf("\nAfter inserting 32 at beginning: \n");
displayList(head);

int deleteVal;
printf("Enter a value to delete from the list: ");
scanf("%d", &deleteVal);
head = deleteByValue(head, deleteVal);

printf("\nLinked List after deletion:\n");
displayList(head);

int searchVal;
printf("\nEnter a value to search in the list: ");
scanf("%d", &searchVal);
searchValue(head, searchVal);

    return 0;
}
