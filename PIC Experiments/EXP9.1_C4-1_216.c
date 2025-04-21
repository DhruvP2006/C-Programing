#include <stdio.h>

#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;
int n;

void push(int x);
int pop();
int peek();
void display();

int main()
{
  printf("Enter the stack size (Max: %d): ", MAX_SIZE);
  scanf("%d", &n);

  if (n <= 0 || n > MAX_SIZE)
  {
    printf("Invalid stack size.\n");
    return 1;
  }

  int choice, x;

  while (1)
  {
    printf("\n1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
      printf("Enter element to push: ");
      scanf("%d", &x);
      push(x);
      break;

    case 2:
      x = pop();
      if (x != -1)
        printf("Popped element: %d\n", x);
      break;

    case 3:
      x = peek();
      if (x != -1)
        printf("Top element: %d\n", x);
      break;

    case 4:
      display();
      break;

    case 5:
      printf("Exiting program.\n");
      return 0;

    default:
      printf("Invalid choice, try again.\n");
    }
  }
}

void push(int x)
{
  if (top >= n - 1)
  {
    printf("Stack Overflow\n");
  }
  else
  {
    stack[++top] = x;
    printf("%d pushed to stack\n", x);
  }
}

int pop()
{
  if (top < 0)
  {
    printf("Stack Underflow\n");
    return -1;
  }
  else
  {
    return stack[top--];
  }
}

int peek()
{
  if (top < 0)
  {
    printf("Stack is empty\n");
    return -1;
  }
  else
  {
    return stack[top];
  }
}

void display()
{
  if (top < 0)
  {
    printf("Stack is empty\n");
  }
  else
  {
    printf("Stack contents (top to bottom):\n");
    for (int i = top; i >= 0; i--)
    {
      printf("%d\n", stack[i]);
    }
  }
}
