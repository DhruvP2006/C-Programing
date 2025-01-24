#include <stdio.h>

int main()
{
  int a, b, c;
  printf("Enter 3 numbers: ");
  scanf("%d %d %d", &a, &b, &c);
  printf("Using Nested if else statement \n");
  if (a > b)
  {
    if (a > c)
    {
      printf("The largest Number is: %d \n", a);
    }
    else
    {
      printf("The largest Number is: %d \n", c);
    }
  }
  else
  {
    if (b > c)
    {
      printf("The largest Number is: %d \n", b);
    }
    else
    {
      printf("The largest Number is: %d \n", c);
    }
  }
  printf("Using ternary operator \n");
  (a > b) ? ((a > c) ? printf("The largest Number is: %d", a) : printf("The largest Number is: %d", c)) : ((b > c) ? printf("The largest Number is: %d", b) : printf("The largest Number is: %d", c));

  return 0;
}