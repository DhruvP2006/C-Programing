#include <stdio.h>

int main()
{
  int incomingStream[30];
  int pageFaults = 0;
  int frames;
  int m, n, s, pages;

  printf("Enter the number of pages in the reference string: ");
  scanf("%d", &pages);

  printf("Enter the page reference string: ");
  for (m = 0; m < pages; m++)
  {
    scanf("%d", &incomingStream[m]);
  }

  printf("Enter the number of frames: ");
  scanf("%d", &frames);

  int temp[frames];
  for (m = 0; m < frames; m++)
  {
    temp[m] = -1;
  }

  int j = 0;

  printf("\nIncoming Page\t");
  for (m = 0; m < frames; m++)
  {
    printf("Frame %d\t", m + 1);
  }
  printf("\n");

  for (m = 0; m < pages; m++)
  {
    s = 0;
    for (n = 0; n < frames; n++)
    {
      if (incomingStream[m] == temp[n])
      {
        s = 1;
        break;
      }
    }

    if (s == 0)
    {
      pageFaults++;
      temp[j] = incomingStream[m];
      j = (j + 1) % frames;
    }

    printf("%d\t\t", incomingStream[m]);
    for (n = 0; n < frames; n++)
    {
      if (temp[n] != -1)
        printf("%d\t\t", temp[n]);
      else
        printf("-\t\t");
    }
    if (s == 0)
    {
      printf("PF No. %d", pageFaults);
    }
    printf("\n");
  }

  printf("\nTotal Page Faults: %d\n", pageFaults);

  return 0;
}
