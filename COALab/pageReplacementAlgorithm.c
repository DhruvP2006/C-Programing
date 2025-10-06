#include <stdio.h>
#include <stdlib.h>

void lru_page_replacement(int reference_string[], int num_pages, int capacity)
{
  int *cache = (int *)malloc(capacity * sizeof(int));
  int **fault_states = (int **)malloc(num_pages * sizeof(int *));
  int current_size = 0;
  int page_faults = 0;
  int hits = 0;

  for (int i = 0; i < capacity; i++)
  {
    cache[i] = -1;
  }

  for (int i = 0; i < num_pages; i++)
  {
    int page = reference_string[i];
    int found_index = -1;

    for (int j = 0; j < current_size; j++)
    {
      if (cache[j] == page)
      {
        found_index = j;
        break;
      }
    }

    if (found_index != -1)
    {
      hits++;
      int hit_page = cache[found_index];
      for (int j = found_index; j < current_size - 1; j++)
      {
        cache[j] = cache[j + 1];
      }
      cache[current_size - 1] = hit_page;
    }
    else
    {
      page_faults++;

      if (current_size < capacity)
      {
        cache[current_size] = page;
        current_size++;
      }
      else
      {
        for (int j = 0; j < capacity - 1; j++)
        {
          cache[j] = cache[j + 1];
        }
        cache[capacity - 1] = page;
      }
      fault_states[page_faults - 1] = (int *)malloc(capacity * sizeof(int));
      for (int k = 0; k < capacity; k++)
      {
        fault_states[page_faults - 1][k] = cache[k];
      }
    }
  }

  printf("\n");
  for (int i = 0; i < capacity; i++)
  {
    for (int j = 0; j < page_faults; j++)
    {
      if (fault_states[j][i] == -1)
      {
        printf(" \t");
      }
      else
      {
        printf("%d\t", fault_states[j][i]);
      }
    }
    printf("\n");
  }

  printf("\nThe no of page faults is:- %d\n", page_faults);
  printf("The no of page hits is:- %d\n", hits);

  if (num_pages > 0)
  {
    double hit_ratio = (double)hits / num_pages * 100.0;
    double miss_ratio = (double)page_faults / num_pages * 100.0;
    printf("The page hit ratio is:- %.2f%%\n", hit_ratio);
    printf("The page miss ratio is:- %.2f%%\n", miss_ratio);
  }

  free(cache);
  for (int i = 0; i < page_faults; i++)
  {
    free(fault_states[i]);
  }
  free(fault_states);
}

int main()
{
  int num_pages;
  int capacity;

  printf("Enter number of frames:- ");
  scanf("%d", &capacity);

  if (capacity <= 0)
  {
    printf("Error: Cache capacity must be a positive integer.\n");
    return 1;
  }

  printf("Enter number of pages:- ");
  scanf("%d", &num_pages);

  if (num_pages <= 0)
  {
    printf("Error: Number of pages must be positive.\n");
    return 1;
  }

  int *reference_string = (int *)malloc(num_pages * sizeof(int));
  printf("Enter the reference string:-\n");
  for (int i = 0; i < num_pages; i++)
  {
    scanf("%d", &reference_string[i]);
  }

  lru_page_replacement(reference_string, num_pages, capacity);

  free(reference_string);
  return 0;
}
