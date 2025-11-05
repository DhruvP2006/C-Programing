#include <stdio.h>
#include <stdlib.h>

int main()
{
  int memory_lines, blocks;

  printf("Enter number of main memory lines:");
  scanf("%d", &memory_lines);

  printf("Enter number of blocks in the main memory:");
  scanf("%d", &blocks);

  int bmemory[blocks][4];
  int mmemory[memory_lines];

  printf("\nEnter the main memory data:\n");
  for (int i = 0; i < memory_lines; i++)
  {
    printf("Line no. %d: ", i + 1);
    scanf("%d", &mmemory[i]);
  }

  int k = 0;
  for (int i = 0; i < blocks; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      bmemory[i][j] = mmemory[k++];
    }
  }

  printf("\nDirect mapped cache\n");
  for (int i = 0; i < blocks; i++)
  {
    printf("\nBlock %d: ", i);
    for (int j = 0; j < 4; j++)
    {
      printf("%d ", bmemory[i][j]);
    }
  }

  printf("\n\nSample cache:\n");
  for (int i = 0; i < blocks; i++)
  {
    int random = rand() % 4;
    printf("%d ", bmemory[i][random]);
  }

  printf("\n");

  return 0;
}