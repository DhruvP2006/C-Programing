#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void onesComplement(int arr[], int size)
{
  for (int i = 0; i < size; i++)
    arr[i] = arr[i] == 0 ? 1 : 0;
}

void twosComplement(int arr[], int size)
{
  onesComplement(arr, size);
  int carry = 1;
  for (int i = size - 1; i >= 0; i--)
  {
    int sum = arr[i] + carry;
    arr[i] = sum % 2;
    carry = sum / 2;
  }
}

void decimalToBinary(int n, int arr[], int size)
{
  int isNegative = n < 0;
  if (isNegative)
    n = -n;
  for (int i = size - 1; i >= 0; i--)
  {
    arr[i] = n % 2;
    n /= 2;
  }
  if (isNegative)
    twosComplement(arr, size);
}

int binaryToDecimal(const int arr[], int size)
{
  int isNegative = arr[0] == 1;
  int val = 0;
  if (isNegative)
  {
    int *temp = (int *)malloc(size * sizeof(int));
    memcpy(temp, arr, size * sizeof(int));
    twosComplement(temp, size);
    for (int i = 0; i < size; i++)
      val = val * 2 + temp[i];
    free(temp);
    return -val;
  }
  else
  {
    for (int i = 0; i < size; i++)
      val = val * 2 + arr[i];
    return val;
  }
}

int *add(const int *a, const int *b, int size)
{
  int *result = (int *)malloc(sizeof(int) * size);
  int carry = 0;
  for (int i = size - 1; i >= 0; i--)
  {
    int sum = a[i] + b[i] + carry;
    result[i] = sum % 2;
    carry = sum / 2;
  }
  return result;
}

void printBits(const int *arr, int size)
{
  for (int i = 0; i < size; i++)
    printf("%d", arr[i]);
}

void shiftLeft(int AC[], int Q[], int size)
{
  for (int i = 0; i < size - 1; i++)
    AC[i] = AC[i + 1];
  AC[size - 1] = Q[0];
  for (int i = 0; i < size - 1; i++)
    Q[i] = Q[i + 1];
}

void restoringDivisionAlgo(int dividend, int divisor)
{
  int n = 4;
  int AC[4] = {0};
  int Q[4];
  int M[4];
  int negM[4];

  decimalToBinary(dividend, Q, n);
  decimalToBinary(divisor, M, n);

  memcpy(negM, M, sizeof(M));
  twosComplement(negM, n);

  printf("Restoring Division Algorithm\n");
  printf("Dividend (Q): ");
  printBits(Q, n);
  printf(" (%d)\n", dividend);
  printf("Divisor (M): ");
  printBits(M, n);
  printf(" (%d)\n", divisor);
  printf("2's complement of Divisor (-M): ");
  printBits(negM, n);
  printf("\n\n");

  printf("Step\tAC\tQ\tOperation\n");

  for (int i = 0; i < n; i++)
  {
    shiftLeft(AC, Q, n);
    printf("%d\t", i + 1);
    printBits(AC, n);
    printf("\t");
    printBits(Q, n);
    printf("\tShift left AC, Q\n");

    int *subRes = add(AC, negM, n);
    memcpy(AC, subRes, sizeof(int) * n);
    free(subRes);
    printf("\t");
    printBits(AC, n);
    printf("\t");
    printBits(Q, n);
    printf("\tAC = AC - M\n");

    if (AC[0] == 0)
    {
      Q[n - 1] = 1;
      printf("\t");
      printBits(AC, n);
      printf("\t");
      printBits(Q, n);
      printf("\tQ(0) = 1\n");
    }
    else
    {
      Q[n - 1] = 0;
      int *restoreRes = add(AC, M, n);
      memcpy(AC, restoreRes, sizeof(int) * n);
      free(restoreRes);
      printf("\t");
      printBits(AC, n);
      printf("\t");
      printBits(Q, n);
      printf("\tRestore AC, Q(0) = 0\n");
    }
    printf("\n");
  }

  printf("Final Result:\n");
  printf("Quotient (Q): ");
  printBits(Q, n);
  printf(" (%d)\n", binaryToDecimal(Q, n));
  printf("Remainder (AC): ");
  printBits(AC, n);
  printf(" (%d)\n", binaryToDecimal(AC, n));
}

int main()
{
  int dividend, divisor;
  printf("Enter dividend: ");
  scanf("%d", &dividend);
  printf("Enter divisor: ");
  scanf("%d", &divisor);
  restoringDivisionAlgo(dividend, divisor);
  return 0;
}