#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SLOTS 100

typedef struct
{
  char tag[50];
  int rank;
} Unit;

typedef struct
{
  Unit pool[MAX_SLOTS];
  int filled;
} PriorityStore;

void swap_units(Unit *first, Unit *second)
{
  Unit buffer = *first;
  *first = *second;
  *second = buffer;
}

void reset_store(PriorityStore *store)
{
  store->filled = 0;
}

void sift_down(PriorityStore *store)
{
  int cursor = 0;
  while (2 * cursor + 1 < store->filled)
  {
    int left_child = 2 * cursor + 1;
    int right_child = left_child + 1;
    int biggest = left_child;
    if (right_child < store->filled && store->pool[right_child].rank > store->pool[left_child].rank)
      biggest = right_child;
    if (store->pool[cursor].rank >= store->pool[biggest].rank)
      break;
    swap_units(&store->pool[cursor], &store->pool[biggest]);
    cursor = biggest;
  }
}

int push_unit(PriorityStore *store, Unit entry)
{
  if (store->filled >= MAX_SLOTS)
  {
    printf("Storage limit reached - cannot register more units.\n");
    return 0;
  }
  int slot = store->filled++;
  while (slot > 0)
  {
    int ancestor = (slot - 1) / 2;
    if (entry.rank <= store->pool[ancestor].rank)
      break;
    store->pool[slot] = store->pool[ancestor];
    slot = ancestor;
  }
  store->pool[slot] = entry;
  return 1;
}

int pop_least_critical(PriorityStore *store, Unit *removed)
{
  if (store->filled == 0)
    return 0;
  *removed = store->pool[0];
  store->pool[0] = store->pool[--store->filled];
  sift_down(store);
  return 1;
}

void clear_stdin(void)
{
  int ch;
  while ((ch = getchar()) != '\n' && ch != EOF)
    ;
}

void read_unit_details(Unit *unit)
{
  printf("\nUnit Tag: ");
  if (fgets(unit->tag, sizeof(unit->tag), stdin))
    unit->tag[strcspn(unit->tag, "\n")] = '\0';
  int value;
  while (1)
  {
    printf("Rank (1=essential, 5=expendable): ");
    if (scanf("%d", &value) == 1 && value >= 1 && value <= 5)
    {
      unit->rank = value;
      clear_stdin();
      break;
    }
    clear_stdin();
    printf("Enter a value 1-5.\n");
  }
}

int display_menu(void)
{
  int selection;
  while (1)
  {
    printf("\n>>> Unit Control Panel <<<\n");
    printf("1 - Register Unit\n");
    printf("2 - Discard Least Essential\n");
    printf("3 - Show All Units\n");
    printf("4 - Terminate\n");
    printf("Choice: ");
    if (scanf("%d", &selection) == 1 && selection >= 1 && selection <= 4)
    {
      clear_stdin();
      return selection;
    }
    clear_stdin();
    printf("Valid choices are 1-4.\n");
  }
}

void print_store(PriorityStore *store)
{
  if (store->filled == 0)
  {
    printf("\nNo units present.\n");
    return;
  }
  printf("\n=== Units (Heap Layout) ===\n");
  printf("Total: %d\n", store->filled);
  printf("--------------------------------------------\n");
  printf("| Pos | Tag                         | Rank |\n");
  printf("--------------------------------------------\n");
  for (int pos = 0; pos < store->filled; ++pos)
  {
    printf("| %3d | %-27s | %4d |\n", pos, store->pool[pos].tag, store->pool[pos].rank);
  }
  printf("--------------------------------------------\n");
  printf("* Position 0 will be discarded next\n");
}

int main(void)
{
  PriorityStore registry;
  reset_store(&registry);
  printf("Unit Prioritization Engine Started\n");
  printf("Higher rank = lower importance = removed first\n");
  int action;
  while ((action = display_menu()) != 4)
  {
    switch (action)
    {
    case 1:
    {
      if (registry.filled >= MAX_SLOTS)
      {
        printf("All slots occupied.\n");
        break;
      }
      Unit newcomer;
      read_unit_details(&newcomer);
      if (push_unit(&registry, newcomer))
        printf("Registered: %s (Rank %d)\n", newcomer.tag, newcomer.rank);
      break;
    }
    case 2:
    {
      Unit discarded;
      if (pop_least_critical(&registry, &discarded))
      {
        printf("\n--- DISCARDING LEAST ESSENTIAL ---\n");
        printf("Tag: %s\n", discarded.tag);
        printf("Rank: %d\n", discarded.rank);
      }
      else
      {
        printf("Nothing to discard.\n");
      }
      break;
    }
    case 3:
      print_store(&registry);
      break;
    }
  }
  printf("\nEngine terminated.\n");
  return 0;
}