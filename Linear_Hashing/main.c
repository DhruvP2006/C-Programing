#include <stdio.h>
#include <stdlib.h>
#define TABLE_SIZE 10
int hashTable[TABLE_SIZE];
void initHashTable()
{
for (int i = 0; i < TABLE_SIZE; i++)
{
hashTable[i] = -1;
}
}
int hashFunction(int key)
{
return key % TABLE_SIZE;
}
void insert(int key)
{
int index = hashFunction(key);
int originalIndex = index;
int count = 0;
while (hashTable[index] != -1)
{
count++;
index = (index + 1) % TABLE_SIZE;
if (index == originalIndex)
{
printf("Hash table is full, cannot insert %d.\n", key);
return;
}
}
hashTable[index] = key;
printf("Inserted %d at index %d.\n", key, index);
}
int search(int key)
{
int index = hashFunction(key);
int originalIndex = index;
while (hashTable[index] != -1)
{
if (hashTable[index] == key)
{
return index;
}
index = (index + 1) % TABLE_SIZE;
if (index == originalIndex)
{
break;
}
}
return -1;
}
void display()
{
printf("Hash Table:\n");
for (int i = 0; i < TABLE_SIZE; i++)
{
if (hashTable[i] != -1)
printf("Index %d: %d\n", i, hashTable[i]);
else
printf("Index %d: Empty\n", i);
}
}
int main()
{
int choice, key, foundIndex;
initHashTable();
printf("Hash Table Initialized.\n");
printf("\n\n=== Hash Table Menu ===\n");
printf("1. Insert Key\n");
printf("2. Search Key\n");
printf("3. Display Table\n");
printf("4. Exit\n");
while (1)
{
printf("Enter your choice: ");
scanf("%d", &choice);
switch (choice)
{
case 1:
printf("Enter key to insert: ");
scanf("%d", &key);
insert(key);
break;
case 2:
printf("Enter key to search: ");
scanf("%d", &key);
foundIndex = search(key);
if (foundIndex != -1) {
printf("Key %d found at index %d.\n", key, foundIndex);
} else {
printf("Key %d not found.\n", key);
}
break;
case 3:
display();
break;
case 4:
printf("Exiting Hash Table program. Goodbye!\n");
return 0;
default:
printf("Invalid choice. Please select 1, 2, 3, or 4.\n");
break;
}
}
return 0;
}
